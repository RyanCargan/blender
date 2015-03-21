#ifndef BLENDER_GL_STATE
#define BLENDER_GL_STATE

/* Two goals:
 * -- batch draws by state so we don't have to "switch gears" as often
 * -- track current draw state internally so we don't have to bother the GL as often
 * Mike Erwin, Dec 2014 */

#include <stdbool.h>

typedef struct {
	bool blend; /* plus src & dst of glBlendFunc? */
	bool depth_test;
	bool depth_write;
	bool lighting;
} CommonDrawState;

typedef struct {
	bool smooth; /* implies blend / transparency. Disable depth write! (p179 of AGPUO) */
	float size;
} PointDrawState;

typedef struct {
	bool smooth; /* implies blend / transparency. Disable depth write! (p179 of AGPUO) */
	float width;
	int stipple; /* = 0 for don't */
} LineDrawState;

typedef struct PolygonDrawState {
	bool draw_front;
	bool draw_back;
	int material_id;
	int stipple; /* = 0 for don't */
} PolygonDrawState;

#define MATERIAL_NONE -1

void init_draw_state();

void set_common_state(const CommonDrawState*);
void set_point_state(const PointDrawState*);
void set_line_state(const LineDrawState*);
void set_polygon_state(const PolygonDrawState*);

#endif /* BLENDER_GL_STATE */
