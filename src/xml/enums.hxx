#ifndef V81C_XML_SERIALIZER_ENUMS
#define V81C_XML_SERIALIZER_ENUMS
#include <libxml++/libxml++.h>
#include "./8.1/data-composition-system/common.hxx"
#include "./8.2/managed-application/core.hxx"
#include "./8.2/data/spreadsheet.hxx"
#include "./8.1/data-composition-system/settings.hxx"
#include "./8.1/data-composition-system/result.hxx"
#include "./8.2/managed-application/cmi.hxx"
#include "./8.1/data-composition-system/core.hxx"
#include "./8.2/data/geo.hxx"
#include "./8.2/managed-application/debuggerWebClient.hxx"
#include "./8.2/data/chart.hxx"
#include "./8.2/data/test.hxx"
#include "./8.1/data/enterprise.hxx"
#include "./8.2/data/graphscheme.hxx"
#include "./8.1/data-composition-system/details.hxx"
#include "./8.2/data/formatted-document.hxx"
#include "./8.1/data/core.hxx"
#include "./8.2/managed-application/logform/layouter.hxx"
#include "./8.3/data/ext.hxx"
#include "./8.2/data/data-analysis.hxx"
#include "./8.2/uobjects.hxx"
#include "./8.1/data-composition-system/composition-template.hxx"
#include "./8.2/managed-application/modules.hxx"
#include "./8.1/data/ui.hxx"
#include "./8.1/xdto.hxx"
#include "./8.3/data/planner.hxx"
#include "./8.2/managed-application/logform.hxx"

namespace v81c { namespace xml {
v81c::v8_1::xdto::Form &
__read(v81c::v8_1::xdto::Form &, xmlpp::Node *element);
v81c::v8_1::xdto::Variety &
__read(v81c::v8_1::xdto::Variety &, xmlpp::Node *element);
v81c::v8_1::xdto::Whitespace &
__read(v81c::v8_1::xdto::Whitespace &, xmlpp::Node *element);
v81c::v8_1::data::ui::AutoColor &
__read(v81c::v8_1::data::ui::AutoColor &, xmlpp::Node *element);
v81c::v8_1::data::ui::AutoSeriesSeparation &
__read(v81c::v8_1::data::ui::AutoSeriesSeparation &, xmlpp::Node *element);
v81c::v8_1::data::ui::ChartColorPalette &
__read(v81c::v8_1::data::ui::ChartColorPalette &, xmlpp::Node *element);
v81c::v8_1::data::ui::ChartLabelType &
__read(v81c::v8_1::data::ui::ChartLabelType &, xmlpp::Node *element);
v81c::v8_1::data::ui::ChartLabelsOrientation &
__read(v81c::v8_1::data::ui::ChartLabelsOrientation &, xmlpp::Node *element);
v81c::v8_1::data::ui::ChartLineType &
__read(v81c::v8_1::data::ui::ChartLineType &, xmlpp::Node *element);
v81c::v8_1::data::ui::ChartType &
__read(v81c::v8_1::data::ui::ChartType &, xmlpp::Node *element);
v81c::v8_1::data::ui::ControlBorderType &
__read(v81c::v8_1::data::ui::ControlBorderType &, xmlpp::Node *element);
v81c::v8_1::data::ui::FontType &
__read(v81c::v8_1::data::ui::FontType &, xmlpp::Node *element);
v81c::v8_1::data::ui::GeographicalSchemeLineType &
__read(v81c::v8_1::data::ui::GeographicalSchemeLineType &, xmlpp::Node *element);
v81c::v8_1::data::ui::HorizontalAlign &
__read(v81c::v8_1::data::ui::HorizontalAlign &, xmlpp::Node *element);
v81c::v8_1::data::ui::Key &
__read(v81c::v8_1::data::ui::Key &, xmlpp::Node *element);
v81c::v8_1::data::ui::PictureFormat &
__read(v81c::v8_1::data::ui::PictureFormat &, xmlpp::Node *element);
v81c::v8_1::data::ui::PivotChartType &
__read(v81c::v8_1::data::ui::PivotChartType &, xmlpp::Node *element);
v81c::v8_1::data::ui::SizeChangeMode &
__read(v81c::v8_1::data::ui::SizeChangeMode &, xmlpp::Node *element);
v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType &
__read(v81c::v8_1::data::ui::SpreadsheetDocumentCellLineType &, xmlpp::Node *element);
v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType &
__read(v81c::v8_1::data::ui::SpreadsheetDocumentDrawingLineType &, xmlpp::Node *element);
v81c::v8_1::data::ui::TextEncoding &
__read(v81c::v8_1::data::ui::TextEncoding &, xmlpp::Node *element);
v81c::v8_1::data::ui::UseOutput &
__read(v81c::v8_1::data::ui::UseOutput &, xmlpp::Node *element);
v81c::v8_1::data::ui::VerticalAlign &
__read(v81c::v8_1::data::ui::VerticalAlign &, xmlpp::Node *element);
v81c::v8_1::data::core::AllowedLength &
__read(v81c::v8_1::data::core::AllowedLength &, xmlpp::Node *element);
v81c::v8_1::data::core::AllowedSign &
__read(v81c::v8_1::data::core::AllowedSign &, xmlpp::Node *element);
v81c::v8_1::data::core::DateFractions &
__read(v81c::v8_1::data::core::DateFractions &, xmlpp::Node *element);
v81c::v8_1::data::core::FillCheckErrorStatus &
__read(v81c::v8_1::data::core::FillCheckErrorStatus &, xmlpp::Node *element);
v81c::v8_1::data::core::FillChecking &
__read(v81c::v8_1::data::core::FillChecking &, xmlpp::Node *element);
v81c::v8_1::data::core::StandardBeginningDateVariant &
__read(v81c::v8_1::data::core::StandardBeginningDateVariant &, xmlpp::Node *element);
v81c::v8_1::data::core::StandardPeriodVariant &
__read(v81c::v8_1::data::core::StandardPeriodVariant &, xmlpp::Node *element);
v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState &
__read(v81c::v8_2::managedapplication::debuggerWebClient::BPConditionState &, xmlpp::Node *element);
v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant &
__read(v81c::v8_2::managedapplication::debuggerWebClient::ContinueVariant &, xmlpp::Node *element);
v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces &
__read(v81c::v8_2::managedapplication::debuggerWebClient::EvalExprInterfaces &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::AnalysisDataType &
__read(v81c::v8_2::data::dataanalysis::AnalysisDataType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType &
__read(v81c::v8_2::data::dataanalysis::AssociationRulesDataSourceType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::AssociationRulesPruneType &
__read(v81c::v8_2::data::dataanalysis::AssociationRulesPruneType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::ClusterizationMethod &
__read(v81c::v8_2::data::dataanalysis::ClusterizationMethod &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisAssociationRulesOrderType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisColumnType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeAssociationRules &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeClusterization &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeDecisionTree &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSequentialPatterns &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisColumnTypeSummaryStatistics &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisDistanceMetricType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisNumericValueUseType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisResultTableFillType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisSequentialPatternsOrderType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisStandardizationType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType &
__read(v81c::v8_2::data::dataanalysis::DataAnalysisTimeIntervalUnitType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType &
__read(v81c::v8_2::data::dataanalysis::DecisionTreeSimplificationType &, xmlpp::Node *element);
v81c::v8_2::data::dataanalysis::PredictionModelColumnType &
__read(v81c::v8_2::data::dataanalysis::PredictionModelColumnType &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AccountType &
__read(v81c::v8_1::data::enterprise::AccountType &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AccountingRecordType &
__read(v81c::v8_1::data::enterprise::AccountingRecordType &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AccumulationRecordType &
__read(v81c::v8_1::data::enterprise::AccumulationRecordType &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity &
__read(v81c::v8_1::data::enterprise::AccumulationRegisterAggregatePeriodicity &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse &
__read(v81c::v8_1::data::enterprise::AccumulationRegisterAggregateUse &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AutoShowStateMode &
__read(v81c::v8_1::data::enterprise::AutoShowStateMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::AutoTimeMode &
__read(v81c::v8_1::data::enterprise::AutoTimeMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant &
__read(v81c::v8_1::data::enterprise::ClientApplicationBaseFontVariant &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant &
__read(v81c::v8_1::data::enterprise::ClientApplicationFormScaleVariant &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant &
__read(v81c::v8_1::data::enterprise::ClientApplicationInterfaceVariant &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ClientConnectionSpeed &
__read(v81c::v8_1::data::enterprise::ClientConnectionSpeed &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ComparisonType &
__read(v81c::v8_1::data::enterprise::ComparisonType &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::DocumentPostingMode &
__read(v81c::v8_1::data::enterprise::DocumentPostingMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::DocumentWriteMode &
__read(v81c::v8_1::data::enterprise::DocumentWriteMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::FoldersAndItemsUse &
__read(v81c::v8_1::data::enterprise::FoldersAndItemsUse &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::LinkedValueChangeMode &
__read(v81c::v8_1::data::enterprise::LinkedValueChangeMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::MessageStatus &
__read(v81c::v8_1::data::enterprise::MessageStatus &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ModalityUseMode &
__read(v81c::v8_1::data::enterprise::ModalityUseMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::PostingModeUse &
__read(v81c::v8_1::data::enterprise::PostingModeUse &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::ResultCompositionMode &
__read(v81c::v8_1::data::enterprise::ResultCompositionMode &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::TransactionsIsolationLevel &
__read(v81c::v8_1::data::enterprise::TransactionsIsolationLevel &, xmlpp::Node *element);
v81c::v8_1::data::enterprise::UpdateOnDataChange &
__read(v81c::v8_1::data::enterprise::UpdateOnDataChange &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartAnimation &
__read(v81c::v8_2::data::chart::ChartAnimation &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartLabelLocation &
__read(v81c::v8_2::data::chart::ChartLabelLocation &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartMarkerType &
__read(v81c::v8_2::data::chart::ChartMarkerType &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartOrientation &
__read(v81c::v8_2::data::chart::ChartOrientation &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartSemitransparencyMode &
__read(v81c::v8_2::data::chart::ChartSemitransparencyMode &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartSpaceMode &
__read(v81c::v8_2::data::chart::ChartSpaceMode &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartSplineMode &
__read(v81c::v8_2::data::chart::ChartSplineMode &, xmlpp::Node *element);
v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType &
__read(v81c::v8_2::data::chart::ChartValuesBySeriesConnectionType &, xmlpp::Node *element);
v81c::v8_2::data::chart::DendrogramOrientation &
__read(v81c::v8_2::data::chart::DendrogramOrientation &, xmlpp::Node *element);
v81c::v8_2::data::chart::DendrogramScaleKeeping &
__read(v81c::v8_2::data::chart::DendrogramScaleKeeping &, xmlpp::Node *element);
v81c::v8_2::data::chart::GanttChartIntervalRepresentation &
__read(v81c::v8_2::data::chart::GanttChartIntervalRepresentation &, xmlpp::Node *element);
v81c::v8_2::data::chart::GanttChartLinkType &
__read(v81c::v8_2::data::chart::GanttChartLinkType &, xmlpp::Node *element);
v81c::v8_2::data::chart::GanttChartScaleKeeping &
__read(v81c::v8_2::data::chart::GanttChartScaleKeeping &, xmlpp::Node *element);
v81c::v8_2::data::chart::GanttChartValueTextRepresentation &
__read(v81c::v8_2::data::chart::GanttChartValueTextRepresentation &, xmlpp::Node *element);
v81c::v8_2::data::chart::GanttChartVerticalStretch &
__read(v81c::v8_2::data::chart::GanttChartVerticalStretch &, xmlpp::Node *element);
v81c::v8_2::data::chart::GaugeChartValueRepresentation &
__read(v81c::v8_2::data::chart::GaugeChartValueRepresentation &, xmlpp::Node *element);
v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation &
__read(v81c::v8_2::data::chart::GaugeChartValuesScaleLabelsLocation &, xmlpp::Node *element);
v81c::v8_2::data::chart::MaxSeries &
__read(v81c::v8_2::data::chart::MaxSeries &, xmlpp::Node *element);
v81c::v8_2::data::chart::PivotChartLabelsOrientation &
__read(v81c::v8_2::data::chart::PivotChartLabelsOrientation &, xmlpp::Node *element);
v81c::v8_2::data::chart::PivotChartScaleKeeping &
__read(v81c::v8_2::data::chart::PivotChartScaleKeeping &, xmlpp::Node *element);
v81c::v8_2::data::chart::PivotChartType &
__read(v81c::v8_2::data::chart::PivotChartType &, xmlpp::Node *element);
v81c::v8_2::data::chart::PivotChartValuesShowMode &
__read(v81c::v8_2::data::chart::PivotChartValuesShowMode &, xmlpp::Node *element);
v81c::v8_2::data::chart::RadarChartScaleType &
__read(v81c::v8_2::data::chart::RadarChartScaleType &, xmlpp::Node *element);
v81c::v8_2::data::chart::TimeScaleDayFormat &
__read(v81c::v8_2::data::chart::TimeScaleDayFormat &, xmlpp::Node *element);
v81c::v8_2::data::chart::TimeScalePosition &
__read(v81c::v8_2::data::chart::TimeScalePosition &, xmlpp::Node *element);
v81c::v8_2::data::chart::TimeScaleUnitType &
__read(v81c::v8_2::data::chart::TimeScaleUnitType &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType &
__read(v81c::v8_2::data::geo::GeographicalSchemaDataSourceOrganizationType &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode &
__read(v81c::v8_2::data::geo::GeographicalSchemaLayerSeriesShowMode &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType &
__read(v81c::v8_2::data::geo::GeographicalSchemaLegendItemShowScaleType &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaLineType &
__read(v81c::v8_2::data::geo::GeographicalSchemaLineType &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaMarkerType &
__read(v81c::v8_2::data::geo::GeographicalSchemaMarkerType &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType &
__read(v81c::v8_2::data::geo::GeographicalSchemaPointObjectDrawingType &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaProjection &
__read(v81c::v8_2::data::geo::GeographicalSchemaProjection &, xmlpp::Node *element);
v81c::v8_2::data::geo::GeographicalSchemaShowMode &
__read(v81c::v8_2::data::geo::GeographicalSchemaShowMode &, xmlpp::Node *element);
v81c::v8_2::data::geo::PaintingReferencePointPosition &
__read(v81c::v8_2::data::geo::PaintingReferencePointPosition &, xmlpp::Node *element);
v81c::v8_2::data::geo::SeriesValuesDrawingMode &
__read(v81c::v8_2::data::geo::SeriesValuesDrawingMode &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType &
__read(v81c::v8_2::data::spreadsheet::DimensionAttributePlacementType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::DimensionPlacementType &
__read(v81c::v8_2::data::spreadsheet::DimensionPlacementType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::DuplexPrintingType &
__read(v81c::v8_2::data::spreadsheet::DuplexPrintingType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::NamedItemType &
__read(v81c::v8_2::data::spreadsheet::NamedItemType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::PageOrientation &
__read(v81c::v8_2::data::spreadsheet::PageOrientation &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::PagePlacementAlternation &
__read(v81c::v8_2::data::spreadsheet::PagePlacementAlternation &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::PictureSize &
__read(v81c::v8_2::data::spreadsheet::PictureSize &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::PivotTableLinesShowType &
__read(v81c::v8_2::data::spreadsheet::PivotTableLinesShowType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::PrintAccuracy &
__read(v81c::v8_2::data::spreadsheet::PrintAccuracy &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentAreaFillType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentCellAreaType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDetailUse &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentDrawingType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentFileType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentGroupHeaderPlacement &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentPatternType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentStepDirectionType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType &
__read(v81c::v8_2::data::spreadsheet::SpreadsheetDocumentTextPlacementType &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::StandardAppearance &
__read(v81c::v8_2::data::spreadsheet::StandardAppearance &, xmlpp::Node *element);
v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture &
__read(v81c::v8_2::data::spreadsheet::TextPositionRelativeToPicture &, xmlpp::Node *element);
v81c::v8_2::data::formatteddocument::FormattedDocumentFileType &
__read(v81c::v8_2::data::formatteddocument::FormattedDocumentFileType &, xmlpp::Node *element);
v81c::v8_2::data::formatteddocument::FormattedDocumentItemType &
__read(v81c::v8_2::data::formatteddocument::FormattedDocumentItemType &, xmlpp::Node *element);
v81c::v8_2::data::formatteddocument::HorizontalAlignment &
__read(v81c::v8_2::data::formatteddocument::HorizontalAlignment &, xmlpp::Node *element);
v81c::v8_2::data::formatteddocument::ParagraphType &
__read(v81c::v8_2::data::formatteddocument::ParagraphType &, xmlpp::Node *element);
v81c::v8_3::data::planner::PlannerItemsTimeRepresentation &
__read(v81c::v8_3::data::planner::PlannerItemsTimeRepresentation &, xmlpp::Node *element);
v81c::v8_3::data::ext::DeliverableNotificationSubscriberType &
__read(v81c::v8_3::data::ext::DeliverableNotificationSubscriberType &, xmlpp::Node *element);
v81c::v8_3::data::ext::SoundAlert &
__read(v81c::v8_3::data::ext::SoundAlert &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::ArrowStyle &
__read(v81c::v8_2::data::graphscheme::ArrowStyle &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::ConnectorLineType &
__read(v81c::v8_2::data::graphscheme::ConnectorLineType &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::ConnectorTextLocation &
__read(v81c::v8_2::data::graphscheme::ConnectorTextLocation &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::FitPageMode &
__read(v81c::v8_2::data::graphscheme::FitPageMode &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode &
__read(v81c::v8_2::data::graphscheme::GraphicalSchemaGridDrawMode &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation &
__read(v81c::v8_2::data::graphscheme::GraphicalSchemaItemPictureLocation &, xmlpp::Node *element);
v81c::v8_2::data::graphscheme::GraphicalSchemaShapes &
__read(v81c::v8_2::data::graphscheme::GraphicalSchemaShapes &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionAttributesPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionChartLegendPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionComparisonType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionConditionalAppearanceUse &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFieldPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterApplicationType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFilterItemsGroupType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionFixation &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupFieldsPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupTemplateType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionGroupUseVariant &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesAutoPosition &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionResourcesPlacementInChart &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemState &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsItemViewMode &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionSettingsViewMode &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType &
__read(v81c::v8_1::datacompositionsystem::settings::DataCompositionTextOutputType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionFieldsTitleType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionGroupType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionParameterUse &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionPeriodAdditionType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionSortDirection &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionTextPlacementType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement &
__read(v81c::v8_1::datacompositionsystem::core::DataCompositionTotalPlacement &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction &
__read(v81c::v8_1::datacompositionsystem::details::DataCompositionDetailsProcessingAction &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings &
__read(v81c::v8_2::managedapplication::logform::AutoSaveFormDataInSettings &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::BWAValue &
__read(v81c::v8_2::managedapplication::logform::BWAValue &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ButtonRepresentation &
__read(v81c::v8_2::managedapplication::logform::ButtonRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::CheckBoxType &
__read(v81c::v8_2::managedapplication::logform::CheckBoxType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation &
__read(v81c::v8_2::managedapplication::logform::ChoiceButtonRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString &
__read(v81c::v8_2::managedapplication::logform::ChoiceDataGetModeOnInputByString &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput &
__read(v81c::v8_2::managedapplication::logform::ChoiceHistoryOnInput &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ColumnsGroup &
__read(v81c::v8_2::managedapplication::logform::ColumnsGroup &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::CurrentRowUse &
__read(v81c::v8_2::managedapplication::logform::CurrentRowUse &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::EditTextUpdate &
__read(v81c::v8_2::managedapplication::logform::EditTextUpdate &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FoldersAndItems &
__read(v81c::v8_2::managedapplication::logform::FoldersAndItems &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormBaseFontVariant &
__read(v81c::v8_2::managedapplication::logform::FormBaseFontVariant &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormChildrenGroup &
__read(v81c::v8_2::managedapplication::logform::FormChildrenGroup &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormChildrenWidth &
__read(v81c::v8_2::managedapplication::logform::FormChildrenWidth &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormDateSelectionMode &
__read(v81c::v8_2::managedapplication::logform::FormDateSelectionMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation &
__read(v81c::v8_2::managedapplication::logform::FormElementCommandBarLocation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormElementOrientation &
__read(v81c::v8_2::managedapplication::logform::FormElementOrientation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormElementOrigin &
__read(v81c::v8_2::managedapplication::logform::FormElementOrigin &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormElementTitleLocation &
__read(v81c::v8_2::managedapplication::logform::FormElementTitleLocation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior &
__read(v81c::v8_2::managedapplication::logform::FormEnterKeyBehavior &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormFixedInTable &
__read(v81c::v8_2::managedapplication::logform::FormFixedInTable &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormPagesRepresentation &
__read(v81c::v8_2::managedapplication::logform::FormPagesRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation &
__read(v81c::v8_2::managedapplication::logform::FormProgressBarRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FormWindowOpeningMode &
__read(v81c::v8_2::managedapplication::logform::FormWindowOpeningMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString &
__read(v81c::v8_2::managedapplication::logform::FullTextSearchOnInputByString &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode &
__read(v81c::v8_2::managedapplication::logform::IncompleteItemChoiceMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment &
__read(v81c::v8_2::managedapplication::logform::ItemHorizontalAlignment &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ItemVerticalAlignment &
__read(v81c::v8_2::managedapplication::logform::ItemVerticalAlignment &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind &
__read(v81c::v8_2::managedapplication::logform::LogFormElementAdditionKind &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::LogFormScrollMode &
__read(v81c::v8_2::managedapplication::logform::LogFormScrollMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ManagedFormButtonType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormButtonType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ManagedFormDecorationType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormDecorationType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ManagedFormFieldType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormFieldType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ManagedFormGroupType &
__read(v81c::v8_2::managedapplication::logform::ManagedFormGroupType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::MarkingStyle &
__read(v81c::v8_2::managedapplication::logform::MarkingStyle &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::MenuElementPlacementArea &
__read(v81c::v8_2::managedapplication::logform::MenuElementPlacementArea &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::PictureSize &
__read(v81c::v8_2::managedapplication::logform::PictureSize &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::RadioButtonType &
__read(v81c::v8_2::managedapplication::logform::RadioButtonType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::RefreshRequestMethod &
__read(v81c::v8_2::managedapplication::logform::RefreshRequestMethod &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ReportFormType &
__read(v81c::v8_2::managedapplication::logform::ReportFormType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::RepresentationInContextMenu &
__read(v81c::v8_2::managedapplication::logform::RepresentationInContextMenu &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::SaveFormDataInSettings &
__read(v81c::v8_2::managedapplication::logform::SaveFormDataInSettings &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::SearchControlLocation &
__read(v81c::v8_2::managedapplication::logform::SearchControlLocation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::SearchOnInput &
__read(v81c::v8_2::managedapplication::logform::SearchOnInput &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::SearchStringLocation &
__read(v81c::v8_2::managedapplication::logform::SearchStringLocation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString &
__read(v81c::v8_2::managedapplication::logform::SearchStringModeOnInputByString &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::SelectionShowMode &
__read(v81c::v8_2::managedapplication::logform::SelectionShowMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableFieldEditMode &
__read(v81c::v8_2::managedapplication::logform::TableFieldEditMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableInitialListView &
__read(v81c::v8_2::managedapplication::logform::TableInitialListView &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableInitialTreeView &
__read(v81c::v8_2::managedapplication::logform::TableInitialTreeView &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableRepresentation &
__read(v81c::v8_2::managedapplication::logform::TableRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableRowInputMode &
__read(v81c::v8_2::managedapplication::logform::TableRowInputMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableRowSelectionMode &
__read(v81c::v8_2::managedapplication::logform::TableRowSelectionMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableScrollBarUse &
__read(v81c::v8_2::managedapplication::logform::TableScrollBarUse &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TableSelectionMode &
__read(v81c::v8_2::managedapplication::logform::TableSelectionMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::TooltipRepresentation &
__read(v81c::v8_2::managedapplication::logform::TooltipRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::UsualGroupBehavior &
__read(v81c::v8_2::managedapplication::logform::UsualGroupBehavior &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation &
__read(v81c::v8_2::managedapplication::logform::UsualGroupControlRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::UsualGroupRepresentation &
__read(v81c::v8_2::managedapplication::logform::UsualGroupRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::VerticalAlign &
__read(v81c::v8_2::managedapplication::logform::VerticalAlign &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ViewScalingMode &
__read(v81c::v8_2::managedapplication::logform::ViewScalingMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::ViewStatusLocation &
__read(v81c::v8_2::managedapplication::logform::ViewStatusLocation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation &
__read(v81c::v8_2::managedapplication::logform::WarningOnEditRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::Alias &
__read(v81c::v8_2::managedapplication::core::Alias &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::ApplicationUsePurpose &
__read(v81c::v8_2::managedapplication::core::ApplicationUsePurpose &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::ClientRunMode &
__read(v81c::v8_2::managedapplication::core::ClientRunMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::CommandGroupCategory &
__read(v81c::v8_2::managedapplication::core::CommandGroupCategory &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions &
__read(v81c::v8_2::managedapplication::core::RequiredMobileApplicationPermissions &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::SectionPanelRepresentation &
__read(v81c::v8_2::managedapplication::core::SectionPanelRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::core::StyleEntryKind &
__read(v81c::v8_2::managedapplication::core::StyleEntryKind &, xmlpp::Node *element);
v81c::v8_2::uobjects::AccessMode &
__read(v81c::v8_2::uobjects::AccessMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::cmi::CommandParameterUseMode &
__read(v81c::v8_2::managedapplication::cmi::CommandParameterUseMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::cmi::FuncMenuGroupType &
__read(v81c::v8_2::managedapplication::cmi::FuncMenuGroupType &, xmlpp::Node *element);
v81c::v8_2::managedapplication::cmi::GroupCategory &
__read(v81c::v8_2::managedapplication::cmi::GroupCategory &, xmlpp::Node *element);
v81c::v8_2::managedapplication::modules::ParamDirection &
__read(v81c::v8_2::managedapplication::modules::ParamDirection &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::BWDValue &
__read(v81c::v8_2::managedapplication::logform::layouter::BWDValue &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation &
__read(v81c::v8_2::managedapplication::logform::layouter::CaptionButtonsLocation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::ChoiceButtonRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects &
__read(v81c::v8_2::managedapplication::logform::layouter::ChoiceObjects &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ColumnMode &
__read(v81c::v8_2::managedapplication::logform::layouter::ColumnMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup &
__read(v81c::v8_2::managedapplication::logform::layouter::ColumnsGroup &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ControlCategory &
__read(v81c::v8_2::managedapplication::logform::layouter::ControlCategory &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::Direction &
__read(v81c::v8_2::managedapplication::logform::layouter::Direction &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode &
__read(v81c::v8_2::managedapplication::logform::layouter::ElementShiftMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode &
__read(v81c::v8_2::managedapplication::logform::layouter::FormDateSelectionMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation &
__read(v81c::v8_2::managedapplication::logform::layouter::FormElementOrientation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior &
__read(v81c::v8_2::managedapplication::logform::layouter::FormEnterKeyBehavior &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::FormPanelTabsRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::FormProgressBarRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking &
__read(v81c::v8_2::managedapplication::logform::layouter::FormTrackBarMarking &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode &
__read(v81c::v8_2::managedapplication::logform::layouter::IncompleteItemChoiceMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment &
__read(v81c::v8_2::managedapplication::logform::layouter::ItemHorizontalAlignment &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment &
__read(v81c::v8_2::managedapplication::logform::layouter::ItemVerticalAlignment &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::MenuElementRepresentation &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::PictureSize &
__read(v81c::v8_2::managedapplication::logform::layouter::PictureSize &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode &
__read(v81c::v8_2::managedapplication::logform::layouter::SearchOnInputForbiddenMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode &
__read(v81c::v8_2::managedapplication::logform::layouter::SelectionShowMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::StretchableMode &
__read(v81c::v8_2::managedapplication::logform::layouter::StretchableMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableFieldEditMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableInitialListView &
__read(v81c::v8_2::managedapplication::logform::layouter::TableInitialListView &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView &
__read(v81c::v8_2::managedapplication::logform::layouter::TableInitialTreeView &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableRowInputMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableRowSelectionMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse &
__read(v81c::v8_2::managedapplication::logform::layouter::TableScrollBarUse &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode &
__read(v81c::v8_2::managedapplication::logform::layouter::TableSelectionMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode &
__read(v81c::v8_2::managedapplication::logform::layouter::ViewScalingMode &, xmlpp::Node *element);
v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation &
__read(v81c::v8_2::managedapplication::logform::layouter::WarningBeforeEditRepresentation &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType &
__read(v81c::v8_1::datacompositionsystem::result::DataCompositionResultItemType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout &
__read(v81c::v8_1::datacompositionsystem::result::DataCompositionResultNestedItemsLayout &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType &
__read(v81c::v8_1::datacompositionsystem::compositiontemplate::DataCompositionDataSetsLinkType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionAccountingBalanceType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionAreaTemplateType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionBalanceType &, xmlpp::Node *element);
v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType &
__read(v81c::v8_1::datacompositionsystem::common::DataCompositionPeriodType &, xmlpp::Node *element);
v81c::v8_2::data::test::RowGotoDirection &
__read(v81c::v8_2::data::test::RowGotoDirection &, xmlpp::Node *element);
v81c::v8_2::data::test::UIRecordingActions &
__read(v81c::v8_2::data::test::UIRecordingActions &, xmlpp::Node *element);
} }
#endif // V81C_XML_SERIALIZER_ENUMS
