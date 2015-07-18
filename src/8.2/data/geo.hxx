#ifndef V81C_V8_2_DATA_GEO_INCLUDED
#define V81C_V8_2_DATA_GEO_INCLUDED
namespace v81c { namespace v8_2 { namespace data { namespace geo { 
enum class GeographicalSchemaDataSourceOrganizationType { 
    AtRow, 
    AtIntersection, 
    __LAST
};

enum class GeographicalSchemaLayerSeriesShowMode { 
    DontShow, 
    Text, 
    Column, 
    ShapeSize, 
    ShapeColor, 
    ShapeColorHue, 
    Picture, 
    Pie, 
    SizedPie, 
    __LAST
};

enum class GeographicalSchemaLegendItemShowScaleType { 
    DontShow, 
    ShowByValues, 
    __LAST
};

enum class GeographicalSchemaLineType { 
    None, 
    Solid, 
    Dotted, 
    Dashed, 
    DashDotted, 
    DashDottedDotted, 
    __LAST
};

enum class GeographicalSchemaMarkerType { 
    None, 
    Pin, 
    Darts, 
    LittleCircle, 
    BigCircle, 
    LittleSquare, 
    BigSquare, 
    LittleTriangle, 
    BigTriangle, 
    QuestionMark, 
    ExclamationPoint, 
    __LAST
};

enum class GeographicalSchemaPointObjectDrawingType { 
    Char, 
    Marker, 
    Picture, 
    __LAST
};

enum class GeographicalSchemaProjection { 
    CylindricalMillerProjection, 
    CylindricalLambertEqualAreaProjection, 
    CylindricalGallStereographicProjection, 
    CylindricalEquidistantProjection, 
    PseudoCylindricalSinusoidalProjection, 
    PseudoCylindricalMollweideProjection, 
    PseudoCylindricalRobinsonProjection, 
    PseudoCylindricalEckert1Projection, 
    PseudoCylindricalEckert2Projection, 
    PseudoCylindricalEckert3Projection, 
    PseudoCylindricalEckert4Projection, 
    PseudoCylindricalEckert5Projection, 
    PseudoCylindricalEckert6Projection, 
    PseudoCylindricalHatanoAsymetricalEqualAreaProjection, 
    PseudoCylindricalLoximutalProjection, 
    PseudoCylindricalMcBrydeThomasFlatPolarParabolicProjection, 
    PseudoCylindricalMcBrydeThomasFlatPolarQuarticProjection, 
    PseudoCylindricalMcBrydeThomasFlatPolarSinusoidalProjection, 
    PseudoCylindricalPutninP2Projection, 
    PseudoCylindricalPutninP5Projection, 
    PseudoCylindricalWinkel1Projection, 
    PseudoCylindricalBoggsEumorphicProjection, 
    AzimuthalHammerProjection, 
    AzimuthalWagner7Projection, 
    AzimuthalAitoffProjection, 
    AzimuthalWinkelTripelProjection, 
    AzimuthalEquidistantProjection, 
    AzimuthalLambertEqualAreaProjection, 
    MiscellaneousAugustEpicycloidalProjection, 
    MiscellaneousBaconGlobularProjection, 
    MiscellaneousNicolosiGlobularProjection, 
    MiscellaneousApianGlobular1Projection, 
    MiscellaneousOrteliusOvalProjection, 
    MiscellaneousVanDerGrinten1Projection, 
    MiscellaneousVanDerGrinten2Projection, 
    MiscellaneousVanDerGrinten3Projection, 
    ConicLambertEqualAreaProjection, 
    __LAST
};

enum class GeographicalSchemaShowMode { 
    ScaleDefined, 
    AllData, 
    SpecifiedArea, 
    __LAST
};

enum class PaintingReferencePointPosition { 
    LeftTop, 
    LeftCenter, 
    LeftBottom, 
    CenterTop, 
    Center, 
    CenterBottom, 
    RightTop, 
    RightCenter, 
    RightBottom, 
    __LAST
};

enum class SeriesValuesDrawingMode { 
    ShowAsValue, 
    ShowAsPart, 
    __LAST
};

} } } } 
#endif
