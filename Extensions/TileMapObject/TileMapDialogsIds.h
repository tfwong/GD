/**

Game Develop - Tile Map Extension
Copyright (c) 2014 Victor Levasseur (victorlevasseur52@gmail.com)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
    claim that you wrote the original software. If you use this software
    in a product, an acknowledgment in the product documentation would be
    appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be
    misrepresented as being the original software.

    3. This notice may not be removed or altered from any source
    distribution.

*/

#ifndef TILEMAPDIALOGSIDS_H
#define TILEMAPDIALOGSIDS_H

enum 
{
    //TileMapObjectEditor IDs 
    CHANGE_MAP_SIZE_TOOL_ID = 		1001,
    CONFIGURE_TILESET_TOOL_ID = 	1002,
    EDIT_TILE_TOOL_ID = 			1003,
    HIDE_UPPER_LAYERS_TOOL_ID = 	1004,
    ID_MAINPANEL = 					1005,
    ID_TILESETPANEL = 				1006,
    MODE_SINGLE_TILE_TOOL_ID =      1007,
    MODE_RECTANGLE_TILE_TOOL_ID =   1008,
    FILL_WITH_TILE_TOOL_ID =        1009,
    ERASE_ALL_TILES_TOOL_ID =       1010,


    //TileEditor IDs
    ADD_POINT_TOOL_ID = 			1101,
    COLLIDABLE_TOOL_ID = 			1102,
    EDIT_POINT_TOOL_ID = 			1103,
    REMOVE_POINT_TOOL_ID =			1104,
    RESET_MASK_TOOL_ID = 			1105,
    PREDEFINED_SHAPE_TOOL_ID =      1106,

    //Predefined shapes popup menu IDs
    //Note: TL means top-left, BR bottom-right 
    //and so on...
    RECTANGLE_SHAPE_TOOL_ID =       1201,
    TRIANGLE_TL_SHAPE_TOOL_ID =     1202,
    TRIANGLE_TR_SHAPE_TOOL_ID =     1203,
    TRIANGLE_BR_SHAPE_TOOL_ID =     1204,
    TRIANGLE_BL_SHAPE_TOOL_ID =     1205,
    SEMIRECT_T_SHAPE_TOOL_ID =      1206,
    SEMIRECT_R_SHAPE_TOOL_ID =      1207,
    SEMIRECT_B_SHAPE_TOOL_ID =      1208,
    SEMIRECT_L_SHAPE_TOOL_ID =      1209,
};

#endif