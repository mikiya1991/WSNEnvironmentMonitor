@echo off
::cd "%s"
::copy "<MISPath>\fp-mis_1_4.dtd"

E:
cd "E:\大学文档\大四下\毕设\wsn-project-fin\wsn-project-fin\VISN-WSN\Node1\My Application"  
copy "D:\Program Files\National Instruments\WSN\MIS\fp-mis_1_4.dtd" .

::"<ToolsPath>\WsnFillTemplate.exe" "<MISPath>\WSN-xxxx.xml.tmpl" DefaultIovDepth=2 udv.Types="%s" >"WSN-xxxx.xml"
"D:\Program Files\National Instruments\LabVIEW 2012\Targets\NI\Embedded\WSN\FwBuilders\WsnFillTemplate.exe" "D:\Program Files\National Instruments\WSN\MIS\WSN-3202.xml.tmpl" DefaultIovDepth=2 udv.Types=".........." >"E:\大学文档\大四下\毕设\wsn-project-fin\wsn-project-fin\VISN-WSN\Node1\My Application\WSN-3202.xml"

::"<ToolsPath>\WsnMakeChannelsC.exe" -l WSN-xxxx.xml .
"D:\Program Files\National Instruments\LabVIEW 2012\Targets\NI\Embedded\WSN\FwBuilders\WsnMakeChannelsC.exe" -l "E:\大学文档\大四下\毕设\wsn-project-fin\wsn-project-fin\VISN-WSN\Node1\My Application\WSN-3202.xml" "E:\大学文档\大四下\毕设\wsn-project-fin\wsn-project-fin\VISN-WSN\Node1\My Application"

::"<ToolsPath>\WsnMakeChannelsC.exe" -n WSN-xxxx.xml .
"D:\Program Files\National Instruments\LabVIEW 2012\Targets\NI\Embedded\WSN\FwBuilders\WsnMakeChannelsC.exe" -n "E:\大学文档\大四下\毕设\wsn-project-fin\wsn-project-fin\VISN-WSN\Node1\My Application\WSN-3202.xml" "E:\大学文档\大四下\毕设\wsn-project-fin\wsn-project-fin\VISN-WSN\Node1\My Application"

::"<ToolsPath>\WsnMakeMis.exe" -m WSN-xxxx.mis -b WSN-xxxx.bin -r WSN-xxxx.raw WSN-xxxx.xml
"D:\Program Files\National Instruments\LabVIEW 2012\Targets\NI\Embedded\WSN\FwBuilders\WsnMakeMis.exe" -m WSN-3202.mis -b WSN-3202.bin -r WSN-3202.raw WSN-3202.xml

::"<ToolsPath>\WsnMakeMisC.exe" WSN-xxxx.raw >WSN-xxxxMis.c
"D:\Program Files\National Instruments\LabVIEW 2012\Targets\NI\Embedded\WSN\FwBuilders\WsnMakeMisC.exe" WSN-3202.raw >WSN-3202Mis.c

