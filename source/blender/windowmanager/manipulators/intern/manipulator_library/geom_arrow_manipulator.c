/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2016 Blender Foundation.
 * All rights reserved.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file blender/windowmanager/manipulators/intern/manipulator_library/geom_arrow_manipulator.c
 *  \ingroup wm
 */

int _MANIPULATOR_nverts_arrow = 25;
int _MANIPULATOR_ntris_arrow = 46;

float _MANIPULATOR_verts_arrow[][3] = {
    {-0.000000, 0.012320, 0.000000},
    {-0.000000, 0.012320, 0.974306},
    {0.008711, 0.008711, 0.000000},
    {0.008711, 0.008711, 0.974306},
    {0.012320, -0.000000, 0.000000},
    {0.012320, -0.000000, 0.974306},
    {0.008711, -0.008711, 0.000000},
    {0.008711, -0.008711, 0.974306},
    {-0.000000, -0.012320, 0.000000},
    {-0.000000, -0.012320, 0.974306},
    {-0.008711, -0.008711, 0.000000},
    {-0.008711, -0.008711, 0.974306},
    {-0.012320, 0.000000, 0.000000},
    {-0.012320, 0.000000, 0.974306},
    {-0.008711, 0.008711, 0.000000},
    {-0.008711, 0.008711, 0.974306},
    {0.000000, 0.072555, 0.974306},
    {0.051304, 0.051304, 0.974306},
    {0.072555, -0.000000, 0.974306},
    {0.051304, -0.051304, 0.974306},
    {-0.000000, -0.072555, 0.974306},
    {-0.051304, -0.051304, 0.974306},
    {-0.072555, 0.000000, 0.974306},
    {-0.051304, 0.051304, 0.974306},
    {0.000000, -0.000000, 1.268098},
};

float _MANIPULATOR_normals_arrow[][3] = {
    {0.000000, 0.776360, -0.630238},
    {0.000000, 0.594348, -0.804163},
    {0.548967, 0.548967, -0.630238},
    {0.420270, 0.420270, -0.804163},
    {0.776360, 0.000000, -0.630238},
    {0.594378, 0.000000, -0.804163},
    {0.548967, -0.548967, -0.630238},
    {0.420270, -0.420270, -0.804163},
    {0.000000, -0.776360, -0.630238},
    {0.000000, -0.594378, -0.804163},
    {-0.548967, -0.548967, -0.630238},
    {-0.420270, -0.420270, -0.804163},
    {-0.776360, 0.000000, -0.630238},
    {-0.594378, 0.000000, -0.804163},
    {-0.548967, 0.548967, -0.630238},
    {-0.420270, 0.420270, -0.804163},
    {0.000000, 0.843226, -0.537492},
    {0.596271, 0.596271, -0.537492},
    {0.843226, 0.000000, -0.537492},
    {0.596271, -0.596271, -0.537492},
    {0.000000, -0.843226, -0.537492},
    {-0.596271, -0.596271, -0.537492},
    {-0.843226, 0.000000, -0.537492},
    {-0.596271, 0.596271, -0.537492},
    {0.000000, 0.000000, 1.000000},
};

unsigned short _MANIPULATOR_indices_arrow[] = {
    1, 3, 2,
    3, 5, 4,
    5, 7, 6,
    7, 9, 8,
    9, 11, 10,
    11, 13, 12,
    5, 18, 19,
    15, 1, 0,
    13, 15, 14,
    6, 10, 14,
    11, 21, 22,
    7, 19, 20,
    13, 22, 23,
    3, 17, 18,
    9, 20, 21,
    15, 23, 16,
    1, 16, 17,
    23, 22, 24,
    21, 20, 24,
    19, 18, 24,
    17, 16, 24,
    16, 23, 24,
    22, 21, 24,
    20, 19, 24,
    18, 17, 24,
    0, 1, 2,
    2, 3, 4,
    4, 5, 6,
    6, 7, 8,
    8, 9, 10,
    10, 11, 12,
    7, 5, 19,
    14, 15, 0,
    12, 13, 14,
    14, 0, 2,
    2, 4, 6,
    6, 8, 10,
    10, 12, 14,
    14, 2, 6,
    13, 11, 22,
    9, 7, 20,
    15, 13, 23,
    5, 3, 18,
    11, 9, 21,
    1, 15, 16,
    3, 1, 17,
};

