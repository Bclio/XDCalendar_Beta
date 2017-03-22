/**
  * VWVO OriginSandBox Project 2014-4-17 version
  * 环境编辑器类型枚举类.
  *
  * @author BiXiaoxia
*/
#ifndef VWVO_WORLDEDITORTYPE_H
#define VWVO_WORLDEDITORTYPE_H

#include <QMetaType>
#include <QVariant>

namespace ns_vwvo {
///<Mark,跟jacky保持一致.
enum LightType : quint8
{
    LT_POINT,
    LT_SPOTLIGHT,
    LT_DIRECTIONAL
};
///< \brief材质资源的类型，这个可能需要不断拓展添加，一定要从末尾在Default之前添加，不能在前面添加.
///Mark 2015.09.06,只要通过SelectPixmapButton类设置的材质，在这里添加类型后，必须在TextureEditTabWidget添加.
    enum class
            TextureType : quint8 {
        Floor = 0,
        Wall,
        OutdoorTerrian,
        Water,
        SkyBox_Top,
        SkyBox_Bottom,
        SkyBox_Front,
        SkyBox_Back,
        SkyBox_Left,
        SkyBox_Right,
        PBRImgBsdLighting_Top,
        PBRImgBsdLighting_Bottom,
        PBRImgBsdLighting_Front,
        PBRImgBsdLighting_Back,
        PBRImgBsdLighting_Left,
        PBRImgBsdLighting_Right,
        ParticleColor,
        ParticleMaterial,
        ParticleAffectorMaterial,
        Lensflare,
        NormalMapping,
        PBRMetallicMap,
        PBRRoughnessMap,
        EmissiveMap,
        MaterialTexture,
        Effect2DAnimateGraphics, //2DEffect.
        Character,
        Character_PBRImgBsdLighting_Top,
        Character_PBRImgBsdLighting_Bottom,
        Character_PBRImgBsdLighting_Front,
        Character_PBRImgBsdLighting_Back,
        Character_PBRImgBsdLighting_Left,
        Character_PBRImgBsdLighting_Right,
        Character_NormalMapping,
        Character_PBRMetallicMap,
        Character_PBRRoughnessMap,
        Character_EmissiveMap,
        Character_MaterialTexture,
        CubicTexture = 126, ///< @brief 有六个面材质需要设置的类型.
                            ///< @see GeneralModules=>CubicTextureSettingsWidget
        Default = 127,
        INVALID = 128
    };

enum class ENUM_TRIGGER_SHAPE : quint32
    {
        E_BOX,
        E_CYLINDER,
        E_SPHERE,
        START_POINT,
        PARTICLE_SYSTEM ///< TODO 这些暂时这么组织，以后需要改变，不能放进trigger中.
    };

///< Mark 2015.09.08,什么时候考虑将这个与下面ENUM_PAWS3D_RES_TYPE合并.
    enum class RESOURCE_GROUP_TYPE : quint32
    {
        ///< \brief 资源模型资源分类根节点,这些根节点的父节点为一个资源模型的顶级根节点.
       RESOURCE_TYPE_STATIC  = 0,  ///< "Static Resource"
       RESOURCE_TYPE_DYNAMIC, ///< "Dynamic Resource"
       RESOURCE_PARTICLE_SYSTEM, ///< "Particle System"
       RESOURCE_2DEFFECT, ///< "2DEffect"
       RESOURCE_AUDIO, ///< "AUDIO"
       RESOURCE_UI_RESOURCE, ///
       RESOURCE_SKYBOX
    };

    ///为了尽量少的减少依赖，这个将ResourceGlobal.h里的ENUM_RESOURCE_TYPE定义重新命名一份，那个改变，这个也跟着改变，名字不一样，但意义一样.
    ///这边可以单独添加类型，但是必须从MAX_COUNT减开始，从后面添加.比如NODE_SKYBOX是添加的.
    enum class ENUM_PAWS3D_RES_TYPE : quint16 {
        DEFAULT_TYPE = 0,
        RESOURCE_MANAGER_SCRIPT = 1,
        TEMP = 2,
        RESOURCE_INTERNAL = 2,
        MESH = 20,
        SKELETON = 21,
        MATERIAL = 22,
        PARTICLE = 23,
        HLSL = 24,
        GLSL = 25,
        GLSLES = 26,
        TTF = 27,
        PNG = 28,
        JPG = 29,
        TIF = 30,
        TGA = 31,
        DDS = 32,
        BMP = 33,
        PHOTO = 34,
        TERRAIN = 35,
        CHARACTER = 36,
        CHAUS = 37,
        TEXT = 38,
        ORIGINE_OBJ = 39,
        MODEL = 40,
        PHOTO_MODEL = 41,
        JSON = 42,
        OBJ_ENGINE_METADATA = 43,
        OBJ_ENGINE_DATA = 44,
        OBJ_ENGINE_ZONE = 45,
        OBJ_ENGINE_ZONE_OBJECT = 46,
        FBX = 47,
        GLYPH = 48,
        ANIMATION = 49,
        ANIMATOR = 50,
        OBJECT_ENGINE_SEED = 51,
        GPM_UINT = 52,
        GPM_UINT_MAP = 53,
        GPM_AUTHORIZATION = 54,
        NODE_ANIMATOR = 55,
        EFFECT2D_ANIMATOR = 56,
        OGG = 57,
        MP3 = 58,
        RAW_MESH = 59,
        UI_JPG = 60,
        UI_PNG = 61,
        UI_GIF = 62,
        MAX_COUNT = 65535,
        NODE_SKYBOX = MAX_COUNT -1
    };
}

#endif // VWVO_WORLDEDITORTYPE_H
