/**
  * VWVO OriginSandBox Project 2014-8-13 version
  * 游戏工程配置(QSettings派生类管理)key类型头文件.
  *
  * @author BiXiaoxia
*/
#ifndef VWVO_PROJECT_CONFIG_KEY_H
#define VWVO_PROJECT_CONFIG_KEY_H

namespace ns_vwvo {
/// < \brief 游戏工程植被默认素材管理.
#define PRO_VEGETATION_MATERIAL_OBJIDLIST "Project/MenuMaterial/Vegetation"

///< \brief 程序语言管理,该选项不写进工程管理文件，写进本机.
#define PRO_SELECT_LANGUAGE "OrigineSandBox/Lang/SelectLang"

///< \breif 工程路径管理.
#define PRO_LAST_NEW_OR_OPEN_GAME_PATH "Project/Path/LastNewOrOpenGameProjectPath"
#define PRO_LAST_IMPORT_MATERIAL_PATH  "Project/Path/LastImportMaterialPath"
#define PRO_LAST_IMPORT_TEXTURE_PATH  "Project/Path/LastImportTexturePath"
#define PRO_LAST_IMPORT_AUDIO_PATH  "Project/Path/LastImportAudioPath"
#define PRO_LAST_ADD_INDOOR_EDITOR_WALL_PATH "Project/Path/LastAddIndoorEditorWallPath"
#define PRO_LAST_ADD_INDOOR_EDITOR_FLOOR_PATH "Project/Path/LastAddIndoorEditorFloorPath"
//PRO_LAST_IMPORT_FLOOR_WALL_MATERIAL_PATH随着版本开发可以去掉.
#define PRO_LAST_IMPORT_FLOOR_WALL_MATERIAL_PATH "Project/Path/LastImportFloorAndWallMaterialPath"
#define PRO_LAST_IMPORT_PART_RES_PATH "Project/Path/LastImportPartResourcePath"
#define PRO_LAST_IMPORT_FLOOR_MATERIAL_PATH "Project/Path/LastImportFloorMaterialPath"
#define PRO_LAST_IMPORT_WALL_MATERIAL_PATH "Project/Path/LastImportWallMaterialPath"
#define PRO_LAST_IMPORT_TERRAIN_MATERIAL_PATH "Project/Path/LastImportTerrainMaterialPath"
#define PRO_LAST_IMPORT_WATER_MATERIAL_PATH "Project/Path/LastImportWaterMaterialPath"
#define PRO_LAST_IMPORT_TWODEFFECT_MATERIAL_PATH "Project/Path/LastTwoDEffectMaterialPath"
#define PRO_LAST_IMPORT_NORMALMAPPING_MATERIAL_PATH "Project/Path/LastNormalMappingMaterialPath"
#define PRO_LAST_IMPORT_SKYBOX_MATERIAL_PATH "Project/Path/LastImportSkyBoxMaterialPath"
#define PRO_LAST_IMPORT_PARTICLECOLOR_MATERIAL_PATH "Project/Path/LastImportParticleColorPath"
#define PRO_LAST_IMPORT_PARTICLE_MATERIAL_PATH "Project/Path/LastImportParticleMaterialPath"
#define PRO_LAST_IMPORT_LENSFLARE_MATERIAL_PATH "Project/Path/LastImportLensFlareMaterialPath"
#define PRO_LAST_IMPORT_GAME_UI_RESOURCE_PATH "Project/Path/LastImportGameUIResourcePath"
#define PRO_LAST_PART_RES_IMPORT_PATH "Project/Path/LastImportPartResPath"

///< \brief 游戏工程顶级结点管理使用,除PRO_MANAGER_ROOT_NODE_ID,其余的将被废弃，目前留用为了以前工程兼容用.
#define PRO_MANAGER_ROOT_NODE_ID "Project/Manager/RootNodeID"
#define PRO_SCENE_ROOT_NODE_ID "Project/RootNodeItemID/SceneRootNodeID"
#define PRO_RES_ROOT_NODE_ID "Project/RootNodeItemID/ResRootNodeID"
#define PRO_DATABASE_ROOT_NODE_ID "Project/RootNodeItemID/DatabaseRootNodeID"

///< \brief 工程显示名称.
#define PRO_DISPLAY_NAME "Project/ProjectName"

///< \brief 不需要进入ObjectEngine需要保存的项.
#define INDOOR_WALL_MATERIAL_IMPORT "Project/Indoor/Wall/Material"
#define INDOOR_FLOOR_MATERIAL_IMPORT "Project/Indoor/Floor/Material"
#define NORMAL_MAPPING_MATERIAL_IMPORT "Project/NormalMapping/Material"

///< \brief 室外地形自定义贴图保存的项<仿室内贴图>.
#define OUTDOOR_WATER_MATERIAL_IMPORT "Project/Outdoor/Water/Material"
#define OUTDOOR_TERRAIN_MATERIAL_IMPORT "Project/Outdoor/Terrain/Material"
#define OUTDOOR_SKYBOX_MATERIAL_IMPORT "Project/Outdoor/SkyBox/Material"

///< \brief 室外自定义材质导入<仿室内>.
#define OUTDOOR_WATER_MATERIAL_IMPORT "Project/Outdoor/Water/Material"
#define OUTDOOR_TERRAIN_MATERIAL_IMPORT "Project/Outdoor/Terrain/Material"
#define OUTDOOR_SKYBOX_IMPORT "Project/Outdoor/SkyBox"

///< \brief 2D特效贴图导入<仿室内>.
#define EFFECT_SYSTEM_TEXTURE_IMPORT "Project/2DEffect/Texture/Material"

///< \brief 工程版本变动兼容更新数组Key.
#define PRO_UPDATE_NODE_LIST "Project/UpdataNodeList"

///< \brief 游戏工程场景管理.
#define PRO_CURRENT_SCENE_ZONE "Project/Scene/LastOpenEditSceneID"

///< \brief 游戏场景功能控制
///< \brief 是否打开编辑器碰撞测试.
#define PRO_EDITOR_ENABLE_COLLISION "Project/Editor/CollisionOpend"

///< \brief 游戏场景测试配置管理.
#define PRO_GAME_TEST_OPEND_HDRENDERING "Project/GameTest/HDRRenderingOpened"
#define PRO_GAME_TEST_OPEND_CARTOONRENDERING "Project/GameTest/CartoonRenderingOpened"
#define PRO_GAME_TEST_CARTOONRENDERING_LINE_WIDTH "Project/GameTest/CartoonRenderingLineWidth"

/////Mark,这些分类别处理的，升级版本如果只在一个类中使用到，则从这里移走.
/////< \brief 工程管理资源类型分类,记得用内存字符串翻译方式对这五个进行翻译，如果有需要对这五个类型进行国际化.
//#define RESOURCE_TYPE_TRIGGER "Trigger"
//#define RESOURCE_TYPE_BASE "Base"
//#define RESOURCE_TYPE_PLACEABLE "Placeable"
//#define RESOURCE_TYPE_LIGHT "Light"
//#define RESOURCE_TYPE_UNCLASSIFIED "Unclassified"
//#define RESOURCE_TYPE_EFFECT "Effect"
//#define RESOURCE_TYPE_GAMEUIRESOURCE "GameUIResource"

///< \brief 工程生存期变量管理,可以避免模块间耦合度.
#define OUT_DOOR_TERRIAN_MATERIAL_ID "OutDoor_Material_ID"

///< \brief 室外地形的贴图组信息.
#define OUTDOOR_UISETTING_TERRAIN_MATERIAL_GROUP "Project/UiSetting/Outdoor_Terrain/Material"

///< \brief 室内墙和地板的贴图信息.
#define INDOOR_UISETTING_MATERIAL_ARRAY "Project/UiSetting/Indoor/Material"

///< \brief 工程管理实体类型.
#define ENTITY_TYPE_TRIGGER "Trigger"
#define ENTITY_TYPE_STARTPOINT "StartPoint"
#define ENTITY_TYPE_STATIC  "Static"
#define ENTITY_TYPE_DYNAMIC "Dynamin"
#define ENTITY_TYPE_CAMERA  "Camera"
#define ENTITY_TYPE_EFFECT  "Effect"
#define ENTITY_TYPE_LIGHT   "Light"
#define ENTITY_TYPE_AIRWALL "AirWall"
#define ENTITY_TYPE_BATTLE  "Battle"
#define ENTITY_TYPE_WAYPOINT  "WayPoint"

///< \brief 游戏工程战斗场景管理.
#define PRO_LAST_OPENED_BATTLE_ID "Project/Scene/LastOpenEditBattleID"

///< \brief 游戏工程统一共享数据管理, 这些数据以后可以考虑全扔给objectengine管理 2015.05.11.
#define PRO_OUTDOOR_MOUTAIN_BRUSH_SIZE "Project/Outdoor/Moutain/Brush/Size"
#define PRO_OUTDOOR_MOUTAIN_BRUSH_SPEED "Project/Outdoor/Moutain/Brush/Speed"
#define PRO_OUTDOOR_TERRAIN_MATERIAL_BRUSH_SIZE "Project/Outdoor/Terrain/Material/Brush/Size"
#define PRO_OUTDOOR_TERRAIN_MATERIAL_BRUSH_SPEED "Project/Outdoor/Terrain/Material/Brush/Speed"

///< \breif 暂时添加删除的资源ID号数组.
#define DELETED_RESOURCE_ID_ARRAY "Project/Resource/DeleteIDList"
}

#endif // VWVO_PROJECT_CONFIG_KEY_H
