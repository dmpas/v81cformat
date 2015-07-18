#include "enums.hxx"
namespace v81c { namespace xml {
v81c::v8_1::xdto::Form &
__read(v81c::v8_1::xdto::Form &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::xdto::Form::Attribute;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Attribute") {
            dst = v81c::v8_1::xdto::Form::Attribute;
            return dst;
        }
        if (sc == "Element") {
            dst = v81c::v8_1::xdto::Form::Element;
            return dst;
        }
        if (sc == "Text") {
            dst = v81c::v8_1::xdto::Form::Text;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::xdto::Variety &
__read(v81c::v8_1::xdto::Variety &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::xdto::Variety::Atomic;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Atomic") {
            dst = v81c::v8_1::xdto::Variety::Atomic;
            return dst;
        }
        if (sc == "List") {
            dst = v81c::v8_1::xdto::Variety::List;
            return dst;
        }
        if (sc == "Union") {
            dst = v81c::v8_1::xdto::Variety::Union;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::xdto::Whitespace &
__read(v81c::v8_1::xdto::Whitespace &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::xdto::Whitespace::preserve;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "preserve") {
            dst = v81c::v8_1::xdto::Whitespace::preserve;
            return dst;
        }
        if (sc == "replace") {
            dst = v81c::v8_1::xdto::Whitespace::replace;
            return dst;
        }
        if (sc == "collapse") {
            dst = v81c::v8_1::xdto::Whitespace::collapse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::AutoColor &
__read(v81c::v8_1::data::ui::AutoColor &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::AutoColor::_auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "auto") {
            dst = v81c::v8_1::data::ui::AutoColor::_auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::AutoSeriesSeparation &
__read(v81c::v8_1::data::ui::AutoSeriesSeparation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::AutoSeriesSeparation::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::AutoSeriesSeparation::None;
            return dst;
        }
        if (sc == "All") {
            dst = v81c::v8_1::data::ui::AutoSeriesSeparation::All;
            return dst;
        }
        if (sc == "Maximum") {
            dst = v81c::v8_1::data::ui::AutoSeriesSeparation::Maximum;
            return dst;
        }
        if (sc == "Minimum") {
            dst = v81c::v8_1::data::ui::AutoSeriesSeparation::Minimum;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::ChartColorPalette &
__read(v81c::v8_1::data::ui::ChartColorPalette &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::ChartColorPalette::Palette8;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Palette8") {
            dst = v81c::v8_1::data::ui::ChartColorPalette::Palette8;
            return dst;
        }
        if (sc == "Palette32") {
            dst = v81c::v8_1::data::ui::ChartColorPalette::Palette32;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::ChartLabelType &
__read(v81c::v8_1::data::ui::ChartLabelType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::ChartLabelType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::ChartLabelType::None;
            return dst;
        }
        if (sc == "Series") {
            dst = v81c::v8_1::data::ui::ChartLabelType::Series;
            return dst;
        }
        if (sc == "Value") {
            dst = v81c::v8_1::data::ui::ChartLabelType::Value;
            return dst;
        }
        if (sc == "Percent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::Percent;
            return dst;
        }
        if (sc == "SeriesPercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesPercent;
            return dst;
        }
        if (sc == "SeriesValue") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesValue;
            return dst;
        }
        if (sc == "SeriesValuePercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesValuePercent;
            return dst;
        }
        if (sc == "ValuePercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::ValuePercent;
            return dst;
        }
        if (sc == "Point") {
            dst = v81c::v8_1::data::ui::ChartLabelType::Point;
            return dst;
        }
        if (sc == "PointPercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::PointPercent;
            return dst;
        }
        if (sc == "PointValue") {
            dst = v81c::v8_1::data::ui::ChartLabelType::PointValue;
            return dst;
        }
        if (sc == "PointValuePercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::PointValuePercent;
            return dst;
        }
        if (sc == "SeriesPoint") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesPoint;
            return dst;
        }
        if (sc == "SeriesPointPercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesPointPercent;
            return dst;
        }
        if (sc == "SeriesPointValue") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesPointValue;
            return dst;
        }
        if (sc == "SeriesPointValuePercent") {
            dst = v81c::v8_1::data::ui::ChartLabelType::SeriesPointValuePercent;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::ChartLabelsOrientation &
__read(v81c::v8_1::data::ui::ChartLabelsOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::ChartLabelsOrientation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Horizontal") {
            dst = v81c::v8_1::data::ui::ChartLabelsOrientation::Horizontal;
            return dst;
        }
        if (sc == "Vertical") {
            dst = v81c::v8_1::data::ui::ChartLabelsOrientation::Vertical;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::data::ui::ChartLabelsOrientation::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::ChartLineType &
__read(v81c::v8_1::data::ui::ChartLineType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::ChartLineType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::ChartLineType::None;
            return dst;
        }
        if (sc == "Solid") {
            dst = v81c::v8_1::data::ui::ChartLineType::Solid;
            return dst;
        }
        if (sc == "Dotted") {
            dst = v81c::v8_1::data::ui::ChartLineType::Dotted;
            return dst;
        }
        if (sc == "Dashed") {
            dst = v81c::v8_1::data::ui::ChartLineType::Dashed;
            return dst;
        }
        if (sc == "DashDotted") {
            dst = v81c::v8_1::data::ui::ChartLineType::DashDotted;
            return dst;
        }
        if (sc == "DashDottedDotted") {
            dst = v81c::v8_1::data::ui::ChartLineType::DashDottedDotted;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::ChartType &
__read(v81c::v8_1::data::ui::ChartType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::ChartType::Line;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Line") {
            dst = v81c::v8_1::data::ui::ChartType::Line;
            return dst;
        }
        if (sc == "Step") {
            dst = v81c::v8_1::data::ui::ChartType::Step;
            return dst;
        }
        if (sc == "StackedLine") {
            dst = v81c::v8_1::data::ui::ChartType::StackedLine;
            return dst;
        }
        if (sc == "Area") {
            dst = v81c::v8_1::data::ui::ChartType::Area;
            return dst;
        }
        if (sc == "StackedArea") {
            dst = v81c::v8_1::data::ui::ChartType::StackedArea;
            return dst;
        }
        if (sc == "NormalizedArea") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedArea;
            return dst;
        }
        if (sc == "Column") {
            dst = v81c::v8_1::data::ui::ChartType::Column;
            return dst;
        }
        if (sc == "StackedColumn") {
            dst = v81c::v8_1::data::ui::ChartType::StackedColumn;
            return dst;
        }
        if (sc == "NormalizedColumn") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedColumn;
            return dst;
        }
        if (sc == "Column3D") {
            dst = v81c::v8_1::data::ui::ChartType::Column3D;
            return dst;
        }
        if (sc == "StackedColumn3D") {
            dst = v81c::v8_1::data::ui::ChartType::StackedColumn3D;
            return dst;
        }
        if (sc == "NormalizedColumn3D") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedColumn3D;
            return dst;
        }
        if (sc == "Bar") {
            dst = v81c::v8_1::data::ui::ChartType::Bar;
            return dst;
        }
        if (sc == "StackedBar") {
            dst = v81c::v8_1::data::ui::ChartType::StackedBar;
            return dst;
        }
        if (sc == "NormalizedBar") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedBar;
            return dst;
        }
        if (sc == "Bar3D") {
            dst = v81c::v8_1::data::ui::ChartType::Bar3D;
            return dst;
        }
        if (sc == "StackedBar3D") {
            dst = v81c::v8_1::data::ui::ChartType::StackedBar3D;
            return dst;
        }
        if (sc == "NormalizedBar3D") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedBar3D;
            return dst;
        }
        if (sc == "Pie") {
            dst = v81c::v8_1::data::ui::ChartType::Pie;
            return dst;
        }
        if (sc == "Pie3D") {
            dst = v81c::v8_1::data::ui::ChartType::Pie3D;
            return dst;
        }
        if (sc == "Stock") {
            dst = v81c::v8_1::data::ui::ChartType::Stock;
            return dst;
        }
        if (sc == "OpenHighLowClose") {
            dst = v81c::v8_1::data::ui::ChartType::OpenHighLowClose;
            return dst;
        }
        if (sc == "BarGraph") {
            dst = v81c::v8_1::data::ui::ChartType::BarGraph;
            return dst;
        }
        if (sc == "CeilGraph") {
            dst = v81c::v8_1::data::ui::ChartType::CeilGraph;
            return dst;
        }
        if (sc == "TapeGraph") {
            dst = v81c::v8_1::data::ui::ChartType::TapeGraph;
            return dst;
        }
        if (sc == "PyramidGraph") {
            dst = v81c::v8_1::data::ui::ChartType::PyramidGraph;
            return dst;
        }
        if (sc == "Waterfall") {
            dst = v81c::v8_1::data::ui::ChartType::Waterfall;
            return dst;
        }
        if (sc == "WireframeSurface") {
            dst = v81c::v8_1::data::ui::ChartType::WireframeSurface;
            return dst;
        }
        if (sc == "Honeycomb") {
            dst = v81c::v8_1::data::ui::ChartType::Honeycomb;
            return dst;
        }
        if (sc == "Surface") {
            dst = v81c::v8_1::data::ui::ChartType::Surface;
            return dst;
        }
        if (sc == "ConvexSurface") {
            dst = v81c::v8_1::data::ui::ChartType::ConvexSurface;
            return dst;
        }
        if (sc == "ConcaveSurface") {
            dst = v81c::v8_1::data::ui::ChartType::ConcaveSurface;
            return dst;
        }
        if (sc == "ShadedSurface") {
            dst = v81c::v8_1::data::ui::ChartType::ShadedSurface;
            return dst;
        }
        if (sc == "RadarLine") {
            dst = v81c::v8_1::data::ui::ChartType::RadarLine;
            return dst;
        }
        if (sc == "RadarArea") {
            dst = v81c::v8_1::data::ui::ChartType::RadarArea;
            return dst;
        }
        if (sc == "RadarStackedLine") {
            dst = v81c::v8_1::data::ui::ChartType::RadarStackedLine;
            return dst;
        }
        if (sc == "RadarStackedArea") {
            dst = v81c::v8_1::data::ui::ChartType::RadarStackedArea;
            return dst;
        }
        if (sc == "RadarNormalizedArea") {
            dst = v81c::v8_1::data::ui::ChartType::RadarNormalizedArea;
            return dst;
        }
        if (sc == "Gauge") {
            dst = v81c::v8_1::data::ui::ChartType::Gauge;
            return dst;
        }
        if (sc == "Funnel") {
            dst = v81c::v8_1::data::ui::ChartType::Funnel;
            return dst;
        }
        if (sc == "Funnel3D") {
            dst = v81c::v8_1::data::ui::ChartType::Funnel3D;
            return dst;
        }
        if (sc == "NormalizedFunnel") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedFunnel;
            return dst;
        }
        if (sc == "NormalizedFunnel3D") {
            dst = v81c::v8_1::data::ui::ChartType::NormalizedFunnel3D;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::ControlBorderType &
__read(v81c::v8_1::data::ui::ControlBorderType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::ControlBorderType::WithoutBorder;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WithoutBorder") {
            dst = v81c::v8_1::data::ui::ControlBorderType::WithoutBorder;
            return dst;
        }
        if (sc == "Single") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Single;
            return dst;
        }
        if (sc == "Double") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Double;
            return dst;
        }
        if (sc == "Embossed") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Embossed;
            return dst;
        }
        if (sc == "Indented") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Indented;
            return dst;
        }
        if (sc == "Underline") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Underline;
            return dst;
        }
        if (sc == "DoubleUnderline") {
            dst = v81c::v8_1::data::ui::ControlBorderType::DoubleUnderline;
            return dst;
        }
        if (sc == "Rounded") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Rounded;
            return dst;
        }
        if (sc == "Overline") {
            dst = v81c::v8_1::data::ui::ControlBorderType::Overline;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::FontType &
__read(v81c::v8_1::data::ui::FontType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::FontType::Absolute;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Absolute") {
            dst = v81c::v8_1::data::ui::FontType::Absolute;
            return dst;
        }
        if (sc == "WindowsFont") {
            dst = v81c::v8_1::data::ui::FontType::WindowsFont;
            return dst;
        }
        if (sc == "StyleItem") {
            dst = v81c::v8_1::data::ui::FontType::StyleItem;
            return dst;
        }
        if (sc == "AutoFont") {
            dst = v81c::v8_1::data::ui::FontType::AutoFont;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::GeographicalSchemeLineType &
__read(v81c::v8_1::data::ui::GeographicalSchemeLineType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::None;
            return dst;
        }
        if (sc == "Solid") {
            dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::Solid;
            return dst;
        }
        if (sc == "Dotted") {
            dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::Dotted;
            return dst;
        }
        if (sc == "Dashed") {
            dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::Dashed;
            return dst;
        }
        if (sc == "DashDotted") {
            dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::DashDotted;
            return dst;
        }
        if (sc == "DashDottedDotted") {
            dst = v81c::v8_1::data::ui::GeographicalSchemeLineType::DashDottedDotted;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::HorizontalAlign &
__read(v81c::v8_1::data::ui::HorizontalAlign &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::HorizontalAlign::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_1::data::ui::HorizontalAlign::Left;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_1::data::ui::HorizontalAlign::Center;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_1::data::ui::HorizontalAlign::Right;
            return dst;
        }
        if (sc == "Justify") {
            dst = v81c::v8_1::data::ui::HorizontalAlign::Justify;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::data::ui::HorizontalAlign::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::Key &
__read(v81c::v8_1::data::ui::Key &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::Key::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::Key::None;
            return dst;
        }
        if (sc == "BackSpace") {
            dst = v81c::v8_1::data::ui::Key::BackSpace;
            return dst;
        }
        if (sc == "Space") {
            dst = v81c::v8_1::data::ui::Key::Space;
            return dst;
        }
        if (sc == "PageUp") {
            dst = v81c::v8_1::data::ui::Key::PageUp;
            return dst;
        }
        if (sc == "PageDown") {
            dst = v81c::v8_1::data::ui::Key::PageDown;
            return dst;
        }
        if (sc == "Home") {
            dst = v81c::v8_1::data::ui::Key::Home;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_1::data::ui::Key::End;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_1::data::ui::Key::Left;
            return dst;
        }
        if (sc == "Up") {
            dst = v81c::v8_1::data::ui::Key::Up;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_1::data::ui::Key::Right;
            return dst;
        }
        if (sc == "Down") {
            dst = v81c::v8_1::data::ui::Key::Down;
            return dst;
        }
        if (sc == "Ins") {
            dst = v81c::v8_1::data::ui::Key::Ins;
            return dst;
        }
        if (sc == "Del") {
            dst = v81c::v8_1::data::ui::Key::Del;
            return dst;
        }
        if (sc == "Tab") {
            dst = v81c::v8_1::data::ui::Key::Tab;
            return dst;
        }
        if (sc == "Enter") {
            dst = v81c::v8_1::data::ui::Key::Enter;
            return dst;
        }
        if (sc == "Esc") {
            dst = v81c::v8_1::data::ui::Key::Esc;
            return dst;
        }
        if (sc == "_0") {
            dst = v81c::v8_1::data::ui::Key::_0;
            return dst;
        }
        if (sc == "_1") {
            dst = v81c::v8_1::data::ui::Key::_1;
            return dst;
        }
        if (sc == "_2") {
            dst = v81c::v8_1::data::ui::Key::_2;
            return dst;
        }
        if (sc == "_3") {
            dst = v81c::v8_1::data::ui::Key::_3;
            return dst;
        }
        if (sc == "_4") {
            dst = v81c::v8_1::data::ui::Key::_4;
            return dst;
        }
        if (sc == "_5") {
            dst = v81c::v8_1::data::ui::Key::_5;
            return dst;
        }
        if (sc == "_6") {
            dst = v81c::v8_1::data::ui::Key::_6;
            return dst;
        }
        if (sc == "_7") {
            dst = v81c::v8_1::data::ui::Key::_7;
            return dst;
        }
        if (sc == "_8") {
            dst = v81c::v8_1::data::ui::Key::_8;
            return dst;
        }
        if (sc == "_9") {
            dst = v81c::v8_1::data::ui::Key::_9;
            return dst;
        }
        if (sc == "A") {
            dst = v81c::v8_1::data::ui::Key::A;
            return dst;
        }
        if (sc == "B") {
            dst = v81c::v8_1::data::ui::Key::B;
            return dst;
        }
        if (sc == "C") {
            dst = v81c::v8_1::data::ui::Key::C;
            return dst;
        }
        if (sc == "D") {
            dst = v81c::v8_1::data::ui::Key::D;
            return dst;
        }
        if (sc == "E") {
            dst = v81c::v8_1::data::ui::Key::E;
            return dst;
        }
        if (sc == "F") {
            dst = v81c::v8_1::data::ui::Key::F;
            return dst;
        }
        if (sc == "G") {
            dst = v81c::v8_1::data::ui::Key::G;
            return dst;
        }
        if (sc == "H") {
            dst = v81c::v8_1::data::ui::Key::H;
            return dst;
        }
        if (sc == "I") {
            dst = v81c::v8_1::data::ui::Key::I;
            return dst;
        }
        if (sc == "J") {
            dst = v81c::v8_1::data::ui::Key::J;
            return dst;
        }
        if (sc == "K") {
            dst = v81c::v8_1::data::ui::Key::K;
            return dst;
        }
        if (sc == "L") {
            dst = v81c::v8_1::data::ui::Key::L;
            return dst;
        }
        if (sc == "M") {
            dst = v81c::v8_1::data::ui::Key::M;
            return dst;
        }
        if (sc == "N") {
            dst = v81c::v8_1::data::ui::Key::N;
            return dst;
        }
        if (sc == "O") {
            dst = v81c::v8_1::data::ui::Key::O;
            return dst;
        }
        if (sc == "P") {
            dst = v81c::v8_1::data::ui::Key::P;
            return dst;
        }
        if (sc == "Q") {
            dst = v81c::v8_1::data::ui::Key::Q;
            return dst;
        }
        if (sc == "R") {
            dst = v81c::v8_1::data::ui::Key::R;
            return dst;
        }
        if (sc == "S") {
            dst = v81c::v8_1::data::ui::Key::S;
            return dst;
        }
        if (sc == "T") {
            dst = v81c::v8_1::data::ui::Key::T;
            return dst;
        }
        if (sc == "U") {
            dst = v81c::v8_1::data::ui::Key::U;
            return dst;
        }
        if (sc == "V") {
            dst = v81c::v8_1::data::ui::Key::V;
            return dst;
        }
        if (sc == "W") {
            dst = v81c::v8_1::data::ui::Key::W;
            return dst;
        }
        if (sc == "X") {
            dst = v81c::v8_1::data::ui::Key::X;
            return dst;
        }
        if (sc == "Y") {
            dst = v81c::v8_1::data::ui::Key::Y;
            return dst;
        }
        if (sc == "Z") {
            dst = v81c::v8_1::data::ui::Key::Z;
            return dst;
        }
        if (sc == "Num0") {
            dst = v81c::v8_1::data::ui::Key::Num0;
            return dst;
        }
        if (sc == "Num1") {
            dst = v81c::v8_1::data::ui::Key::Num1;
            return dst;
        }
        if (sc == "Num2") {
            dst = v81c::v8_1::data::ui::Key::Num2;
            return dst;
        }
        if (sc == "Num3") {
            dst = v81c::v8_1::data::ui::Key::Num3;
            return dst;
        }
        if (sc == "Num4") {
            dst = v81c::v8_1::data::ui::Key::Num4;
            return dst;
        }
        if (sc == "Num5") {
            dst = v81c::v8_1::data::ui::Key::Num5;
            return dst;
        }
        if (sc == "Num6") {
            dst = v81c::v8_1::data::ui::Key::Num6;
            return dst;
        }
        if (sc == "Num7") {
            dst = v81c::v8_1::data::ui::Key::Num7;
            return dst;
        }
        if (sc == "Num8") {
            dst = v81c::v8_1::data::ui::Key::Num8;
            return dst;
        }
        if (sc == "Num9") {
            dst = v81c::v8_1::data::ui::Key::Num9;
            return dst;
        }
        if (sc == "NumMultiply") {
            dst = v81c::v8_1::data::ui::Key::NumMultiply;
            return dst;
        }
        if (sc == "NumAdd") {
            dst = v81c::v8_1::data::ui::Key::NumAdd;
            return dst;
        }
        if (sc == "NumSubtract") {
            dst = v81c::v8_1::data::ui::Key::NumSubtract;
            return dst;
        }
        if (sc == "NumDecimal") {
            dst = v81c::v8_1::data::ui::Key::NumDecimal;
            return dst;
        }
        if (sc == "NumDivide") {
            dst = v81c::v8_1::data::ui::Key::NumDivide;
            return dst;
        }
        if (sc == "F1") {
            dst = v81c::v8_1::data::ui::Key::F1;
            return dst;
        }
        if (sc == "F2") {
            dst = v81c::v8_1::data::ui::Key::F2;
            return dst;
        }
        if (sc == "F3") {
            dst = v81c::v8_1::data::ui::Key::F3;
            return dst;
        }
        if (sc == "F4") {
            dst = v81c::v8_1::data::ui::Key::F4;
            return dst;
        }
        if (sc == "F5") {
            dst = v81c::v8_1::data::ui::Key::F5;
            return dst;
        }
        if (sc == "F6") {
            dst = v81c::v8_1::data::ui::Key::F6;
            return dst;
        }
        if (sc == "F7") {
            dst = v81c::v8_1::data::ui::Key::F7;
            return dst;
        }
        if (sc == "F8") {
            dst = v81c::v8_1::data::ui::Key::F8;
            return dst;
        }
        if (sc == "F9") {
            dst = v81c::v8_1::data::ui::Key::F9;
            return dst;
        }
        if (sc == "F10") {
            dst = v81c::v8_1::data::ui::Key::F10;
            return dst;
        }
        if (sc == "F11") {
            dst = v81c::v8_1::data::ui::Key::F11;
            return dst;
        }
        if (sc == "F12") {
            dst = v81c::v8_1::data::ui::Key::F12;
            return dst;
        }
        if (sc == "Break") {
            dst = v81c::v8_1::data::ui::Key::Break;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::PictureFormat &
__read(v81c::v8_1::data::ui::PictureFormat &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::PictureFormat::BMP;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "BMP") {
            dst = v81c::v8_1::data::ui::PictureFormat::BMP;
            return dst;
        }
        if (sc == "EMF") {
            dst = v81c::v8_1::data::ui::PictureFormat::EMF;
            return dst;
        }
        if (sc == "GIF") {
            dst = v81c::v8_1::data::ui::PictureFormat::GIF;
            return dst;
        }
        if (sc == "Icon") {
            dst = v81c::v8_1::data::ui::PictureFormat::Icon;
            return dst;
        }
        if (sc == "JPEG") {
            dst = v81c::v8_1::data::ui::PictureFormat::JPEG;
            return dst;
        }
        if (sc == "PNG") {
            dst = v81c::v8_1::data::ui::PictureFormat::PNG;
            return dst;
        }
        if (sc == "TIFF") {
            dst = v81c::v8_1::data::ui::PictureFormat::TIFF;
            return dst;
        }
        if (sc == "WMF") {
            dst = v81c::v8_1::data::ui::PictureFormat::WMF;
            return dst;
        }
        if (sc == "UnknownFormat") {
            dst = v81c::v8_1::data::ui::PictureFormat::UnknownFormat;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::PivotChartType &
__read(v81c::v8_1::data::ui::PivotChartType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::PivotChartType::Column;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Column") {
            dst = v81c::v8_1::data::ui::PivotChartType::Column;
            return dst;
        }
        if (sc == "Column3D") {
            dst = v81c::v8_1::data::ui::PivotChartType::Column3D;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::SizeChangeMode &
__read(v81c::v8_1::data::ui::SizeChangeMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::SizeChangeMode::Normal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Normal") {
            dst = v81c::v8_1::data::ui::SizeChangeMode::Normal;
            return dst;
        }
        if (sc == "QuickChange") {
            dst = v81c::v8_1::data::ui::SizeChangeMode::QuickChange;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType &
__read(v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::None;
            return dst;
        }
        if (sc == "Solid") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::Solid;
            return dst;
        }
        if (sc == "Dotted") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::Dotted;
            return dst;
        }
        if (sc == "Double") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::Double;
            return dst;
        }
        if (sc == "ThinDashed") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::ThinDashed;
            return dst;
        }
        if (sc == "ThickDashed") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::ThickDashed;
            return dst;
        }
        if (sc == "LargeDashed") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType::LargeDashed;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType &
__read(v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::None;
            return dst;
        }
        if (sc == "Solid") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::Solid;
            return dst;
        }
        if (sc == "Dashed") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::Dashed;
            return dst;
        }
        if (sc == "Dotted") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::Dotted;
            return dst;
        }
        if (sc == "DashDotted") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::DashDotted;
            return dst;
        }
        if (sc == "DashDottedDotted") {
            dst = v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType::DashDottedDotted;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::TextEncoding &
__read(v81c::v8_1::data::ui::TextEncoding &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::TextEncoding::UTF16;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "UTF16") {
            dst = v81c::v8_1::data::ui::TextEncoding::UTF16;
            return dst;
        }
        if (sc == "UTF8") {
            dst = v81c::v8_1::data::ui::TextEncoding::UTF8;
            return dst;
        }
        if (sc == "ANSI") {
            dst = v81c::v8_1::data::ui::TextEncoding::ANSI;
            return dst;
        }
        if (sc == "OEM") {
            dst = v81c::v8_1::data::ui::TextEncoding::OEM;
            return dst;
        }
        if (sc == "System") {
            dst = v81c::v8_1::data::ui::TextEncoding::System;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::UseOutput &
__read(v81c::v8_1::data::ui::UseOutput &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::UseOutput::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::ui::UseOutput::Auto;
            return dst;
        }
        if (sc == "Enable") {
            dst = v81c::v8_1::data::ui::UseOutput::Enable;
            return dst;
        }
        if (sc == "Disable") {
            dst = v81c::v8_1::data::ui::UseOutput::Disable;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::ui::VerticalAlign &
__read(v81c::v8_1::data::ui::VerticalAlign &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::ui::VerticalAlign::Top;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Top") {
            dst = v81c::v8_1::data::ui::VerticalAlign::Top;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_1::data::ui::VerticalAlign::Center;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_1::data::ui::VerticalAlign::Bottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::AllowedLength &
__read(v81c::v8_1::data::core::AllowedLength &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::AllowedLength::Fixed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Fixed") {
            dst = v81c::v8_1::data::core::AllowedLength::Fixed;
            return dst;
        }
        if (sc == "Variable") {
            dst = v81c::v8_1::data::core::AllowedLength::Variable;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::AllowedSign &
__read(v81c::v8_1::data::core::AllowedSign &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::AllowedSign::Any;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Any") {
            dst = v81c::v8_1::data::core::AllowedSign::Any;
            return dst;
        }
        if (sc == "Nonnegative") {
            dst = v81c::v8_1::data::core::AllowedSign::Nonnegative;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::DateFractions &
__read(v81c::v8_1::data::core::DateFractions &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::DateFractions::Date;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Date") {
            dst = v81c::v8_1::data::core::DateFractions::Date;
            return dst;
        }
        if (sc == "Time") {
            dst = v81c::v8_1::data::core::DateFractions::Time;
            return dst;
        }
        if (sc == "DateTime") {
            dst = v81c::v8_1::data::core::DateFractions::DateTime;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::FillCheckErrorStatus &
__read(v81c::v8_1::data::core::FillCheckErrorStatus &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::FillCheckErrorStatus::Error;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Error") {
            dst = v81c::v8_1::data::core::FillCheckErrorStatus::Error;
            return dst;
        }
        if (sc == "Warning") {
            dst = v81c::v8_1::data::core::FillCheckErrorStatus::Warning;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::FillChecking &
__read(v81c::v8_1::data::core::FillChecking &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::FillChecking::DontCheck;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontCheck") {
            dst = v81c::v8_1::data::core::FillChecking::DontCheck;
            return dst;
        }
        if (sc == "ShowError") {
            dst = v81c::v8_1::data::core::FillChecking::ShowError;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::StandardBeginningDateVariant &
__read(v81c::v8_1::data::core::StandardBeginningDateVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::StandardBeginningDateVariant::Custom;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Custom") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::Custom;
            return dst;
        }
        if (sc == "BeginningOfThisDay") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisDay;
            return dst;
        }
        if (sc == "BeginningOfThisWeek") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisWeek;
            return dst;
        }
        if (sc == "BeginningOfThisTenDays") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisTenDays;
            return dst;
        }
        if (sc == "BeginningOfThisMonth") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisMonth;
            return dst;
        }
        if (sc == "BeginningOfThisQuarter") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisQuarter;
            return dst;
        }
        if (sc == "BeginningOfThisHalfYear") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisHalfYear;
            return dst;
        }
        if (sc == "BeginningOfThisYear") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfThisYear;
            return dst;
        }
        if (sc == "BeginningOfLastDay") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastDay;
            return dst;
        }
        if (sc == "BeginningOfLastWeek") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastWeek;
            return dst;
        }
        if (sc == "BeginningOfLastTenDays") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastTenDays;
            return dst;
        }
        if (sc == "BeginningOfLastMonth") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastMonth;
            return dst;
        }
        if (sc == "BeginningOfLastQuarter") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastQuarter;
            return dst;
        }
        if (sc == "BeginningOfLastHalfYear") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastHalfYear;
            return dst;
        }
        if (sc == "BeginningOfLastYear") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfLastYear;
            return dst;
        }
        if (sc == "BeginningOfNextDay") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextDay;
            return dst;
        }
        if (sc == "BeginningOfNextWeek") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextWeek;
            return dst;
        }
        if (sc == "BeginningOfNextTenDays") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextTenDays;
            return dst;
        }
        if (sc == "BeginningOfNextMonth") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextMonth;
            return dst;
        }
        if (sc == "BeginningOfNextQuarter") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextQuarter;
            return dst;
        }
        if (sc == "BeginningOfNextHalfYear") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextHalfYear;
            return dst;
        }
        if (sc == "BeginningOfNextYear") {
            dst = v81c::v8_1::data::core::StandardBeginningDateVariant::BeginningOfNextYear;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::core::StandardPeriodVariant &
__read(v81c::v8_1::data::core::StandardPeriodVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::core::StandardPeriodVariant::Custom;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Custom") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Custom;
            return dst;
        }
        if (sc == "Today") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Today;
            return dst;
        }
        if (sc == "ThisWeek") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::ThisWeek;
            return dst;
        }
        if (sc == "ThisTenDays") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::ThisTenDays;
            return dst;
        }
        if (sc == "ThisMonth") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::ThisMonth;
            return dst;
        }
        if (sc == "ThisQuarter") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::ThisQuarter;
            return dst;
        }
        if (sc == "ThisHalfYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::ThisHalfYear;
            return dst;
        }
        if (sc == "ThisYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::ThisYear;
            return dst;
        }
        if (sc == "FromBeginningOfThisWeek") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::FromBeginningOfThisWeek;
            return dst;
        }
        if (sc == "FromBeginningOfThisTenDays") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::FromBeginningOfThisTenDays;
            return dst;
        }
        if (sc == "FromBeginningOfThisMonth") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::FromBeginningOfThisMonth;
            return dst;
        }
        if (sc == "FromBeginningOfThisQuarter") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::FromBeginningOfThisQuarter;
            return dst;
        }
        if (sc == "FromBeginningOfThisHalfYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::FromBeginningOfThisHalfYear;
            return dst;
        }
        if (sc == "FromBeginningOfThisYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::FromBeginningOfThisYear;
            return dst;
        }
        if (sc == "Yesterday") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Yesterday;
            return dst;
        }
        if (sc == "LastWeek") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastWeek;
            return dst;
        }
        if (sc == "LastTenDays") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastTenDays;
            return dst;
        }
        if (sc == "LastMonth") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastMonth;
            return dst;
        }
        if (sc == "LastQuarter") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastQuarter;
            return dst;
        }
        if (sc == "LastHalfYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastHalfYear;
            return dst;
        }
        if (sc == "LastYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastYear;
            return dst;
        }
        if (sc == "LastWeekTillSameWeekDay") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastWeekTillSameWeekDay;
            return dst;
        }
        if (sc == "LastTenDaysTillSameDayNumber") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastTenDaysTillSameDayNumber;
            return dst;
        }
        if (sc == "LastMonthTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastMonthTillSameDate;
            return dst;
        }
        if (sc == "LastQuarterTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastQuarterTillSameDate;
            return dst;
        }
        if (sc == "LastHalfYearTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastHalfYearTillSameDate;
            return dst;
        }
        if (sc == "LastYearTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::LastYearTillSameDate;
            return dst;
        }
        if (sc == "Tomorrow") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Tomorrow;
            return dst;
        }
        if (sc == "NextWeek") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextWeek;
            return dst;
        }
        if (sc == "NextTenDays") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextTenDays;
            return dst;
        }
        if (sc == "NextMonth") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextMonth;
            return dst;
        }
        if (sc == "NextQuarter") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextQuarter;
            return dst;
        }
        if (sc == "NextHalfYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextHalfYear;
            return dst;
        }
        if (sc == "NextYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextYear;
            return dst;
        }
        if (sc == "NextWeekTillSameWeekDay") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextWeekTillSameWeekDay;
            return dst;
        }
        if (sc == "NextTenDaysTillSameDayNumber") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextTenDaysTillSameDayNumber;
            return dst;
        }
        if (sc == "NextMonthTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextMonthTillSameDate;
            return dst;
        }
        if (sc == "NextQuarterTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextQuarterTillSameDate;
            return dst;
        }
        if (sc == "NextHalfYearTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextHalfYearTillSameDate;
            return dst;
        }
        if (sc == "NextYearTillSameDate") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::NextYearTillSameDate;
            return dst;
        }
        if (sc == "TillEndOfThisWeek") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::TillEndOfThisWeek;
            return dst;
        }
        if (sc == "TillEndOfThisTenDays") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::TillEndOfThisTenDays;
            return dst;
        }
        if (sc == "TillEndOfThisMonth") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::TillEndOfThisMonth;
            return dst;
        }
        if (sc == "TillEndOfThisQuarter") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::TillEndOfThisQuarter;
            return dst;
        }
        if (sc == "TillEndOfThisHalfYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::TillEndOfThisHalfYear;
            return dst;
        }
        if (sc == "TillEndOfThisYear") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::TillEndOfThisYear;
            return dst;
        }
        if (sc == "Last7Days") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Last7Days;
            return dst;
        }
        if (sc == "Next7Days") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Next7Days;
            return dst;
        }
        if (sc == "Month") {
            dst = v81c::v8_1::data::core::StandardPeriodVariant::Month;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState &
__read(v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState::Unkwnown;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Unkwnown") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState::Unkwnown;
            return dst;
        }
        if (sc == "true") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState::_true;
            return dst;
        }
        if (sc == "false") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState::_false;
            return dst;
        }
        if (sc == "error") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState::error;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant &
__read(v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant::Unknown;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Unknown") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant::Unknown;
            return dst;
        }
        if (sc == "EvalExpr") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant::EvalExpr;
            return dst;
        }
        if (sc == "BPEvalExpr") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant::BPEvalExpr;
            return dst;
        }
        if (sc == "Continue") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant::Continue;
            return dst;
        }
        if (sc == "Terminate") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant::Terminate;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces &
__read(v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces::NoneVariant;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NoneVariant") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces::NoneVariant;
            return dst;
        }
        if (sc == "ContextVariant") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces::ContextVariant;
            return dst;
        }
        if (sc == "EnumVatiant") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces::EnumVatiant;
            return dst;
        }
        if (sc == "CollectionVariant") {
            dst = v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces::CollectionVariant;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::AnalysisDataType &
__read(v81c::v8_2::data::dataanalysis::AnalysisDataType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::AnalysisDataType::Contiguous;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Contiguous") {
            dst = v81c::v8_2::data::dataanalysis::AnalysisDataType::Contiguous;
            return dst;
        }
        if (sc == "Discrete") {
            dst = v81c::v8_2::data::dataanalysis::AnalysisDataType::Discrete;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType &
__read(v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType::Event;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Event") {
            dst = v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType::Event;
            return dst;
        }
        if (sc == "Object") {
            dst = v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType::Object;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::AssociationRulesPruneType &
__read(v81c::v8_2::data::dataanalysis::AssociationRulesPruneType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::AssociationRulesPruneType::Redundant;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Redundant") {
            dst = v81c::v8_2::data::dataanalysis::AssociationRulesPruneType::Redundant;
            return dst;
        }
        if (sc == "Covered") {
            dst = v81c::v8_2::data::dataanalysis::AssociationRulesPruneType::Covered;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::ClusterizationMethod &
__read(v81c::v8_2::data::dataanalysis::ClusterizationMethod &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::ClusterizationMethod::KMeans;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "KMeans") {
            dst = v81c::v8_2::data::dataanalysis::ClusterizationMethod::KMeans;
            return dst;
        }
        if (sc == "NearestNeighbor") {
            dst = v81c::v8_2::data::dataanalysis::ClusterizationMethod::NearestNeighbor;
            return dst;
        }
        if (sc == "FurthestNeighbor") {
            dst = v81c::v8_2::data::dataanalysis::ClusterizationMethod::FurthestNeighbor;
            return dst;
        }
        if (sc == "Centroid") {
            dst = v81c::v8_2::data::dataanalysis::ClusterizationMethod::Centroid;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType::BySupport;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "BySupport") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType::BySupport;
            return dst;
        }
        if (sc == "ByConfidence") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType::ByConfidence;
            return dst;
        }
        if (sc == "ByImportance") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType::ByImportance;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisColumnType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnType::NotUsed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotUsed") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnType::NotUsed;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules::NotUsed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotUsed") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules::NotUsed;
            return dst;
        }
        if (sc == "Object") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules::Object;
            return dst;
        }
        if (sc == "Item") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules::Item;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization::NotUsed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotUsed") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization::NotUsed;
            return dst;
        }
        if (sc == "Input") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization::Input;
            return dst;
        }
        if (sc == "Predictable") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization::Predictable;
            return dst;
        }
        if (sc == "InputAndPredictable") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization::InputAndPredictable;
            return dst;
        }
        if (sc == "Key") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization::Key;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree::NotUsed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotUsed") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree::NotUsed;
            return dst;
        }
        if (sc == "Input") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree::Input;
            return dst;
        }
        if (sc == "Predictable") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree::Predictable;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns::NotUsed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotUsed") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns::NotUsed;
            return dst;
        }
        if (sc == "Item") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns::Item;
            return dst;
        }
        if (sc == "Sequence") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns::Sequence;
            return dst;
        }
        if (sc == "Time") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns::Time;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics::NotUsed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotUsed") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics::NotUsed;
            return dst;
        }
        if (sc == "Input") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics::Input;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType::SquaredEuclidean;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "SquaredEuclidean") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType::SquaredEuclidean;
            return dst;
        }
        if (sc == "Euclidean") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType::Euclidean;
            return dst;
        }
        if (sc == "CityBlock") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType::CityBlock;
            return dst;
        }
        if (sc == "Maximum") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType::Maximum;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType::AsNumeric;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AsNumeric") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType::AsNumeric;
            return dst;
        }
        if (sc == "AsBoolean") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType::AsBoolean;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType::DontFill;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontFill") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType::DontFill;
            return dst;
        }
        if (sc == "KeyFields") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType::KeyFields;
            return dst;
        }
        if (sc == "UsedFields") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType::UsedFields;
            return dst;
        }
        if (sc == "AllFields") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType::AllFields;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType::BySupport;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "BySupport") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType::BySupport;
            return dst;
        }
        if (sc == "ByLength") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType::ByLength;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType::DontStandardize;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontStandardize") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType::DontStandardize;
            return dst;
        }
        if (sc == "Standardize") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType::Standardize;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Second;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Second") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Second;
            return dst;
        }
        if (sc == "CurrentMinute") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentMinute;
            return dst;
        }
        if (sc == "Minute") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Minute;
            return dst;
        }
        if (sc == "CurrentHour") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentHour;
            return dst;
        }
        if (sc == "Hour") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Hour;
            return dst;
        }
        if (sc == "CurrentDay") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentDay;
            return dst;
        }
        if (sc == "Day") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Day;
            return dst;
        }
        if (sc == "CurrentWeek") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentWeek;
            return dst;
        }
        if (sc == "Week") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Week;
            return dst;
        }
        if (sc == "CurrentMonth") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentMonth;
            return dst;
        }
        if (sc == "Month") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Month;
            return dst;
        }
        if (sc == "CurrentQuarter") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentQuarter;
            return dst;
        }
        if (sc == "Quarter") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Quarter;
            return dst;
        }
        if (sc == "CurrentYear") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentYear;
            return dst;
        }
        if (sc == "Year") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::Year;
            return dst;
        }
        if (sc == "CurrentTenDays") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentTenDays;
            return dst;
        }
        if (sc == "TenDays") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::TenDays;
            return dst;
        }
        if (sc == "CurrentHalfYear") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::CurrentHalfYear;
            return dst;
        }
        if (sc == "HalfYear") {
            dst = v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType::HalfYear;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType &
__read(v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType::DontSimplify;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontSimplify") {
            dst = v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType::DontSimplify;
            return dst;
        }
        if (sc == "Simplify") {
            dst = v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType::Simplify;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::dataanalysis::PredictionModelColumnType &
__read(v81c::v8_2::data::dataanalysis::PredictionModelColumnType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::dataanalysis::PredictionModelColumnType::Input;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Input") {
            dst = v81c::v8_2::data::dataanalysis::PredictionModelColumnType::Input;
            return dst;
        }
        if (sc == "Predictable") {
            dst = v81c::v8_2::data::dataanalysis::PredictionModelColumnType::Predictable;
            return dst;
        }
        if (sc == "DataSourceColumn") {
            dst = v81c::v8_2::data::dataanalysis::PredictionModelColumnType::DataSourceColumn;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AccountType &
__read(v81c::v8_1::data::enterprise::AccountType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AccountType::Active;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Active") {
            dst = v81c::v8_1::data::enterprise::AccountType::Active;
            return dst;
        }
        if (sc == "Passive") {
            dst = v81c::v8_1::data::enterprise::AccountType::Passive;
            return dst;
        }
        if (sc == "ActivePassive") {
            dst = v81c::v8_1::data::enterprise::AccountType::ActivePassive;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AccountingRecordType &
__read(v81c::v8_1::data::enterprise::AccountingRecordType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AccountingRecordType::Debit;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Debit") {
            dst = v81c::v8_1::data::enterprise::AccountingRecordType::Debit;
            return dst;
        }
        if (sc == "Credit") {
            dst = v81c::v8_1::data::enterprise::AccountingRecordType::Credit;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AccumulationRecordType &
__read(v81c::v8_1::data::enterprise::AccumulationRecordType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AccumulationRecordType::Receipt;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Receipt") {
            dst = v81c::v8_1::data::enterprise::AccumulationRecordType::Receipt;
            return dst;
        }
        if (sc == "Expense") {
            dst = v81c::v8_1::data::enterprise::AccumulationRecordType::Expense;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity &
__read(v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Nonperiodical") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Nonperiodical;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Auto;
            return dst;
        }
        if (sc == "Day") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Day;
            return dst;
        }
        if (sc == "Month") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Month;
            return dst;
        }
        if (sc == "Quarter") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Quarter;
            return dst;
        }
        if (sc == "HalfYear") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::HalfYear;
            return dst;
        }
        if (sc == "Year") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity::Year;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse &
__read(v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse::Auto;
            return dst;
        }
        if (sc == "Always") {
            dst = v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse::Always;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AutoShowStateMode &
__read(v81c::v8_1::data::enterprise::AutoShowStateMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AutoShowStateMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::AutoShowStateMode::Auto;
            return dst;
        }
        if (sc == "DontShow") {
            dst = v81c::v8_1::data::enterprise::AutoShowStateMode::DontShow;
            return dst;
        }
        if (sc == "Show") {
            dst = v81c::v8_1::data::enterprise::AutoShowStateMode::Show;
            return dst;
        }
        if (sc == "ShowOnComposition") {
            dst = v81c::v8_1::data::enterprise::AutoShowStateMode::ShowOnComposition;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::AutoTimeMode &
__read(v81c::v8_1::data::enterprise::AutoTimeMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::AutoTimeMode::DontUse;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_1::data::enterprise::AutoTimeMode::DontUse;
            return dst;
        }
        if (sc == "Last") {
            dst = v81c::v8_1::data::enterprise::AutoTimeMode::Last;
            return dst;
        }
        if (sc == "First") {
            dst = v81c::v8_1::data::enterprise::AutoTimeMode::First;
            return dst;
        }
        if (sc == "CurrentOrLast") {
            dst = v81c::v8_1::data::enterprise::AutoTimeMode::CurrentOrLast;
            return dst;
        }
        if (sc == "CurrentOrFirst") {
            dst = v81c::v8_1::data::enterprise::AutoTimeMode::CurrentOrFirst;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant &
__read(v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant::Normal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Normal") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant::Normal;
            return dst;
        }
        if (sc == "Large") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant::Large;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant &
__read(v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant::Auto;
            return dst;
        }
        if (sc == "Normal") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant::Normal;
            return dst;
        }
        if (sc == "Compact") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant::Compact;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant &
__read(v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant::Version8_2;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Version8_2") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant::Version8_2;
            return dst;
        }
        if (sc == "Taxi") {
            dst = v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant::Taxi;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ClientConnectionSpeed &
__read(v81c::v8_1::data::enterprise::ClientConnectionSpeed &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ClientConnectionSpeed::Normal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Normal") {
            dst = v81c::v8_1::data::enterprise::ClientConnectionSpeed::Normal;
            return dst;
        }
        if (sc == "Low") {
            dst = v81c::v8_1::data::enterprise::ClientConnectionSpeed::Low;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ComparisonType &
__read(v81c::v8_1::data::enterprise::ComparisonType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ComparisonType::Equal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Equal") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::Equal;
            return dst;
        }
        if (sc == "NotEqual") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotEqual;
            return dst;
        }
        if (sc == "Less") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::Less;
            return dst;
        }
        if (sc == "LessOrEqual") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::LessOrEqual;
            return dst;
        }
        if (sc == "Greater") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::Greater;
            return dst;
        }
        if (sc == "GreaterOrEqual") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::GreaterOrEqual;
            return dst;
        }
        if (sc == "Interval") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::Interval;
            return dst;
        }
        if (sc == "IntervalIncludingBounds") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::IntervalIncludingBounds;
            return dst;
        }
        if (sc == "IntervalIncludingLowerBound") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::IntervalIncludingLowerBound;
            return dst;
        }
        if (sc == "IntervalIncludingUpperBound") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::IntervalIncludingUpperBound;
            return dst;
        }
        if (sc == "Contains") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::Contains;
            return dst;
        }
        if (sc == "InList") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::InList;
            return dst;
        }
        if (sc == "InListByHierarchy") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::InListByHierarchy;
            return dst;
        }
        if (sc == "NotInList") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotInList;
            return dst;
        }
        if (sc == "NotInListByHierarchy") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotInListByHierarchy;
            return dst;
        }
        if (sc == "InHierarchy") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::InHierarchy;
            return dst;
        }
        if (sc == "NotInHierarchy") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotInHierarchy;
            return dst;
        }
        if (sc == "NotContains") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotContains;
            return dst;
        }
        if (sc == "BeginsWith") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::BeginsWith;
            return dst;
        }
        if (sc == "NotBeginsWith") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotBeginsWith;
            return dst;
        }
        if (sc == "Like") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::Like;
            return dst;
        }
        if (sc == "NotLike") {
            dst = v81c::v8_1::data::enterprise::ComparisonType::NotLike;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::DocumentPostingMode &
__read(v81c::v8_1::data::enterprise::DocumentPostingMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::DocumentPostingMode::Regular;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Regular") {
            dst = v81c::v8_1::data::enterprise::DocumentPostingMode::Regular;
            return dst;
        }
        if (sc == "RealTime") {
            dst = v81c::v8_1::data::enterprise::DocumentPostingMode::RealTime;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::DocumentWriteMode &
__read(v81c::v8_1::data::enterprise::DocumentWriteMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::DocumentWriteMode::Write;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Write") {
            dst = v81c::v8_1::data::enterprise::DocumentWriteMode::Write;
            return dst;
        }
        if (sc == "Posting") {
            dst = v81c::v8_1::data::enterprise::DocumentWriteMode::Posting;
            return dst;
        }
        if (sc == "UndoPosting") {
            dst = v81c::v8_1::data::enterprise::DocumentWriteMode::UndoPosting;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::FoldersAndItemsUse &
__read(v81c::v8_1::data::enterprise::FoldersAndItemsUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::FoldersAndItemsUse::Items;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Items") {
            dst = v81c::v8_1::data::enterprise::FoldersAndItemsUse::Items;
            return dst;
        }
        if (sc == "Folders") {
            dst = v81c::v8_1::data::enterprise::FoldersAndItemsUse::Folders;
            return dst;
        }
        if (sc == "FoldersAndItems") {
            dst = v81c::v8_1::data::enterprise::FoldersAndItemsUse::FoldersAndItems;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::LinkedValueChangeMode &
__read(v81c::v8_1::data::enterprise::LinkedValueChangeMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::LinkedValueChangeMode::Clear;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Clear") {
            dst = v81c::v8_1::data::enterprise::LinkedValueChangeMode::Clear;
            return dst;
        }
        if (sc == "DontChange") {
            dst = v81c::v8_1::data::enterprise::LinkedValueChangeMode::DontChange;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::MessageStatus &
__read(v81c::v8_1::data::enterprise::MessageStatus &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::MessageStatus::WithoutStatus;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WithoutStatus") {
            dst = v81c::v8_1::data::enterprise::MessageStatus::WithoutStatus;
            return dst;
        }
        if (sc == "Ordinary") {
            dst = v81c::v8_1::data::enterprise::MessageStatus::Ordinary;
            return dst;
        }
        if (sc == "Information") {
            dst = v81c::v8_1::data::enterprise::MessageStatus::Information;
            return dst;
        }
        if (sc == "Attention") {
            dst = v81c::v8_1::data::enterprise::MessageStatus::Attention;
            return dst;
        }
        if (sc == "Important") {
            dst = v81c::v8_1::data::enterprise::MessageStatus::Important;
            return dst;
        }
        if (sc == "VeryImportant") {
            dst = v81c::v8_1::data::enterprise::MessageStatus::VeryImportant;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ModalityUseMode &
__read(v81c::v8_1::data::enterprise::ModalityUseMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ModalityUseMode::Use;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Use") {
            dst = v81c::v8_1::data::enterprise::ModalityUseMode::Use;
            return dst;
        }
        if (sc == "UseWithWarnings") {
            dst = v81c::v8_1::data::enterprise::ModalityUseMode::UseWithWarnings;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_1::data::enterprise::ModalityUseMode::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::PostingModeUse &
__read(v81c::v8_1::data::enterprise::PostingModeUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::PostingModeUse::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Regular") {
            dst = v81c::v8_1::data::enterprise::PostingModeUse::Regular;
            return dst;
        }
        if (sc == "RealTime") {
            dst = v81c::v8_1::data::enterprise::PostingModeUse::RealTime;
            return dst;
        }
        if (sc == "Ask") {
            dst = v81c::v8_1::data::enterprise::PostingModeUse::Ask;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::PostingModeUse::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::ResultCompositionMode &
__read(v81c::v8_1::data::enterprise::ResultCompositionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::ResultCompositionMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::ResultCompositionMode::Auto;
            return dst;
        }
        if (sc == "Background") {
            dst = v81c::v8_1::data::enterprise::ResultCompositionMode::Background;
            return dst;
        }
        if (sc == "Directly") {
            dst = v81c::v8_1::data::enterprise::ResultCompositionMode::Directly;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::TransactionsIsolationLevel &
__read(v81c::v8_1::data::enterprise::TransactionsIsolationLevel &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::TransactionsIsolationLevel::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::TransactionsIsolationLevel::Auto;
            return dst;
        }
        if (sc == "ReadUncommitted") {
            dst = v81c::v8_1::data::enterprise::TransactionsIsolationLevel::ReadUncommitted;
            return dst;
        }
        if (sc == "ReadCommitted") {
            dst = v81c::v8_1::data::enterprise::TransactionsIsolationLevel::ReadCommitted;
            return dst;
        }
        if (sc == "RepeatableRead") {
            dst = v81c::v8_1::data::enterprise::TransactionsIsolationLevel::RepeatableRead;
            return dst;
        }
        if (sc == "Serializable") {
            dst = v81c::v8_1::data::enterprise::TransactionsIsolationLevel::Serializable;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::data::enterprise::UpdateOnDataChange &
__read(v81c::v8_1::data::enterprise::UpdateOnDataChange &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::data::enterprise::UpdateOnDataChange::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::data::enterprise::UpdateOnDataChange::Auto;
            return dst;
        }
        if (sc == "DontUpdate") {
            dst = v81c::v8_1::data::enterprise::UpdateOnDataChange::DontUpdate;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartAnimation &
__read(v81c::v8_2::data::chart::ChartAnimation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartAnimation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::chart::ChartAnimation::Auto;
            return dst;
        }
        if (sc == "Use") {
            dst = v81c::v8_2::data::chart::ChartAnimation::Use;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::data::chart::ChartAnimation::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartLabelLocation &
__read(v81c::v8_2::data::chart::ChartLabelLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartLabelLocation::Edge;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Edge") {
            dst = v81c::v8_2::data::chart::ChartLabelLocation::Edge;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::data::chart::ChartLabelLocation::Center;
            return dst;
        }
        if (sc == "EdgeInside") {
            dst = v81c::v8_2::data::chart::ChartLabelLocation::EdgeInside;
            return dst;
        }
        if (sc == "EdgeAuto") {
            dst = v81c::v8_2::data::chart::ChartLabelLocation::EdgeAuto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartMarkerType &
__read(v81c::v8_2::data::chart::ChartMarkerType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartMarkerType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::chart::ChartMarkerType::None;
            return dst;
        }
        if (sc == "Rect") {
            dst = v81c::v8_2::data::chart::ChartMarkerType::Rect;
            return dst;
        }
        if (sc == "Circle") {
            dst = v81c::v8_2::data::chart::ChartMarkerType::Circle;
            return dst;
        }
        if (sc == "Rhomb") {
            dst = v81c::v8_2::data::chart::ChartMarkerType::Rhomb;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartOrientation &
__read(v81c::v8_2::data::chart::ChartOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartOrientation::SouthWest;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "SouthWest") {
            dst = v81c::v8_2::data::chart::ChartOrientation::SouthWest;
            return dst;
        }
        if (sc == "SouthEast") {
            dst = v81c::v8_2::data::chart::ChartOrientation::SouthEast;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartSemitransparencyMode &
__read(v81c::v8_2::data::chart::ChartSemitransparencyMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartSemitransparencyMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_2::data::chart::ChartSemitransparencyMode::DontUse;
            return dst;
        }
        if (sc == "Use") {
            dst = v81c::v8_2::data::chart::ChartSemitransparencyMode::Use;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::data::chart::ChartSemitransparencyMode::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartSpaceMode &
__read(v81c::v8_2::data::chart::ChartSpaceMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartSpaceMode::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::chart::ChartSpaceMode::None;
            return dst;
        }
        if (sc == "Half") {
            dst = v81c::v8_2::data::chart::ChartSpaceMode::Half;
            return dst;
        }
        if (sc == "Full") {
            dst = v81c::v8_2::data::chart::ChartSpaceMode::Full;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartSplineMode &
__read(v81c::v8_2::data::chart::ChartSplineMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartSplineMode::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::chart::ChartSplineMode::None;
            return dst;
        }
        if (sc == "SmoothCurve") {
            dst = v81c::v8_2::data::chart::ChartSplineMode::SmoothCurve;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType &
__read(v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType::None;
            return dst;
        }
        if (sc == "EdgesConnection") {
            dst = v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType::EdgesConnection;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::DendrogramOrientation &
__read(v81c::v8_2::data::chart::DendrogramOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::DendrogramOrientation::Top;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Top") {
            dst = v81c::v8_2::data::chart::DendrogramOrientation::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::data::chart::DendrogramOrientation::Bottom;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::data::chart::DendrogramOrientation::Right;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_2::data::chart::DendrogramOrientation::Left;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::DendrogramScaleKeeping &
__read(v81c::v8_2::data::chart::DendrogramScaleKeeping &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::DendrogramScaleKeeping::AllItems;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AllItems") {
            dst = v81c::v8_2::data::chart::DendrogramScaleKeeping::AllItems;
            return dst;
        }
        if (sc == "ItemCount") {
            dst = v81c::v8_2::data::chart::DendrogramScaleKeeping::ItemCount;
            return dst;
        }
        if (sc == "MinimumWidth") {
            dst = v81c::v8_2::data::chart::DendrogramScaleKeeping::MinimumWidth;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GanttChartIntervalRepresentation &
__read(v81c::v8_2::data::chart::GanttChartIntervalRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GanttChartIntervalRepresentation::Flat;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Flat") {
            dst = v81c::v8_2::data::chart::GanttChartIntervalRepresentation::Flat;
            return dst;
        }
        if (sc == "ThreeDimensional") {
            dst = v81c::v8_2::data::chart::GanttChartIntervalRepresentation::ThreeDimensional;
            return dst;
        }
        if (sc == "Rhomb") {
            dst = v81c::v8_2::data::chart::GanttChartIntervalRepresentation::Rhomb;
            return dst;
        }
        if (sc == "Gradient") {
            dst = v81c::v8_2::data::chart::GanttChartIntervalRepresentation::Gradient;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GanttChartLinkType &
__read(v81c::v8_2::data::chart::GanttChartLinkType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GanttChartLinkType::BeginEnd;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "BeginEnd") {
            dst = v81c::v8_2::data::chart::GanttChartLinkType::BeginEnd;
            return dst;
        }
        if (sc == "BeginBegin") {
            dst = v81c::v8_2::data::chart::GanttChartLinkType::BeginBegin;
            return dst;
        }
        if (sc == "EndBegin") {
            dst = v81c::v8_2::data::chart::GanttChartLinkType::EndBegin;
            return dst;
        }
        if (sc == "EndEnd") {
            dst = v81c::v8_2::data::chart::GanttChartLinkType::EndEnd;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GanttChartScaleKeeping &
__read(v81c::v8_2::data::chart::GanttChartScaleKeeping &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GanttChartScaleKeeping::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Fixed") {
            dst = v81c::v8_2::data::chart::GanttChartScaleKeeping::Fixed;
            return dst;
        }
        if (sc == "Period") {
            dst = v81c::v8_2::data::chart::GanttChartScaleKeeping::Period;
            return dst;
        }
        if (sc == "AllData") {
            dst = v81c::v8_2::data::chart::GanttChartScaleKeeping::AllData;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::data::chart::GanttChartScaleKeeping::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GanttChartValueTextRepresentation &
__read(v81c::v8_2::data::chart::GanttChartValueTextRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GanttChartValueTextRepresentation::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::chart::GanttChartValueTextRepresentation::None;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::data::chart::GanttChartValueTextRepresentation::Right;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GanttChartVerticalStretch &
__read(v81c::v8_2::data::chart::GanttChartVerticalStretch &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GanttChartVerticalStretch::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::chart::GanttChartVerticalStretch::None;
            return dst;
        }
        if (sc == "StretchRows") {
            dst = v81c::v8_2::data::chart::GanttChartVerticalStretch::StretchRows;
            return dst;
        }
        if (sc == "StretchRowsAndData") {
            dst = v81c::v8_2::data::chart::GanttChartVerticalStretch::StretchRowsAndData;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GaugeChartValueRepresentation &
__read(v81c::v8_2::data::chart::GaugeChartValueRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GaugeChartValueRepresentation::Needle;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Needle") {
            dst = v81c::v8_2::data::chart::GaugeChartValueRepresentation::Needle;
            return dst;
        }
        if (sc == "Sector") {
            dst = v81c::v8_2::data::chart::GaugeChartValueRepresentation::Sector;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation &
__read(v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation::AtScale;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AtScale") {
            dst = v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation::AtScale;
            return dst;
        }
        if (sc == "InsideScale") {
            dst = v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation::InsideScale;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::MaxSeries &
__read(v81c::v8_2::data::chart::MaxSeries &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::MaxSeries::NotDefined;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NotDefined") {
            dst = v81c::v8_2::data::chart::MaxSeries::NotDefined;
            return dst;
        }
        if (sc == "Limited") {
            dst = v81c::v8_2::data::chart::MaxSeries::Limited;
            return dst;
        }
        if (sc == "Percent") {
            dst = v81c::v8_2::data::chart::MaxSeries::Percent;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::PivotChartLabelsOrientation &
__read(v81c::v8_2::data::chart::PivotChartLabelsOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::PivotChartLabelsOrientation::TopLevelsVertical;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "TopLevelsVertical") {
            dst = v81c::v8_2::data::chart::PivotChartLabelsOrientation::TopLevelsVertical;
            return dst;
        }
        if (sc == "AllLevelsVertical") {
            dst = v81c::v8_2::data::chart::PivotChartLabelsOrientation::AllLevelsVertical;
            return dst;
        }
        if (sc == "AllLevelsHorizontal") {
            dst = v81c::v8_2::data::chart::PivotChartLabelsOrientation::AllLevelsHorizontal;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::PivotChartScaleKeeping &
__read(v81c::v8_2::data::chart::PivotChartScaleKeeping &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::PivotChartScaleKeeping::AllValues;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AllValues") {
            dst = v81c::v8_2::data::chart::PivotChartScaleKeeping::AllValues;
            return dst;
        }
        if (sc == "ValuesCount") {
            dst = v81c::v8_2::data::chart::PivotChartScaleKeeping::ValuesCount;
            return dst;
        }
        if (sc == "MinimumWidth") {
            dst = v81c::v8_2::data::chart::PivotChartScaleKeeping::MinimumWidth;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::PivotChartType &
__read(v81c::v8_2::data::chart::PivotChartType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::PivotChartType::Column;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Column") {
            dst = v81c::v8_2::data::chart::PivotChartType::Column;
            return dst;
        }
        if (sc == "Column3D") {
            dst = v81c::v8_2::data::chart::PivotChartType::Column3D;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::PivotChartValuesShowMode &
__read(v81c::v8_2::data::chart::PivotChartValuesShowMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::PivotChartValuesShowMode::AllValues;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AllValues") {
            dst = v81c::v8_2::data::chart::PivotChartValuesShowMode::AllValues;
            return dst;
        }
        if (sc == "LastLevelValues") {
            dst = v81c::v8_2::data::chart::PivotChartValuesShowMode::LastLevelValues;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::RadarChartScaleType &
__read(v81c::v8_2::data::chart::RadarChartScaleType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::RadarChartScaleType::Circle;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Circle") {
            dst = v81c::v8_2::data::chart::RadarChartScaleType::Circle;
            return dst;
        }
        if (sc == "Polygon") {
            dst = v81c::v8_2::data::chart::RadarChartScaleType::Polygon;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::TimeScaleDayFormat &
__read(v81c::v8_2::data::chart::TimeScaleDayFormat &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::TimeScaleDayFormat::MonthDay;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "MonthDay") {
            dst = v81c::v8_2::data::chart::TimeScaleDayFormat::MonthDay;
            return dst;
        }
        if (sc == "WeekDay") {
            dst = v81c::v8_2::data::chart::TimeScaleDayFormat::WeekDay;
            return dst;
        }
        if (sc == "MonthDayWeekDay") {
            dst = v81c::v8_2::data::chart::TimeScaleDayFormat::MonthDayWeekDay;
            return dst;
        }
        if (sc == "WeekDayMonthDay") {
            dst = v81c::v8_2::data::chart::TimeScaleDayFormat::WeekDayMonthDay;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::TimeScalePosition &
__read(v81c::v8_2::data::chart::TimeScalePosition &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::TimeScalePosition::Top;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Top") {
            dst = v81c::v8_2::data::chart::TimeScalePosition::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::data::chart::TimeScalePosition::Bottom;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_2::data::chart::TimeScalePosition::Left;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::data::chart::TimeScalePosition::Right;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::chart::TimeScaleUnitType &
__read(v81c::v8_2::data::chart::TimeScaleUnitType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::chart::TimeScaleUnitType::Second;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Second") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Second;
            return dst;
        }
        if (sc == "Minute") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Minute;
            return dst;
        }
        if (sc == "Hour") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Hour;
            return dst;
        }
        if (sc == "Day") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Day;
            return dst;
        }
        if (sc == "Week") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Week;
            return dst;
        }
        if (sc == "Month") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Month;
            return dst;
        }
        if (sc == "Quarter") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Quarter;
            return dst;
        }
        if (sc == "Year") {
            dst = v81c::v8_2::data::chart::TimeScaleUnitType::Year;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType &
__read(v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType::AtRow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AtRow") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType::AtRow;
            return dst;
        }
        if (sc == "AtIntersection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType::AtIntersection;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode &
__read(v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::DontShow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontShow") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::DontShow;
            return dst;
        }
        if (sc == "Text") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::Text;
            return dst;
        }
        if (sc == "Column") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::Column;
            return dst;
        }
        if (sc == "ShapeSize") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::ShapeSize;
            return dst;
        }
        if (sc == "ShapeColor") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::ShapeColor;
            return dst;
        }
        if (sc == "ShapeColorHue") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::ShapeColorHue;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::Picture;
            return dst;
        }
        if (sc == "Pie") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::Pie;
            return dst;
        }
        if (sc == "SizedPie") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode::SizedPie;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType &
__read(v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType::DontShow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontShow") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType::DontShow;
            return dst;
        }
        if (sc == "ShowByValues") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType::ShowByValues;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaLineType &
__read(v81c::v8_2::data::geo::GeographicalSchemaLineType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::None;
            return dst;
        }
        if (sc == "Solid") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::Solid;
            return dst;
        }
        if (sc == "Dotted") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::Dotted;
            return dst;
        }
        if (sc == "Dashed") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::Dashed;
            return dst;
        }
        if (sc == "DashDotted") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::DashDotted;
            return dst;
        }
        if (sc == "DashDottedDotted") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaLineType::DashDottedDotted;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaMarkerType &
__read(v81c::v8_2::data::geo::GeographicalSchemaMarkerType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::None;
            return dst;
        }
        if (sc == "Pin") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::Pin;
            return dst;
        }
        if (sc == "Darts") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::Darts;
            return dst;
        }
        if (sc == "LittleCircle") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::LittleCircle;
            return dst;
        }
        if (sc == "BigCircle") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::BigCircle;
            return dst;
        }
        if (sc == "LittleSquare") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::LittleSquare;
            return dst;
        }
        if (sc == "BigSquare") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::BigSquare;
            return dst;
        }
        if (sc == "LittleTriangle") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::LittleTriangle;
            return dst;
        }
        if (sc == "BigTriangle") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::BigTriangle;
            return dst;
        }
        if (sc == "QuestionMark") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::QuestionMark;
            return dst;
        }
        if (sc == "ExclamationPoint") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaMarkerType::ExclamationPoint;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType &
__read(v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType::Char;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Char") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType::Char;
            return dst;
        }
        if (sc == "Marker") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType::Marker;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType::Picture;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaProjection &
__read(v81c::v8_2::data::geo::GeographicalSchemaProjection &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::CylindricalMillerProjection;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "CylindricalMillerProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::CylindricalMillerProjection;
            return dst;
        }
        if (sc == "CylindricalLambertEqualAreaProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::CylindricalLambertEqualAreaProjection;
            return dst;
        }
        if (sc == "CylindricalGallStereographicProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::CylindricalGallStereographicProjection;
            return dst;
        }
        if (sc == "CylindricalEquidistantProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::CylindricalEquidistantProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalSinusoidalProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalSinusoidalProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalMollweideProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalMollweideProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalRobinsonProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalRobinsonProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalEckert1Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalEckert1Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalEckert2Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalEckert2Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalEckert3Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalEckert3Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalEckert4Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalEckert4Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalEckert5Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalEckert5Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalEckert6Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalEckert6Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalHatanoAsymetricalEqualAreaProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalHatanoAsymetricalEqualAreaProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalLoximutalProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalLoximutalProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalMcBrydeThomasFlatPolarParabolicProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalMcBrydeThomasFlatPolarParabolicProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalMcBrydeThomasFlatPolarQuarticProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalMcBrydeThomasFlatPolarQuarticProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalMcBrydeThomasFlatPolarSinusoidalProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalMcBrydeThomasFlatPolarSinusoidalProjection;
            return dst;
        }
        if (sc == "PseudoCylindricalPutninP2Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalPutninP2Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalPutninP5Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalPutninP5Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalWinkel1Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalWinkel1Projection;
            return dst;
        }
        if (sc == "PseudoCylindricalBoggsEumorphicProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::PseudoCylindricalBoggsEumorphicProjection;
            return dst;
        }
        if (sc == "AzimuthalHammerProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::AzimuthalHammerProjection;
            return dst;
        }
        if (sc == "AzimuthalWagner7Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::AzimuthalWagner7Projection;
            return dst;
        }
        if (sc == "AzimuthalAitoffProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::AzimuthalAitoffProjection;
            return dst;
        }
        if (sc == "AzimuthalWinkelTripelProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::AzimuthalWinkelTripelProjection;
            return dst;
        }
        if (sc == "AzimuthalEquidistantProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::AzimuthalEquidistantProjection;
            return dst;
        }
        if (sc == "AzimuthalLambertEqualAreaProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::AzimuthalLambertEqualAreaProjection;
            return dst;
        }
        if (sc == "MiscellaneousAugustEpicycloidalProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousAugustEpicycloidalProjection;
            return dst;
        }
        if (sc == "MiscellaneousBaconGlobularProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousBaconGlobularProjection;
            return dst;
        }
        if (sc == "MiscellaneousNicolosiGlobularProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousNicolosiGlobularProjection;
            return dst;
        }
        if (sc == "MiscellaneousApianGlobular1Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousApianGlobular1Projection;
            return dst;
        }
        if (sc == "MiscellaneousOrteliusOvalProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousOrteliusOvalProjection;
            return dst;
        }
        if (sc == "MiscellaneousVanDerGrinten1Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousVanDerGrinten1Projection;
            return dst;
        }
        if (sc == "MiscellaneousVanDerGrinten2Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousVanDerGrinten2Projection;
            return dst;
        }
        if (sc == "MiscellaneousVanDerGrinten3Projection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::MiscellaneousVanDerGrinten3Projection;
            return dst;
        }
        if (sc == "ConicLambertEqualAreaProjection") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaProjection::ConicLambertEqualAreaProjection;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::GeographicalSchemaShowMode &
__read(v81c::v8_2::data::geo::GeographicalSchemaShowMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::GeographicalSchemaShowMode::ScaleDefined;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "ScaleDefined") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaShowMode::ScaleDefined;
            return dst;
        }
        if (sc == "AllData") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaShowMode::AllData;
            return dst;
        }
        if (sc == "SpecifiedArea") {
            dst = v81c::v8_2::data::geo::GeographicalSchemaShowMode::SpecifiedArea;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::PaintingReferencePointPosition &
__read(v81c::v8_2::data::geo::PaintingReferencePointPosition &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::LeftTop;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "LeftTop") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::LeftTop;
            return dst;
        }
        if (sc == "LeftCenter") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::LeftCenter;
            return dst;
        }
        if (sc == "LeftBottom") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::LeftBottom;
            return dst;
        }
        if (sc == "CenterTop") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::CenterTop;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::Center;
            return dst;
        }
        if (sc == "CenterBottom") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::CenterBottom;
            return dst;
        }
        if (sc == "RightTop") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::RightTop;
            return dst;
        }
        if (sc == "RightCenter") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::RightCenter;
            return dst;
        }
        if (sc == "RightBottom") {
            dst = v81c::v8_2::data::geo::PaintingReferencePointPosition::RightBottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::geo::SeriesValuesDrawingMode &
__read(v81c::v8_2::data::geo::SeriesValuesDrawingMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::geo::SeriesValuesDrawingMode::ShowAsValue;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "ShowAsValue") {
            dst = v81c::v8_2::data::geo::SeriesValuesDrawingMode::ShowAsValue;
            return dst;
        }
        if (sc == "ShowAsPart") {
            dst = v81c::v8_2::data::geo::SeriesValuesDrawingMode::ShowAsPart;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType &
__read(v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType::WithDimensions;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WithDimensions") {
            dst = v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType::WithDimensions;
            return dst;
        }
        if (sc == "Separately") {
            dst = v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType::Separately;
            return dst;
        }
        if (sc == "Together") {
            dst = v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType::Together;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::DimensionPlacementType &
__read(v81c::v8_2::data::spreadsheet::DimensionPlacementType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::DimensionPlacementType::Together;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Together") {
            dst = v81c::v8_2::data::spreadsheet::DimensionPlacementType::Together;
            return dst;
        }
        if (sc == "Separately") {
            dst = v81c::v8_2::data::spreadsheet::DimensionPlacementType::Separately;
            return dst;
        }
        if (sc == "SeparatelyAndInTotalsOnly") {
            dst = v81c::v8_2::data::spreadsheet::DimensionPlacementType::SeparatelyAndInTotalsOnly;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::DuplexPrintingType &
__read(v81c::v8_2::data::spreadsheet::DuplexPrintingType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::DuplexPrintingType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::spreadsheet::DuplexPrintingType::None;
            return dst;
        }
        if (sc == "FlipPagesLeft") {
            dst = v81c::v8_2::data::spreadsheet::DuplexPrintingType::FlipPagesLeft;
            return dst;
        }
        if (sc == "FlipPagesUp") {
            dst = v81c::v8_2::data::spreadsheet::DuplexPrintingType::FlipPagesUp;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::NamedItemType &
__read(v81c::v8_2::data::spreadsheet::NamedItemType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::NamedItemType::Cells;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Cells") {
            dst = v81c::v8_2::data::spreadsheet::NamedItemType::Cells;
            return dst;
        }
        if (sc == "Drawing") {
            dst = v81c::v8_2::data::spreadsheet::NamedItemType::Drawing;
            return dst;
        }
        if (sc == "EmbeddedTable") {
            dst = v81c::v8_2::data::spreadsheet::NamedItemType::EmbeddedTable;
            return dst;
        }
        if (sc == "DataSource") {
            dst = v81c::v8_2::data::spreadsheet::NamedItemType::DataSource;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::PageOrientation &
__read(v81c::v8_2::data::spreadsheet::PageOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::PageOrientation::Portrait;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Portrait") {
            dst = v81c::v8_2::data::spreadsheet::PageOrientation::Portrait;
            return dst;
        }
        if (sc == "Landscape") {
            dst = v81c::v8_2::data::spreadsheet::PageOrientation::Landscape;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::PagePlacementAlternation &
__read(v81c::v8_2::data::spreadsheet::PagePlacementAlternation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::PagePlacementAlternation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::spreadsheet::PagePlacementAlternation::Auto;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::data::spreadsheet::PagePlacementAlternation::DontUse;
            return dst;
        }
        if (sc == "MirrorOnLeft") {
            dst = v81c::v8_2::data::spreadsheet::PagePlacementAlternation::MirrorOnLeft;
            return dst;
        }
        if (sc == "MirrorOnTop") {
            dst = v81c::v8_2::data::spreadsheet::PagePlacementAlternation::MirrorOnTop;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::PictureSize &
__read(v81c::v8_2::data::spreadsheet::PictureSize &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::PictureSize::RealSize;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "RealSize") {
            dst = v81c::v8_2::data::spreadsheet::PictureSize::RealSize;
            return dst;
        }
        if (sc == "Stretch") {
            dst = v81c::v8_2::data::spreadsheet::PictureSize::Stretch;
            return dst;
        }
        if (sc == "Proportionally") {
            dst = v81c::v8_2::data::spreadsheet::PictureSize::Proportionally;
            return dst;
        }
        if (sc == "Tile") {
            dst = v81c::v8_2::data::spreadsheet::PictureSize::Tile;
            return dst;
        }
        if (sc == "AutoSize") {
            dst = v81c::v8_2::data::spreadsheet::PictureSize::AutoSize;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::PivotTableLinesShowType &
__read(v81c::v8_2::data::spreadsheet::PivotTableLinesShowType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::PivotTableLinesShowType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::spreadsheet::PivotTableLinesShowType::Auto;
            return dst;
        }
        if (sc == "Always") {
            dst = v81c::v8_2::data::spreadsheet::PivotTableLinesShowType::Always;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::PrintAccuracy &
__read(v81c::v8_2::data::spreadsheet::PrintAccuracy &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::PrintAccuracy::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::spreadsheet::PrintAccuracy::Auto;
            return dst;
        }
        if (sc == "Accurate") {
            dst = v81c::v8_2::data::spreadsheet::PrintAccuracy::Accurate;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType::Text;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Text") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType::Text;
            return dst;
        }
        if (sc == "Parameter") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType::Parameter;
            return dst;
        }
        if (sc == "Template") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType::Template;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType::Table;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Table") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType::Table;
            return dst;
        }
        if (sc == "Rows") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType::Rows;
            return dst;
        }
        if (sc == "Columns") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType::Columns;
            return dst;
        }
        if (sc == "Rectangle") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType::Rectangle;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse::Cell;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Cell") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse::Cell;
            return dst;
        }
        if (sc == "Row") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse::Row;
            return dst;
        }
        if (sc == "WithoutProcessing") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse::WithoutProcessing;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Line;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Line") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Line;
            return dst;
        }
        if (sc == "Rectangle") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Rectangle;
            return dst;
        }
        if (sc == "Text") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Text;
            return dst;
        }
        if (sc == "Ellipse") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Ellipse;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Picture;
            return dst;
        }
        if (sc == "Object") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Object;
            return dst;
        }
        if (sc == "Group") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Group;
            return dst;
        }
        if (sc == "Chart") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Chart;
            return dst;
        }
        if (sc == "GanttChart") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::GanttChart;
            return dst;
        }
        if (sc == "PivotChart") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::PivotChart;
            return dst;
        }
        if (sc == "Dendrogram") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Dendrogram;
            return dst;
        }
        if (sc == "GeographicalSchema") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::GeographicalSchema;
            return dst;
        }
        if (sc == "Control") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Control;
            return dst;
        }
        if (sc == "Comment") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType::Comment;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::MXL;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "MXL") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::MXL;
            return dst;
        }
        if (sc == "XLS") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::XLS;
            return dst;
        }
        if (sc == "HTML") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::HTML;
            return dst;
        }
        if (sc == "TXT") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::TXT;
            return dst;
        }
        if (sc == "MXL7") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::MXL7;
            return dst;
        }
        if (sc == "HTML3") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::HTML3;
            return dst;
        }
        if (sc == "HTML4") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::HTML4;
            return dst;
        }
        if (sc == "HTML5") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::HTML5;
            return dst;
        }
        if (sc == "XLS95") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::XLS95;
            return dst;
        }
        if (sc == "XLS97") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::XLS97;
            return dst;
        }
        if (sc == "ANSITXT") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::ANSITXT;
            return dst;
        }
        if (sc == "DOCX") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::DOCX;
            return dst;
        }
        if (sc == "XLSX") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::XLSX;
            return dst;
        }
        if (sc == "ODS") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::ODS;
            return dst;
        }
        if (sc == "PDF") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType::PDF;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement::Auto;
            return dst;
        }
        if (sc == "Begin") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement::Begin;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement::End;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::WithoutPattern;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WithoutPattern") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::WithoutPattern;
            return dst;
        }
        if (sc == "Solid") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Solid;
            return dst;
        }
        if (sc == "Pattern1") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern1;
            return dst;
        }
        if (sc == "Pattern2") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern2;
            return dst;
        }
        if (sc == "Pattern3") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern3;
            return dst;
        }
        if (sc == "Pattern4") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern4;
            return dst;
        }
        if (sc == "Pattern5") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern5;
            return dst;
        }
        if (sc == "Pattern6") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern6;
            return dst;
        }
        if (sc == "Pattern7") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern7;
            return dst;
        }
        if (sc == "Pattern8") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern8;
            return dst;
        }
        if (sc == "Pattern9") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern9;
            return dst;
        }
        if (sc == "Pattern10") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern10;
            return dst;
        }
        if (sc == "Pattern11") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern11;
            return dst;
        }
        if (sc == "Pattern12") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern12;
            return dst;
        }
        if (sc == "Pattern13") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern13;
            return dst;
        }
        if (sc == "Pattern14") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern14;
            return dst;
        }
        if (sc == "Pattern15") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern15;
            return dst;
        }
        if (sc == "Pattern16") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern16;
            return dst;
        }
        if (sc == "Pattern17") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType::Pattern17;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType::ByRows;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "ByRows") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType::ByRows;
            return dst;
        }
        if (sc == "ByColumns") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType::ByColumns;
            return dst;
        }
        if (sc == "WithoutMove") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType::WithoutMove;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType::Auto;
            return dst;
        }
        if (sc == "Cut") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType::Cut;
            return dst;
        }
        if (sc == "Block") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType::Block;
            return dst;
        }
        if (sc == "Wrap") {
            dst = v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType::Wrap;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::StandardAppearance &
__read(v81c::v8_2::data::spreadsheet::StandardAppearance &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::StandardAppearance::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::None;
            return dst;
        }
        if (sc == "Stone") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Stone;
            return dst;
        }
        if (sc == "Classic") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Classic;
            return dst;
        }
        if (sc == "Classic2") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Classic2;
            return dst;
        }
        if (sc == "Classic3") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Classic3;
            return dst;
        }
        if (sc == "Spring") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Spring;
            return dst;
        }
        if (sc == "Summer") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Summer;
            return dst;
        }
        if (sc == "Autumn") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Autumn;
            return dst;
        }
        if (sc == "Winter") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Winter;
            return dst;
        }
        if (sc == "Asphalt") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Asphalt;
            return dst;
        }
        if (sc == "Copper") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Copper;
            return dst;
        }
        if (sc == "Bronze") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Bronze;
            return dst;
        }
        if (sc == "Platinum") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Platinum;
            return dst;
        }
        if (sc == "Silver") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Silver;
            return dst;
        }
        if (sc == "Turquoise") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Turquoise;
            return dst;
        }
        if (sc == "Sand") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Sand;
            return dst;
        }
        if (sc == "Grass") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Grass;
            return dst;
        }
        if (sc == "Ice") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Ice;
            return dst;
        }
        if (sc == "Orange") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Orange;
            return dst;
        }
        if (sc == "Textile") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Textile;
            return dst;
        }
        if (sc == "Wood") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Wood;
            return dst;
        }
        if (sc == "Interface") {
            dst = v81c::v8_2::data::spreadsheet::StandardAppearance::Interface;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture &
__read(v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::Left;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::Right;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::Bottom;
            return dst;
        }
        if (sc == "OnTop") {
            dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::OnTop;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::formatteddocument::FormattedDocumentFileType &
__read(v81c::v8_2::data::formatteddocument::FormattedDocumentFileType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::formatteddocument::FormattedDocumentFileType::TXT;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "TXT") {
            dst = v81c::v8_2::data::formatteddocument::FormattedDocumentFileType::TXT;
            return dst;
        }
        if (sc == "ANSITXT") {
            dst = v81c::v8_2::data::formatteddocument::FormattedDocumentFileType::ANSITXT;
            return dst;
        }
        if (sc == "HTML") {
            dst = v81c::v8_2::data::formatteddocument::FormattedDocumentFileType::HTML;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::formatteddocument::FormattedDocumentItemType &
__read(v81c::v8_2::data::formatteddocument::FormattedDocumentItemType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::formatteddocument::FormattedDocumentItemType::Text;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Text") {
            dst = v81c::v8_2::data::formatteddocument::FormattedDocumentItemType::Text;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::data::formatteddocument::FormattedDocumentItemType::Picture;
            return dst;
        }
        if (sc == "Linefeed") {
            dst = v81c::v8_2::data::formatteddocument::FormattedDocumentItemType::Linefeed;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::formatteddocument::HorizontalAlignment &
__read(v81c::v8_2::data::formatteddocument::HorizontalAlignment &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::formatteddocument::HorizontalAlignment::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_2::data::formatteddocument::HorizontalAlignment::Left;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::data::formatteddocument::HorizontalAlignment::Center;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::data::formatteddocument::HorizontalAlignment::Right;
            return dst;
        }
        if (sc == "Justify") {
            dst = v81c::v8_2::data::formatteddocument::HorizontalAlignment::Justify;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::data::formatteddocument::HorizontalAlignment::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::formatteddocument::ParagraphType &
__read(v81c::v8_2::data::formatteddocument::ParagraphType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::formatteddocument::ParagraphType::Usual;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Usual") {
            dst = v81c::v8_2::data::formatteddocument::ParagraphType::Usual;
            return dst;
        }
        if (sc == "Bulleted") {
            dst = v81c::v8_2::data::formatteddocument::ParagraphType::Bulleted;
            return dst;
        }
        if (sc == "Numbered") {
            dst = v81c::v8_2::data::formatteddocument::ParagraphType::Numbered;
            return dst;
        }
    }
    return dst;
}

v81c::v8_3::data::planner::PlannerItemsTimeRepresentation &
__read(v81c::v8_3::data::planner::PlannerItemsTimeRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_3::data::planner::PlannerItemsTimeRepresentation::DontDisplay;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontDisplay") {
            dst = v81c::v8_3::data::planner::PlannerItemsTimeRepresentation::DontDisplay;
            return dst;
        }
        if (sc == "BeginTime") {
            dst = v81c::v8_3::data::planner::PlannerItemsTimeRepresentation::BeginTime;
            return dst;
        }
        if (sc == "BeginAndEndTime") {
            dst = v81c::v8_3::data::planner::PlannerItemsTimeRepresentation::BeginAndEndTime;
            return dst;
        }
    }
    return dst;
}

v81c::v8_3::data::ext::DeliverableNotificationSubscriberType &
__read(v81c::v8_3::data::ext::DeliverableNotificationSubscriberType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_3::data::ext::DeliverableNotificationSubscriberType::APNS;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "APNS") {
            dst = v81c::v8_3::data::ext::DeliverableNotificationSubscriberType::APNS;
            return dst;
        }
        if (sc == "GCM") {
            dst = v81c::v8_3::data::ext::DeliverableNotificationSubscriberType::GCM;
            return dst;
        }
    }
    return dst;
}

v81c::v8_3::data::ext::SoundAlert &
__read(v81c::v8_3::data::ext::SoundAlert &dst, xmlpp::Node *element)
{
    dst = v81c::v8_3::data::ext::SoundAlert::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_3::data::ext::SoundAlert::None;
            return dst;
        }
        if (sc == "Default") {
            dst = v81c::v8_3::data::ext::SoundAlert::Default;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::ArrowStyle &
__read(v81c::v8_2::data::graphscheme::ArrowStyle &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::ArrowStyle::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::graphscheme::ArrowStyle::None;
            return dst;
        }
        if (sc == "Filled") {
            dst = v81c::v8_2::data::graphscheme::ArrowStyle::Filled;
            return dst;
        }
        if (sc == "Blank") {
            dst = v81c::v8_2::data::graphscheme::ArrowStyle::Blank;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::ConnectorLineType &
__read(v81c::v8_2::data::graphscheme::ConnectorLineType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::ConnectorLineType::Solid;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Solid") {
            dst = v81c::v8_2::data::graphscheme::ConnectorLineType::Solid;
            return dst;
        }
        if (sc == "Dashed") {
            dst = v81c::v8_2::data::graphscheme::ConnectorLineType::Dashed;
            return dst;
        }
        if (sc == "Dotted") {
            dst = v81c::v8_2::data::graphscheme::ConnectorLineType::Dotted;
            return dst;
        }
        if (sc == "DashDotted") {
            dst = v81c::v8_2::data::graphscheme::ConnectorLineType::DashDotted;
            return dst;
        }
        if (sc == "DashDottedDotted") {
            dst = v81c::v8_2::data::graphscheme::ConnectorLineType::DashDottedDotted;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::ConnectorTextLocation &
__read(v81c::v8_2::data::graphscheme::ConnectorTextLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::ConnectorTextLocation::FirstSegment;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "FirstSegment") {
            dst = v81c::v8_2::data::graphscheme::ConnectorTextLocation::FirstSegment;
            return dst;
        }
        if (sc == "Middle") {
            dst = v81c::v8_2::data::graphscheme::ConnectorTextLocation::Middle;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::FitPageMode &
__read(v81c::v8_2::data::graphscheme::FitPageMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::FitPageMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::data::graphscheme::FitPageMode::Auto;
            return dst;
        }
        if (sc == "PageWidth") {
            dst = v81c::v8_2::data::graphscheme::FitPageMode::PageWidth;
            return dst;
        }
        if (sc == "Proportionally") {
            dst = v81c::v8_2::data::graphscheme::FitPageMode::Proportionally;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode &
__read(v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode::None;
            return dst;
        }
        if (sc == "Dots") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode::Dots;
            return dst;
        }
        if (sc == "Chess") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode::Chess;
            return dst;
        }
        if (sc == "Lines") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode::Lines;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation &
__read(v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation::Left;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation::Left;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation::Top;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation::Right;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation::Bottom;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation::Center;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::graphscheme::GraphicalSchemaShapes &
__read(v81c::v8_2::data::graphscheme::GraphicalSchemaShapes &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::None;
            return dst;
        }
        if (sc == "File") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::File;
            return dst;
        }
        if (sc == "Folder") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::Folder;
            return dst;
        }
        if (sc == "RightArrow") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::RightArrow;
            return dst;
        }
        if (sc == "LeftRightArrow") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::LeftRightArrow;
            return dst;
        }
        if (sc == "VerticalBrackets") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::VerticalBrackets;
            return dst;
        }
        if (sc == "Document") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::Document;
            return dst;
        }
        if (sc == "Block") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::Block;
            return dst;
        }
        if (sc == "Ellipse") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::Ellipse;
            return dst;
        }
        if (sc == "LeftArrow") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::LeftArrow;
            return dst;
        }
        if (sc == "UpArrow") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::UpArrow;
            return dst;
        }
        if (sc == "DownArrow") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::DownArrow;
            return dst;
        }
        if (sc == "UpDownArrow") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::UpDownArrow;
            return dst;
        }
        if (sc == "HorizontalBrackets") {
            dst = v81c::v8_2::data::graphscheme::GraphicalSchemaShapes::HorizontalBrackets;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement::WithOwnerField;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WithOwnerField") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement::WithOwnerField;
            return dst;
        }
        if (sc == "Separately") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement::Separately;
            return dst;
        }
        if (sc == "Together") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement::Together;
            return dst;
        }
        if (sc == "SpecialPosition") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement::SpecialPosition;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement::None;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement::Left;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement::Right;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement::Bottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Equal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Equal") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Equal;
            return dst;
        }
        if (sc == "NotEqual") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotEqual;
            return dst;
        }
        if (sc == "Less") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Less;
            return dst;
        }
        if (sc == "LessOrEqual") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::LessOrEqual;
            return dst;
        }
        if (sc == "Greater") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Greater;
            return dst;
        }
        if (sc == "GreaterOrEqual") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::GreaterOrEqual;
            return dst;
        }
        if (sc == "Contains") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Contains;
            return dst;
        }
        if (sc == "InList") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::InList;
            return dst;
        }
        if (sc == "InListByHierarchy") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::InListByHierarchy;
            return dst;
        }
        if (sc == "InHierarchy") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::InHierarchy;
            return dst;
        }
        if (sc == "NotContains") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotContains;
            return dst;
        }
        if (sc == "NotInList") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotInList;
            return dst;
        }
        if (sc == "NotInListByHierarchy") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotInListByHierarchy;
            return dst;
        }
        if (sc == "NotInHierarchy") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotInHierarchy;
            return dst;
        }
        if (sc == "Filled") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Filled;
            return dst;
        }
        if (sc == "NotFilled") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotFilled;
            return dst;
        }
        if (sc == "BeginsWith") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::BeginsWith;
            return dst;
        }
        if (sc == "NotBeginsWith") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotBeginsWith;
            return dst;
        }
        if (sc == "Like") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::Like;
            return dst;
        }
        if (sc == "NotLike") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType::NotLike;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse::Use;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Use") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse::Use;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement::Auto;
            return dst;
        }
        if (sc == "Horizontally") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement::Horizontally;
            return dst;
        }
        if (sc == "Vertically") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement::Vertically;
            return dst;
        }
        if (sc == "SpecialColumn") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement::SpecialColumn;
            return dst;
        }
        if (sc == "Together") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement::Together;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType::Items;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Items") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType::Items;
            return dst;
        }
        if (sc == "Hierarchy") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType::Hierarchy;
            return dst;
        }
        if (sc == "HierarchyOnly") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType::HierarchyOnly;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType::AndGroup;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "AndGroup") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType::AndGroup;
            return dst;
        }
        if (sc == "OrGroup") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType::OrGroup;
            return dst;
        }
        if (sc == "NotGroup") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType::NotGroup;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation::Auto;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement::Together;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Together") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement::Together;
            return dst;
        }
        if (sc == "Separately") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement::Separately;
            return dst;
        }
        if (sc == "SeparatelyAndInTotalsOnly") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement::SeparatelyAndInTotalsOnly;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement::Begin;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Begin") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement::Begin;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement::End;
            return dst;
        }
        if (sc == "BeginAndEnd") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement::BeginAndEnd;
            return dst;
        }
        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement::None;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Vertical") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType::Vertical;
            return dst;
        }
        if (sc == "Horizontal") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType::Horizontal;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant::Auto;
            return dst;
        }
        if (sc == "AdditionalInformation") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant::AdditionalInformation;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition::DontUse;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition::DontUse;
            return dst;
        }
        if (sc == "AfterAllFields") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition::AfterAllFields;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement::Vertically;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Vertically") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement::Vertically;
            return dst;
        }
        if (sc == "Horizontally") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement::Horizontally;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart::Auto;
            return dst;
        }
        if (sc == "Series") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart::Series;
            return dst;
        }
        if (sc == "Points") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart::Points;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState::Enabled;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Enabled") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState::Enabled;
            return dst;
        }
        if (sc == "Disabled") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState::Disabled;
            return dst;
        }
        if (sc == "DeletedByUser") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState::DeletedByUser;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Normal") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode::Normal;
            return dst;
        }
        if (sc == "QuickAccess") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode::QuickAccess;
            return dst;
        }
        if (sc == "Inaccessible") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode::Inaccessible;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode::All;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "All") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode::All;
            return dst;
        }
        if (sc == "QuickAccess") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode::QuickAccess;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontOutput") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType::DontOutput;
            return dst;
        }
        if (sc == "Output") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType::Output;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType::Auto;
            return dst;
        }
        if (sc == "Full") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType::Full;
            return dst;
        }
        if (sc == "Short") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType::Short;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType::Items;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Items") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType::Items;
            return dst;
        }
        if (sc == "Hierarchy") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType::Hierarchy;
            return dst;
        }
        if (sc == "HierarchyOnly") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType::HierarchyOnly;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Always") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse::Always;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::None;
            return dst;
        }
        if (sc == "Year") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Year;
            return dst;
        }
        if (sc == "HalfYear") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::HalfYear;
            return dst;
        }
        if (sc == "Quarter") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Quarter;
            return dst;
        }
        if (sc == "Month") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Month;
            return dst;
        }
        if (sc == "TenDays") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::TenDays;
            return dst;
        }
        if (sc == "Week") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Week;
            return dst;
        }
        if (sc == "Day") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Day;
            return dst;
        }
        if (sc == "Hour") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Hour;
            return dst;
        }
        if (sc == "Minute") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Minute;
            return dst;
        }
        if (sc == "Second") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType::Second;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection::Asc;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Asc") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection::Asc;
            return dst;
        }
        if (sc == "Desc") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection::Desc;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType::Block;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Block") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType::Block;
            return dst;
        }
        if (sc == "Cut") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType::Cut;
            return dst;
        }
        if (sc == "Wrap") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType::Wrap;
            return dst;
        }
        if (sc == "Overflow") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType::Overflow;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Begin") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement::Begin;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement::End;
            return dst;
        }
        if (sc == "BeginAndEnd") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement::BeginAndEnd;
            return dst;
        }
        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement::None;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction &
__read(v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::None;
            return dst;
        }
        if (sc == "DrillDown") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::DrillDown;
            return dst;
        }
        if (sc == "Filter") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::Filter;
            return dst;
        }
        if (sc == "Order") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::Order;
            return dst;
        }
        if (sc == "Group") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::Group;
            return dst;
        }
        if (sc == "OpenValue") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::OpenValue;
            return dst;
        }
        if (sc == "ApplyAppearance") {
            dst = v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction::ApplyAppearance;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings &
__read(v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings::DontUse;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings::DontUse;
            return dst;
        }
        if (sc == "Use") {
            dst = v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings::Use;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::BWAValue &
__read(v81c::v8_2::managedapplication::logform::BWAValue &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::BWAValue::_auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "true") {
            dst = v81c::v8_2::managedapplication::logform::BWAValue::_true;
            return dst;
        }
        if (sc == "false") {
            dst = v81c::v8_2::managedapplication::logform::BWAValue::_false;
            return dst;
        }
        if (sc == "auto") {
            dst = v81c::v8_2::managedapplication::logform::BWAValue::_auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ButtonRepresentation &
__read(v81c::v8_2::managedapplication::logform::ButtonRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ButtonRepresentation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Text") {
            dst = v81c::v8_2::managedapplication::logform::ButtonRepresentation::Text;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::managedapplication::logform::ButtonRepresentation::Picture;
            return dst;
        }
        if (sc == "PictureAndText") {
            dst = v81c::v8_2::managedapplication::logform::ButtonRepresentation::PictureAndText;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ButtonRepresentation::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::CheckBoxType &
__read(v81c::v8_2::managedapplication::logform::CheckBoxType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::CheckBoxType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::CheckBoxType::Auto;
            return dst;
        }
        if (sc == "CheckBox") {
            dst = v81c::v8_2::managedapplication::logform::CheckBoxType::CheckBox;
            return dst;
        }
        if (sc == "Tumbler") {
            dst = v81c::v8_2::managedapplication::logform::CheckBoxType::Tumbler;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation &
__read(v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation::Auto;
            return dst;
        }
        if (sc == "ShowInDropList") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation::ShowInDropList;
            return dst;
        }
        if (sc == "ShowInDropListAndInInputField") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation::ShowInDropListAndInInputField;
            return dst;
        }
        if (sc == "ShowInInputField") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation::ShowInInputField;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString &
__read(v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString::Directly;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Directly") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString::Directly;
            return dst;
        }
        if (sc == "Background") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString::Background;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput &
__read(v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput::Auto;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ColumnsGroup &
__read(v81c::v8_2::managedapplication::logform::ColumnsGroup &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ColumnsGroup::Horizontal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Horizontal") {
            dst = v81c::v8_2::managedapplication::logform::ColumnsGroup::Horizontal;
            return dst;
        }
        if (sc == "Vertical") {
            dst = v81c::v8_2::managedapplication::logform::ColumnsGroup::Vertical;
            return dst;
        }
        if (sc == "InCell") {
            dst = v81c::v8_2::managedapplication::logform::ColumnsGroup::InCell;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::CurrentRowUse &
__read(v81c::v8_2::managedapplication::logform::CurrentRowUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::CurrentRowUse::Use;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Use") {
            dst = v81c::v8_2::managedapplication::logform::CurrentRowUse::Use;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::CurrentRowUse::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::EditTextUpdate &
__read(v81c::v8_2::managedapplication::logform::EditTextUpdate &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::EditTextUpdate::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::EditTextUpdate::Auto;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::EditTextUpdate::DontUse;
            return dst;
        }
        if (sc == "OnValueChange") {
            dst = v81c::v8_2::managedapplication::logform::EditTextUpdate::OnValueChange;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FoldersAndItems &
__read(v81c::v8_2::managedapplication::logform::FoldersAndItems &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FoldersAndItems::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Items") {
            dst = v81c::v8_2::managedapplication::logform::FoldersAndItems::Items;
            return dst;
        }
        if (sc == "Folders") {
            dst = v81c::v8_2::managedapplication::logform::FoldersAndItems::Folders;
            return dst;
        }
        if (sc == "FoldersAndItems") {
            dst = v81c::v8_2::managedapplication::logform::FoldersAndItems::FoldersAndItems;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::FoldersAndItems::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormBaseFontVariant &
__read(v81c::v8_2::managedapplication::logform::FormBaseFontVariant &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormBaseFontVariant::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::FormBaseFontVariant::Auto;
            return dst;
        }
        if (sc == "Normal") {
            dst = v81c::v8_2::managedapplication::logform::FormBaseFontVariant::Normal;
            return dst;
        }
        if (sc == "Compact") {
            dst = v81c::v8_2::managedapplication::logform::FormBaseFontVariant::Compact;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormChildrenGroup &
__read(v81c::v8_2::managedapplication::logform::FormChildrenGroup &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormChildrenGroup::Horizontal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Horizontal") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenGroup::Horizontal;
            return dst;
        }
        if (sc == "Vertical") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenGroup::Vertical;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormChildrenWidth &
__read(v81c::v8_2::managedapplication::logform::FormChildrenWidth &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::Auto;
            return dst;
        }
        if (sc == "Equal") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::Equal;
            return dst;
        }
        if (sc == "LeftWide") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::LeftWide;
            return dst;
        }
        if (sc == "LeftWidest") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::LeftWidest;
            return dst;
        }
        if (sc == "LeftNarrow") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::LeftNarrow;
            return dst;
        }
        if (sc == "LeftNarrowest") {
            dst = v81c::v8_2::managedapplication::logform::FormChildrenWidth::LeftNarrowest;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormDateSelectionMode &
__read(v81c::v8_2::managedapplication::logform::FormDateSelectionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormDateSelectionMode::Single;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Single") {
            dst = v81c::v8_2::managedapplication::logform::FormDateSelectionMode::Single;
            return dst;
        }
        if (sc == "Multiple") {
            dst = v81c::v8_2::managedapplication::logform::FormDateSelectionMode::Multiple;
            return dst;
        }
        if (sc == "Interval") {
            dst = v81c::v8_2::managedapplication::logform::FormDateSelectionMode::Interval;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation &
__read(v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation::None;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation::Auto;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation::Bottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormElementOrientation &
__read(v81c::v8_2::managedapplication::logform::FormElementOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormElementOrientation::Horizontal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Horizontal") {
            dst = v81c::v8_2::managedapplication::logform::FormElementOrientation::Horizontal;
            return dst;
        }
        if (sc == "Vertical") {
            dst = v81c::v8_2::managedapplication::logform::FormElementOrientation::Vertical;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormElementOrigin &
__read(v81c::v8_2::managedapplication::logform::FormElementOrigin &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormElementOrigin::Source;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Source") {
            dst = v81c::v8_2::managedapplication::logform::FormElementOrigin::Source;
            return dst;
        }
        if (sc == "AutoGenerated") {
            dst = v81c::v8_2::managedapplication::logform::FormElementOrigin::AutoGenerated;
            return dst;
        }
        if (sc == "AddedFromContext") {
            dst = v81c::v8_2::managedapplication::logform::FormElementOrigin::AddedFromContext;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormElementTitleLocation &
__read(v81c::v8_2::managedapplication::logform::FormElementTitleLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::None;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::Auto;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::Left;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::Top;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::Right;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::FormElementTitleLocation::Bottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior &
__read(v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior::ControlNavigation;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "ControlNavigation") {
            dst = v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior::ControlNavigation;
            return dst;
        }
        if (sc == "DefaultButton") {
            dst = v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior::DefaultButton;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormFixedInTable &
__read(v81c::v8_2::managedapplication::logform::FormFixedInTable &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormFixedInTable::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::FormFixedInTable::None;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_2::managedapplication::logform::FormFixedInTable::Left;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::managedapplication::logform::FormFixedInTable::Right;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormPagesRepresentation &
__read(v81c::v8_2::managedapplication::logform::FormPagesRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::None;
            return dst;
        }
        if (sc == "TabsOnTop") {
            dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::TabsOnTop;
            return dst;
        }
        if (sc == "TabsOnBottom") {
            dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::TabsOnBottom;
            return dst;
        }
        if (sc == "TabsOnLeftHorizontal") {
            dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::TabsOnLeftHorizontal;
            return dst;
        }
        if (sc == "TabsOnRightHorizontal") {
            dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::TabsOnRightHorizontal;
            return dst;
        }
        if (sc == "Swipe") {
            dst = v81c::v8_2::managedapplication::logform::FormPagesRepresentation::Swipe;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation &
__read(v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation::Smooth;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Smooth") {
            dst = v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation::Smooth;
            return dst;
        }
        if (sc == "Broken") {
            dst = v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation::Broken;
            return dst;
        }
        if (sc == "BrokenTilt") {
            dst = v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation::BrokenTilt;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FormWindowOpeningMode &
__read(v81c::v8_2::managedapplication::logform::FormWindowOpeningMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FormWindowOpeningMode::Independent;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Independent") {
            dst = v81c::v8_2::managedapplication::logform::FormWindowOpeningMode::Independent;
            return dst;
        }
        if (sc == "LockOwnerWindow") {
            dst = v81c::v8_2::managedapplication::logform::FormWindowOpeningMode::LockOwnerWindow;
            return dst;
        }
        if (sc == "LockWholeInterface") {
            dst = v81c::v8_2::managedapplication::logform::FormWindowOpeningMode::LockWholeInterface;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString &
__read(v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString::Use;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Use") {
            dst = v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString::Use;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString::DontUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode &
__read(v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode::OnEnterPressed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "OnEnterPressed") {
            dst = v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode::OnEnterPressed;
            return dst;
        }
        if (sc == "OnActivate") {
            dst = v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode::OnActivate;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment &
__read(v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment::Left;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment::Center;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment::Right;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ItemVerticalAlignment &
__read(v81c::v8_2::managedapplication::logform::ItemVerticalAlignment &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ItemVerticalAlignment::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::ItemVerticalAlignment::Top;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::managedapplication::logform::ItemVerticalAlignment::Center;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::ItemVerticalAlignment::Bottom;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ItemVerticalAlignment::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind &
__read(v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind::SearchStringRepresentation;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "SearchStringRepresentation") {
            dst = v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind::SearchStringRepresentation;
            return dst;
        }
        if (sc == "ViewStatusRepresentation") {
            dst = v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind::ViewStatusRepresentation;
            return dst;
        }
        if (sc == "SearchControl") {
            dst = v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind::SearchControl;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::LogFormScrollMode &
__read(v81c::v8_2::managedapplication::logform::LogFormScrollMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::LogFormScrollMode::_auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "auto") {
            dst = v81c::v8_2::managedapplication::logform::LogFormScrollMode::_auto;
            return dst;
        }
        if (sc == "use") {
            dst = v81c::v8_2::managedapplication::logform::LogFormScrollMode::use;
            return dst;
        }
        if (sc == "useIfNecessary") {
            dst = v81c::v8_2::managedapplication::logform::LogFormScrollMode::useIfNecessary;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ManagedFormButtonType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormButtonType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ManagedFormButtonType::CommandBarButton;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "CommandBarButton") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormButtonType::CommandBarButton;
            return dst;
        }
        if (sc == "UsualButton") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormButtonType::UsualButton;
            return dst;
        }
        if (sc == "Hyperlink") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormButtonType::Hyperlink;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ManagedFormDecorationType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormDecorationType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ManagedFormDecorationType::Label;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Label") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormDecorationType::Label;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormDecorationType::Picture;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ManagedFormFieldType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormFieldType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::Default;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Default") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::Default;
            return dst;
        }
        if (sc == "LabelField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::LabelField;
            return dst;
        }
        if (sc == "InputField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::InputField;
            return dst;
        }
        if (sc == "CheckBoxField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::CheckBoxField;
            return dst;
        }
        if (sc == "PictureField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::PictureField;
            return dst;
        }
        if (sc == "RadioButtonField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::RadioButtonField;
            return dst;
        }
        if (sc == "SpreadsheetDocumentField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::SpreadsheetDocumentField;
            return dst;
        }
        if (sc == "TextDocumentField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::TextDocumentField;
            return dst;
        }
        if (sc == "FormattedDocumentField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::FormattedDocumentField;
            return dst;
        }
        if (sc == "PlannerField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::PlannerField;
            return dst;
        }
        if (sc == "CalendarField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::CalendarField;
            return dst;
        }
        if (sc == "PeriodField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::PeriodField;
            return dst;
        }
        if (sc == "ProgressBarField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::ProgressBarField;
            return dst;
        }
        if (sc == "TrackBarField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::TrackBarField;
            return dst;
        }
        if (sc == "ChartField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::ChartField;
            return dst;
        }
        if (sc == "GanttChartField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::GanttChartField;
            return dst;
        }
        if (sc == "DendrogramField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::DendrogramField;
            return dst;
        }
        if (sc == "GraphicalSchemaField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::GraphicalSchemaField;
            return dst;
        }
        if (sc == "HTMLDocumentField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::HTMLDocumentField;
            return dst;
        }
        if (sc == "GeographicalSchemaField") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormFieldType::GeographicalSchemaField;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ManagedFormGroupType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormGroupType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::CommandBar;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "CommandBar") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::CommandBar;
            return dst;
        }
        if (sc == "Popup") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::Popup;
            return dst;
        }
        if (sc == "ColumnGroup") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::ColumnGroup;
            return dst;
        }
        if (sc == "Pages") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::Pages;
            return dst;
        }
        if (sc == "Page") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::Page;
            return dst;
        }
        if (sc == "UsualGroup") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::UsualGroup;
            return dst;
        }
        if (sc == "ButtonGroup") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::ButtonGroup;
            return dst;
        }
        if (sc == "ContextMenu") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::ContextMenu;
            return dst;
        }
        if (sc == "AutoCommandBar") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::AutoCommandBar;
            return dst;
        }
        if (sc == "Navigator") {
            dst = v81c::v8_2::managedapplication::logform::ManagedFormGroupType::Navigator;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::MarkingStyle &
__read(v81c::v8_2::managedapplication::logform::MarkingStyle &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::MarkingStyle::DontShow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontShow") {
            dst = v81c::v8_2::managedapplication::logform::MarkingStyle::DontShow;
            return dst;
        }
        if (sc == "TopLeft") {
            dst = v81c::v8_2::managedapplication::logform::MarkingStyle::TopLeft;
            return dst;
        }
        if (sc == "BottomRight") {
            dst = v81c::v8_2::managedapplication::logform::MarkingStyle::BottomRight;
            return dst;
        }
        if (sc == "BothSides") {
            dst = v81c::v8_2::managedapplication::logform::MarkingStyle::BothSides;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::MenuElementPlacementArea &
__read(v81c::v8_2::managedapplication::logform::MenuElementPlacementArea &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::MenuElementPlacementArea::mainCmdsLeft;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "mainCmdsLeft") {
            dst = v81c::v8_2::managedapplication::logform::MenuElementPlacementArea::mainCmdsLeft;
            return dst;
        }
        if (sc == "autoCmds") {
            dst = v81c::v8_2::managedapplication::logform::MenuElementPlacementArea::autoCmds;
            return dst;
        }
        if (sc == "userCmds") {
            dst = v81c::v8_2::managedapplication::logform::MenuElementPlacementArea::userCmds;
            return dst;
        }
        if (sc == "mainCmdsRight") {
            dst = v81c::v8_2::managedapplication::logform::MenuElementPlacementArea::mainCmdsRight;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::PictureSize &
__read(v81c::v8_2::managedapplication::logform::PictureSize &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::PictureSize::RealSize;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "RealSize") {
            dst = v81c::v8_2::managedapplication::logform::PictureSize::RealSize;
            return dst;
        }
        if (sc == "Stretch") {
            dst = v81c::v8_2::managedapplication::logform::PictureSize::Stretch;
            return dst;
        }
        if (sc == "Proportionally") {
            dst = v81c::v8_2::managedapplication::logform::PictureSize::Proportionally;
            return dst;
        }
        if (sc == "Tile") {
            dst = v81c::v8_2::managedapplication::logform::PictureSize::Tile;
            return dst;
        }
        if (sc == "AutoSize") {
            dst = v81c::v8_2::managedapplication::logform::PictureSize::AutoSize;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::RadioButtonType &
__read(v81c::v8_2::managedapplication::logform::RadioButtonType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::RadioButtonType::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::RadioButtonType::Auto;
            return dst;
        }
        if (sc == "RadioButtons") {
            dst = v81c::v8_2::managedapplication::logform::RadioButtonType::RadioButtons;
            return dst;
        }
        if (sc == "Tumbler") {
            dst = v81c::v8_2::managedapplication::logform::RadioButtonType::Tumbler;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::RefreshRequestMethod &
__read(v81c::v8_2::managedapplication::logform::RefreshRequestMethod &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::RefreshRequestMethod::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::RefreshRequestMethod::None;
            return dst;
        }
        if (sc == "PullFromTop") {
            dst = v81c::v8_2::managedapplication::logform::RefreshRequestMethod::PullFromTop;
            return dst;
        }
        if (sc == "PullFromBottom") {
            dst = v81c::v8_2::managedapplication::logform::RefreshRequestMethod::PullFromBottom;
            return dst;
        }
        if (sc == "PullFromTopOrBottom") {
            dst = v81c::v8_2::managedapplication::logform::RefreshRequestMethod::PullFromTopOrBottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ReportFormType &
__read(v81c::v8_2::managedapplication::logform::ReportFormType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ReportFormType::Main;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Main") {
            dst = v81c::v8_2::managedapplication::logform::ReportFormType::Main;
            return dst;
        }
        if (sc == "Settings") {
            dst = v81c::v8_2::managedapplication::logform::ReportFormType::Settings;
            return dst;
        }
        if (sc == "Variant") {
            dst = v81c::v8_2::managedapplication::logform::ReportFormType::Variant;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::RepresentationInContextMenu &
__read(v81c::v8_2::managedapplication::logform::RepresentationInContextMenu &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::RepresentationInContextMenu::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::RepresentationInContextMenu::None;
            return dst;
        }
        if (sc == "AdditionalInContextMenu") {
            dst = v81c::v8_2::managedapplication::logform::RepresentationInContextMenu::AdditionalInContextMenu;
            return dst;
        }
        if (sc == "OnlyInContextMenu") {
            dst = v81c::v8_2::managedapplication::logform::RepresentationInContextMenu::OnlyInContextMenu;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::RepresentationInContextMenu::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::SaveFormDataInSettings &
__read(v81c::v8_2::managedapplication::logform::SaveFormDataInSettings &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::SaveFormDataInSettings::DontUse;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::SaveFormDataInSettings::DontUse;
            return dst;
        }
        if (sc == "UseList") {
            dst = v81c::v8_2::managedapplication::logform::SaveFormDataInSettings::UseList;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::SearchControlLocation &
__read(v81c::v8_2::managedapplication::logform::SearchControlLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::SearchControlLocation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::SearchControlLocation::Auto;
            return dst;
        }
        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::SearchControlLocation::None;
            return dst;
        }
        if (sc == "CommandBar") {
            dst = v81c::v8_2::managedapplication::logform::SearchControlLocation::CommandBar;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::SearchOnInput &
__read(v81c::v8_2::managedapplication::logform::SearchOnInput &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::SearchOnInput::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Use") {
            dst = v81c::v8_2::managedapplication::logform::SearchOnInput::Use;
            return dst;
        }
        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::SearchOnInput::DontUse;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::SearchOnInput::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::SearchStringLocation &
__read(v81c::v8_2::managedapplication::logform::SearchStringLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::SearchStringLocation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringLocation::Auto;
            return dst;
        }
        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringLocation::None;
            return dst;
        }
        if (sc == "CommandBar") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringLocation::CommandBar;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringLocation::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringLocation::Bottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString &
__read(v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString::Begin;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Begin") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString::Begin;
            return dst;
        }
        if (sc == "AnyPart") {
            dst = v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString::AnyPart;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::SelectionShowMode &
__read(v81c::v8_2::managedapplication::logform::SelectionShowMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::SelectionShowMode::WhenActive;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WhenActive") {
            dst = v81c::v8_2::managedapplication::logform::SelectionShowMode::WhenActive;
            return dst;
        }
        if (sc == "Always") {
            dst = v81c::v8_2::managedapplication::logform::SelectionShowMode::Always;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableFieldEditMode &
__read(v81c::v8_2::managedapplication::logform::TableFieldEditMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableFieldEditMode::Directly;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Directly") {
            dst = v81c::v8_2::managedapplication::logform::TableFieldEditMode::Directly;
            return dst;
        }
        if (sc == "Enter") {
            dst = v81c::v8_2::managedapplication::logform::TableFieldEditMode::Enter;
            return dst;
        }
        if (sc == "EnterOnInput") {
            dst = v81c::v8_2::managedapplication::logform::TableFieldEditMode::EnterOnInput;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableInitialListView &
__read(v81c::v8_2::managedapplication::logform::TableInitialListView &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableInitialListView::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Beginning") {
            dst = v81c::v8_2::managedapplication::logform::TableInitialListView::Beginning;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_2::managedapplication::logform::TableInitialListView::End;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::TableInitialListView::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableInitialTreeView &
__read(v81c::v8_2::managedapplication::logform::TableInitialTreeView &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableInitialTreeView::NoExpand;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NoExpand") {
            dst = v81c::v8_2::managedapplication::logform::TableInitialTreeView::NoExpand;
            return dst;
        }
        if (sc == "ExpandTopLevel") {
            dst = v81c::v8_2::managedapplication::logform::TableInitialTreeView::ExpandTopLevel;
            return dst;
        }
        if (sc == "ExpandAllLevels") {
            dst = v81c::v8_2::managedapplication::logform::TableInitialTreeView::ExpandAllLevels;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableRepresentation &
__read(v81c::v8_2::managedapplication::logform::TableRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableRepresentation::List;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "List") {
            dst = v81c::v8_2::managedapplication::logform::TableRepresentation::List;
            return dst;
        }
        if (sc == "HierarchicalList") {
            dst = v81c::v8_2::managedapplication::logform::TableRepresentation::HierarchicalList;
            return dst;
        }
        if (sc == "Tree") {
            dst = v81c::v8_2::managedapplication::logform::TableRepresentation::Tree;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableRowInputMode &
__read(v81c::v8_2::managedapplication::logform::TableRowInputMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableRowInputMode::EndOfList;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "EndOfList") {
            dst = v81c::v8_2::managedapplication::logform::TableRowInputMode::EndOfList;
            return dst;
        }
        if (sc == "EndOfWindow") {
            dst = v81c::v8_2::managedapplication::logform::TableRowInputMode::EndOfWindow;
            return dst;
        }
        if (sc == "AfterCurrentRow") {
            dst = v81c::v8_2::managedapplication::logform::TableRowInputMode::AfterCurrentRow;
            return dst;
        }
        if (sc == "BeforeCurrentRow") {
            dst = v81c::v8_2::managedapplication::logform::TableRowInputMode::BeforeCurrentRow;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableRowSelectionMode &
__read(v81c::v8_2::managedapplication::logform::TableRowSelectionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableRowSelectionMode::Cell;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Cell") {
            dst = v81c::v8_2::managedapplication::logform::TableRowSelectionMode::Cell;
            return dst;
        }
        if (sc == "Row") {
            dst = v81c::v8_2::managedapplication::logform::TableRowSelectionMode::Row;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableScrollBarUse &
__read(v81c::v8_2::managedapplication::logform::TableScrollBarUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableScrollBarUse::DontUse;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::TableScrollBarUse::DontUse;
            return dst;
        }
        if (sc == "UseAlways") {
            dst = v81c::v8_2::managedapplication::logform::TableScrollBarUse::UseAlways;
            return dst;
        }
        if (sc == "AutoUse") {
            dst = v81c::v8_2::managedapplication::logform::TableScrollBarUse::AutoUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TableSelectionMode &
__read(v81c::v8_2::managedapplication::logform::TableSelectionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TableSelectionMode::SingleRow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "SingleRow") {
            dst = v81c::v8_2::managedapplication::logform::TableSelectionMode::SingleRow;
            return dst;
        }
        if (sc == "MultiRow") {
            dst = v81c::v8_2::managedapplication::logform::TableSelectionMode::MultiRow;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::TooltipRepresentation &
__read(v81c::v8_2::managedapplication::logform::TooltipRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::Auto;
            return dst;
        }
        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::None;
            return dst;
        }
        if (sc == "Balloon") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::Balloon;
            return dst;
        }
        if (sc == "Button") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::Button;
            return dst;
        }
        if (sc == "ShowAuto") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::ShowAuto;
            return dst;
        }
        if (sc == "ShowTop") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::ShowTop;
            return dst;
        }
        if (sc == "ShowLeft") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::ShowLeft;
            return dst;
        }
        if (sc == "ShowBottom") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::ShowBottom;
            return dst;
        }
        if (sc == "ShowRight") {
            dst = v81c::v8_2::managedapplication::logform::TooltipRepresentation::ShowRight;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::UsualGroupBehavior &
__read(v81c::v8_2::managedapplication::logform::UsualGroupBehavior &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::UsualGroupBehavior::Usual;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Usual") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupBehavior::Usual;
            return dst;
        }
        if (sc == "Collapsible") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupBehavior::Collapsible;
            return dst;
        }
        if (sc == "Ballon") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupBehavior::Ballon;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation &
__read(v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation::TitleHyperlink;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "TitleHyperlink") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation::TitleHyperlink;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation::Picture;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::UsualGroupRepresentation &
__read(v81c::v8_2::managedapplication::logform::UsualGroupRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::None;
            return dst;
        }
        if (sc == "StrongSeparation") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::StrongSeparation;
            return dst;
        }
        if (sc == "WeakSeparation") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::WeakSeparation;
            return dst;
        }
        if (sc == "NormalSeparation") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::NormalSeparation;
            return dst;
        }
        if (sc == "GroupBox") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::GroupBox;
            return dst;
        }
        if (sc == "Line") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::Line;
            return dst;
        }
        if (sc == "Margin") {
            dst = v81c::v8_2::managedapplication::logform::UsualGroupRepresentation::Margin;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::VerticalAlign &
__read(v81c::v8_2::managedapplication::logform::VerticalAlign &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::VerticalAlign::Top;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::VerticalAlign::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::VerticalAlign::Bottom;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::managedapplication::logform::VerticalAlign::Center;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ViewScalingMode &
__read(v81c::v8_2::managedapplication::logform::ViewScalingMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ViewScalingMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ViewScalingMode::Auto;
            return dst;
        }
        if (sc == "Normal") {
            dst = v81c::v8_2::managedapplication::logform::ViewScalingMode::Normal;
            return dst;
        }
        if (sc == "Large") {
            dst = v81c::v8_2::managedapplication::logform::ViewScalingMode::Large;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::ViewStatusLocation &
__read(v81c::v8_2::managedapplication::logform::ViewStatusLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::ViewStatusLocation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::ViewStatusLocation::Auto;
            return dst;
        }
        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::ViewStatusLocation::None;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::ViewStatusLocation::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::ViewStatusLocation::Bottom;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation &
__read(v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Show") {
            dst = v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation::Show;
            return dst;
        }
        if (sc == "DontShow") {
            dst = v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation::DontShow;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::Alias &
__read(v81c::v8_2::managedapplication::core::Alias &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::Alias::en;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "en") {
            dst = v81c::v8_2::managedapplication::core::Alias::en;
            return dst;
        }
        if (sc == "ru") {
            dst = v81c::v8_2::managedapplication::core::Alias::ru;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::ApplicationUsePurpose &
__read(v81c::v8_2::managedapplication::core::ApplicationUsePurpose &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::ApplicationUsePurpose::PersonalComputer;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "PersonalComputer") {
            dst = v81c::v8_2::managedapplication::core::ApplicationUsePurpose::PersonalComputer;
            return dst;
        }
        if (sc == "MobileDevice") {
            dst = v81c::v8_2::managedapplication::core::ApplicationUsePurpose::MobileDevice;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::ClientRunMode &
__read(v81c::v8_2::managedapplication::core::ClientRunMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::ClientRunMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::core::ClientRunMode::Auto;
            return dst;
        }
        if (sc == "ManagedApplication") {
            dst = v81c::v8_2::managedapplication::core::ClientRunMode::ManagedApplication;
            return dst;
        }
        if (sc == "OrdinaryApplication") {
            dst = v81c::v8_2::managedapplication::core::ClientRunMode::OrdinaryApplication;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::CommandGroupCategory &
__read(v81c::v8_2::managedapplication::core::CommandGroupCategory &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::CommandGroupCategory::NavigationPanel;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NavigationPanel") {
            dst = v81c::v8_2::managedapplication::core::CommandGroupCategory::NavigationPanel;
            return dst;
        }
        if (sc == "ActionsPanel") {
            dst = v81c::v8_2::managedapplication::core::CommandGroupCategory::ActionsPanel;
            return dst;
        }
        if (sc == "FormNavigationPanel") {
            dst = v81c::v8_2::managedapplication::core::CommandGroupCategory::FormNavigationPanel;
            return dst;
        }
        if (sc == "FormCommandBar") {
            dst = v81c::v8_2::managedapplication::core::CommandGroupCategory::FormCommandBar;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions &
__read(v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::Multimedia;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Multimedia") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::Multimedia;
            return dst;
        }
        if (sc == "Location") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::Location;
            return dst;
        }
        if (sc == "Contacts") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::Contacts;
            return dst;
        }
        if (sc == "Calendars") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::Calendars;
            return dst;
        }
        if (sc == "Telephony") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::Telephony;
            return dst;
        }
        if (sc == "PushNotification") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::PushNotification;
            return dst;
        }
        if (sc == "LocalNotification") {
            dst = v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions::LocalNotification;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::SectionPanelRepresentation &
__read(v81c::v8_2::managedapplication::core::SectionPanelRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::SectionPanelRepresentation::Picture;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Picture") {
            dst = v81c::v8_2::managedapplication::core::SectionPanelRepresentation::Picture;
            return dst;
        }
        if (sc == "PictureAndText") {
            dst = v81c::v8_2::managedapplication::core::SectionPanelRepresentation::PictureAndText;
            return dst;
        }
        if (sc == "Text") {
            dst = v81c::v8_2::managedapplication::core::SectionPanelRepresentation::Text;
            return dst;
        }
        if (sc == "PictureOnTopAndText") {
            dst = v81c::v8_2::managedapplication::core::SectionPanelRepresentation::PictureOnTopAndText;
            return dst;
        }
        if (sc == "PictureOnLeftAndText") {
            dst = v81c::v8_2::managedapplication::core::SectionPanelRepresentation::PictureOnLeftAndText;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::core::StyleEntryKind &
__read(v81c::v8_2::managedapplication::core::StyleEntryKind &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::core::StyleEntryKind::color;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "color") {
            dst = v81c::v8_2::managedapplication::core::StyleEntryKind::color;
            return dst;
        }
        if (sc == "font") {
            dst = v81c::v8_2::managedapplication::core::StyleEntryKind::font;
            return dst;
        }
        if (sc == "border") {
            dst = v81c::v8_2::managedapplication::core::StyleEntryKind::border;
            return dst;
        }
        if (sc == "line") {
            dst = v81c::v8_2::managedapplication::core::StyleEntryKind::line;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::uobjects::AccessMode &
__read(v81c::v8_2::uobjects::AccessMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::uobjects::AccessMode::rw;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "rw") {
            dst = v81c::v8_2::uobjects::AccessMode::rw;
            return dst;
        }
        if (sc == "r") {
            dst = v81c::v8_2::uobjects::AccessMode::r;
            return dst;
        }
        if (sc == "none") {
            dst = v81c::v8_2::uobjects::AccessMode::none;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::cmi::CommandParameterUseMode &
__read(v81c::v8_2::managedapplication::cmi::CommandParameterUseMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::cmi::CommandParameterUseMode::Single;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Single") {
            dst = v81c::v8_2::managedapplication::cmi::CommandParameterUseMode::Single;
            return dst;
        }
        if (sc == "Multiple") {
            dst = v81c::v8_2::managedapplication::cmi::CommandParameterUseMode::Multiple;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::cmi::FuncMenuGroupType &
__read(v81c::v8_2::managedapplication::cmi::FuncMenuGroupType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::Simple;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Simple") {
            dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::Simple;
            return dst;
        }
        if (sc == "SubSystem") {
            dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::SubSystem;
            return dst;
        }
        if (sc == "Section") {
            dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::Section;
            return dst;
        }
        if (sc == "Group") {
            dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::Group;
            return dst;
        }
        if (sc == "Actions") {
            dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::Actions;
            return dst;
        }
        if (sc == "SeeAlso") {
            dst = v81c::v8_2::managedapplication::cmi::FuncMenuGroupType::SeeAlso;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::cmi::GroupCategory &
__read(v81c::v8_2::managedapplication::cmi::GroupCategory &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::cmi::GroupCategory::undefined;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "undefined") {
            dst = v81c::v8_2::managedapplication::cmi::GroupCategory::undefined;
            return dst;
        }
        if (sc == "navigator") {
            dst = v81c::v8_2::managedapplication::cmi::GroupCategory::navigator;
            return dst;
        }
        if (sc == "form") {
            dst = v81c::v8_2::managedapplication::cmi::GroupCategory::form;
            return dst;
        }
        if (sc == "panel") {
            dst = v81c::v8_2::managedapplication::cmi::GroupCategory::panel;
            return dst;
        }
        if (sc == "toolbar") {
            dst = v81c::v8_2::managedapplication::cmi::GroupCategory::toolbar;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::modules::ParamDirection &
__read(v81c::v8_2::managedapplication::modules::ParamDirection &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::modules::ParamDirection::InOut;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "InOut") {
            dst = v81c::v8_2::managedapplication::modules::ParamDirection::InOut;
            return dst;
        }
        if (sc == "In") {
            dst = v81c::v8_2::managedapplication::modules::ParamDirection::In;
            return dst;
        }
        if (sc == "Out") {
            dst = v81c::v8_2::managedapplication::modules::ParamDirection::Out;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::BWDValue &
__read(v81c::v8_2::managedapplication::logform::layouter::BWDValue &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::BWDValue::_auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "true") {
            dst = v81c::v8_2::managedapplication::logform::layouter::BWDValue::_true;
            return dst;
        }
        if (sc == "false") {
            dst = v81c::v8_2::managedapplication::logform::layouter::BWDValue::_false;
            return dst;
        }
        if (sc == "auto") {
            dst = v81c::v8_2::managedapplication::logform::layouter::BWDValue::_auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation &
__read(v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation::Left;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation::Left;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation::Right;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation::Auto;
            return dst;
        }
        if (sc == "ShowInDropList") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation::ShowInDropList;
            return dst;
        }
        if (sc == "ShowInDropListAndInInputField") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation::ShowInDropListAndInInputField;
            return dst;
        }
        if (sc == "ShowInInputField") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation::ShowInInputField;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects &
__read(v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects::Items;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Items") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects::Items;
            return dst;
        }
        if (sc == "Folders") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects::Folders;
            return dst;
        }
        if (sc == "FoldersAndItems") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects::FoldersAndItems;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ColumnMode &
__read(v81c::v8_2::managedapplication::logform::layouter::ColumnMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ColumnMode::Text;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Text") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnMode::Text;
            return dst;
        }
        if (sc == "Input") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnMode::Input;
            return dst;
        }
        if (sc == "Check") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnMode::Check;
            return dst;
        }
        if (sc == "Image") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnMode::Image;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup &
__read(v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup::Horizontal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Horizontal") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup::Horizontal;
            return dst;
        }
        if (sc == "Vertical") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup::Vertical;
            return dst;
        }
        if (sc == "InCell") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup::InCell;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ControlCategory &
__read(v81c::v8_2::managedapplication::logform::layouter::ControlCategory &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::Prim;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Prim") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::Prim;
            return dst;
        }
        if (sc == "Sec") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::Sec;
            return dst;
        }
        if (sc == "Ttl") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::Ttl;
            return dst;
        }
        if (sc == "ExTlp") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::ExTlp;
            return dst;
        }
        if (sc == "GrpTtl") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::GrpTtl;
            return dst;
        }
        if (sc == "Clp") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::Clp;
            return dst;
        }
        if (sc == "SearchStringRepresentation") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::SearchStringRepresentation;
            return dst;
        }
        if (sc == "ViewStatusRepresentation") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::ViewStatusRepresentation;
            return dst;
        }
        if (sc == "SearchControl") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ControlCategory::SearchControl;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::Direction &
__read(v81c::v8_2::managedapplication::logform::layouter::Direction &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::Direction::Hor;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Hor") {
            dst = v81c::v8_2::managedapplication::logform::layouter::Direction::Hor;
            return dst;
        }
        if (sc == "Ver") {
            dst = v81c::v8_2::managedapplication::logform::layouter::Direction::Ver;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode &
__read(v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::None;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::Bottom;
            return dst;
        }
        if (sc == "Left") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::Left;
            return dst;
        }
        if (sc == "SmallRight") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::SmallRight;
            return dst;
        }
        if (sc == "BigRight") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode::BigRight;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode &
__read(v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode::Single;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Single") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode::Single;
            return dst;
        }
        if (sc == "Multiple") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode::Multiple;
            return dst;
        }
        if (sc == "Interval") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode::Interval;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation &
__read(v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation::Horizontal;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Horizontal") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation::Horizontal;
            return dst;
        }
        if (sc == "Vertical") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation::Vertical;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior &
__read(v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior::ControlNavigation;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "ControlNavigation") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior::ControlNavigation;
            return dst;
        }
        if (sc == "DefaultButton") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior::DefaultButton;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::None;
            return dst;
        }
        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::Bottom;
            return dst;
        }
        if (sc == "LeftHorizontal") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::LeftHorizontal;
            return dst;
        }
        if (sc == "RightHorizontal") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::RightHorizontal;
            return dst;
        }
        if (sc == "Swipe") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation::Swipe;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation::Smooth;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Smooth") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation::Smooth;
            return dst;
        }
        if (sc == "Broken") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation::Broken;
            return dst;
        }
        if (sc == "BrokenTilt") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation::BrokenTilt;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking &
__read(v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking::DontShow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontShow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking::DontShow;
            return dst;
        }
        if (sc == "TopLeft") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking::TopLeft;
            return dst;
        }
        if (sc == "BottomRight") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking::BottomRight;
            return dst;
        }
        if (sc == "BothSides") {
            dst = v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking::BothSides;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode &
__read(v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode::OnEnterPressed;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "OnEnterPressed") {
            dst = v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode::OnEnterPressed;
            return dst;
        }
        if (sc == "OnActivate") {
            dst = v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode::OnActivate;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment &
__read(v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Left") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment::Left;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment::Center;
            return dst;
        }
        if (sc == "Right") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment::Right;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment &
__read(v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment::Top;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Top") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment::Top;
            return dst;
        }
        if (sc == "Bottom") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment::Bottom;
            return dst;
        }
        if (sc == "Center") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment::Center;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation::Text;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Text") {
            dst = v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation::Text;
            return dst;
        }
        if (sc == "Picture") {
            dst = v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation::Picture;
            return dst;
        }
        if (sc == "TextPicture") {
            dst = v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation::TextPicture;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::PictureSize &
__read(v81c::v8_2::managedapplication::logform::layouter::PictureSize &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::PictureSize::RealSize;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "RealSize") {
            dst = v81c::v8_2::managedapplication::logform::layouter::PictureSize::RealSize;
            return dst;
        }
        if (sc == "Stretch") {
            dst = v81c::v8_2::managedapplication::logform::layouter::PictureSize::Stretch;
            return dst;
        }
        if (sc == "Proportionally") {
            dst = v81c::v8_2::managedapplication::logform::layouter::PictureSize::Proportionally;
            return dst;
        }
        if (sc == "Tile") {
            dst = v81c::v8_2::managedapplication::logform::layouter::PictureSize::Tile;
            return dst;
        }
        if (sc == "AutoSize") {
            dst = v81c::v8_2::managedapplication::logform::layouter::PictureSize::AutoSize;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode &
__read(v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode::Allow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Allow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode::Allow;
            return dst;
        }
        if (sc == "Forbidden") {
            dst = v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode::Forbidden;
            return dst;
        }
        if (sc == "Check") {
            dst = v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode::Check;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode &
__read(v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode::WhenActive;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "WhenActive") {
            dst = v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode::WhenActive;
            return dst;
        }
        if (sc == "Always") {
            dst = v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode::Always;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::StretchableMode &
__read(v81c::v8_2::managedapplication::logform::layouter::StretchableMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::StretchableMode::No;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "No") {
            dst = v81c::v8_2::managedapplication::logform::layouter::StretchableMode::No;
            return dst;
        }
        if (sc == "Hor") {
            dst = v81c::v8_2::managedapplication::logform::layouter::StretchableMode::Hor;
            return dst;
        }
        if (sc == "Ver") {
            dst = v81c::v8_2::managedapplication::logform::layouter::StretchableMode::Ver;
            return dst;
        }
        if (sc == "Any") {
            dst = v81c::v8_2::managedapplication::logform::layouter::StretchableMode::Any;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode::Directly;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Directly") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode::Directly;
            return dst;
        }
        if (sc == "Enter") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode::Enter;
            return dst;
        }
        if (sc == "EnterOnInput") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode::EnterOnInput;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableInitialListView &
__read(v81c::v8_2::managedapplication::logform::layouter::TableInitialListView &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialListView::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Beginning") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialListView::Beginning;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialListView::End;
            return dst;
        }
        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialListView::Auto;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView &
__read(v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView::NoExpand;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "NoExpand") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView::NoExpand;
            return dst;
        }
        if (sc == "ExpandTopLevel") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView::ExpandTopLevel;
            return dst;
        }
        if (sc == "ExpandAllLevels") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView::ExpandAllLevels;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode::EndOfList;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "EndOfList") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode::EndOfList;
            return dst;
        }
        if (sc == "EndOfWindow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode::EndOfWindow;
            return dst;
        }
        if (sc == "AfterCurrentRow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode::AfterCurrentRow;
            return dst;
        }
        if (sc == "BeforeCurrentRow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode::BeforeCurrentRow;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode::Cell;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Cell") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode::Cell;
            return dst;
        }
        if (sc == "Row") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode::Row;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse &
__read(v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse::DontUse;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "DontUse") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse::DontUse;
            return dst;
        }
        if (sc == "UseAlways") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse::UseAlways;
            return dst;
        }
        if (sc == "AutoUse") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse::AutoUse;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode::SingleRow;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "SingleRow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode::SingleRow;
            return dst;
        }
        if (sc == "MultiRow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode::MultiRow;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode &
__read(v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode::Auto;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Auto") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode::Auto;
            return dst;
        }
        if (sc == "Normal") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode::Normal;
            return dst;
        }
        if (sc == "Large") {
            dst = v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode::Large;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation::Show;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Show") {
            dst = v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation::Show;
            return dst;
        }
        if (sc == "DontShow") {
            dst = v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation::DontShow;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType &
__read(v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType::Begin;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Begin") {
            dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType::Begin;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType::End;
            return dst;
        }
        if (sc == "BeginAndEnd") {
            dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType::BeginAndEnd;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout &
__read(v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout::Vertically;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Vertically") {
            dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout::Vertically;
            return dst;
        }
        if (sc == "Horizontally") {
            dst = v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout::Horizontally;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType &
__read(v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType::Outer;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Outer") {
            dst = v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType::Outer;
            return dst;
        }
        if (sc == "Inner") {
            dst = v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType::Inner;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType::None;
            return dst;
        }
        if (sc == "Debit") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType::Debit;
            return dst;
        }
        if (sc == "Credit") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType::Credit;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::Header;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Header") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::Header;
            return dst;
        }
        if (sc == "Footer") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::Footer;
            return dst;
        }
        if (sc == "HierarchicalHeader") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::HierarchicalHeader;
            return dst;
        }
        if (sc == "HierarchicalFooter") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::HierarchicalFooter;
            return dst;
        }
        if (sc == "OverallHeader") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::OverallHeader;
            return dst;
        }
        if (sc == "OverallFooter") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType::OverallFooter;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType::None;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "None") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType::None;
            return dst;
        }
        if (sc == "OpeningBalance") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType::OpeningBalance;
            return dst;
        }
        if (sc == "ClosingBalance") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType::ClosingBalance;
            return dst;
        }
    }
    return dst;
}

v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType &dst, xmlpp::Node *element)
{
    dst = v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType::Main;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Main") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType::Main;
            return dst;
        }
        if (sc == "Specify") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType::Specify;
            return dst;
        }
        if (sc == "Additional") {
            dst = v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType::Additional;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::test::RowGotoDirection &
__read(v81c::v8_2::data::test::RowGotoDirection &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::test::RowGotoDirection::Up;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Up") {
            dst = v81c::v8_2::data::test::RowGotoDirection::Up;
            return dst;
        }
        if (sc == "Down") {
            dst = v81c::v8_2::data::test::RowGotoDirection::Down;
            return dst;
        }
    }
    return dst;
}

v81c::v8_2::data::test::UIRecordingActions &
__read(v81c::v8_2::data::test::UIRecordingActions &dst, xmlpp::Node *element)
{
    dst = v81c::v8_2::data::test::UIRecordingActions::Start;
    const xmlpp::Node::NodeList children = element->get_children(); // совместимость с libxml++ < 2.36
    if (!children.empty()) {
        const xmlpp::Node *text = children.front();
        const xmlpp::TextNode *tn = dynamic_cast<const xmlpp::TextNode *>(text);
        std::string sc(tn->get_content().c_str());

        if (sc == "Start") {
            dst = v81c::v8_2::data::test::UIRecordingActions::Start;
            return dst;
        }
        if (sc == "Pause") {
            dst = v81c::v8_2::data::test::UIRecordingActions::Pause;
            return dst;
        }
        if (sc == "Continue") {
            dst = v81c::v8_2::data::test::UIRecordingActions::Continue;
            return dst;
        }
        if (sc == "Cancel") {
            dst = v81c::v8_2::data::test::UIRecordingActions::Cancel;
            return dst;
        }
        if (sc == "End") {
            dst = v81c::v8_2::data::test::UIRecordingActions::End;
            return dst;
        }
    }
    return dst;
}


} }
