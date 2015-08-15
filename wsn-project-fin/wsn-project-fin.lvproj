<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="12008004">
	<Property Name="varPersistentID:{025906C3-D0C9-4CA2-8DCA-663338F147A1}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/Battery Voltage</Property>
	<Property Name="varPersistentID:{089C8DC3-80EE-4AB5-9274-C4792CB34D75}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/DIO0</Property>
	<Property Name="varPersistentID:{100D8331-0E07-4A77-84A5-222107F5733F}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/TC2</Property>
	<Property Name="varPersistentID:{1F981B49-02D4-4949-97B2-6EADC3CE79E4}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/TC0</Property>
	<Property Name="varPersistentID:{44E00A03-9FE7-44DF-9DCC-7C95F28C3395}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/Battery Voltage</Property>
	<Property Name="varPersistentID:{68AE3469-2311-42AE-BE36-3803994CC9DD}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/AI2</Property>
	<Property Name="varPersistentID:{6BB0A575-5974-48BD-B31F-E8209C4E9F86}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/Mesh Router</Property>
	<Property Name="varPersistentID:{6BBD4AA6-BE42-431C-ADFD-8401024DA4E8}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/DIO3</Property>
	<Property Name="varPersistentID:{747DB8CF-8200-4289-84F7-E30581132EFB}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/VI Deployed</Property>
	<Property Name="varPersistentID:{86494E49-C53D-4380-AC3D-B566C99AD0A9}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/External Power</Property>
	<Property Name="varPersistentID:{88251EBD-94E7-4998-A711-973862859AD4}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/DIO3</Property>
	<Property Name="varPersistentID:{8CD63E64-4AB8-43DB-B677-2848278D2BFD}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/DIO2</Property>
	<Property Name="varPersistentID:{8D67CD15-1216-4E8A-ACBC-D24350D28954}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/AI1</Property>
	<Property Name="varPersistentID:{8DCE664C-E9FD-4528-B595-7892F4B2AD76}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/VI Deployed</Property>
	<Property Name="varPersistentID:{A4256055-3B42-4485-A7A1-1B826DA95B06}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/DIO1</Property>
	<Property Name="varPersistentID:{A9DFFAF0-738B-4B68-9A51-D5F921BCDB1E}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/Mesh Router</Property>
	<Property Name="varPersistentID:{ADBEB083-AEF3-4E3D-8AE1-18B07F65AED3}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/DIO1</Property>
	<Property Name="varPersistentID:{B730D411-CEAB-4D08-A58C-8C4DFDFB8165}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/Link Quality</Property>
	<Property Name="varPersistentID:{C02B4E75-DB5D-4401-95CA-379298C8B616}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/TC1</Property>
	<Property Name="varPersistentID:{C6377912-7699-460F-B0BA-05599CFA96D2}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/DIO0</Property>
	<Property Name="varPersistentID:{CE463DC7-4EB2-435A-934D-7D2D552172C5}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/AI0</Property>
	<Property Name="varPersistentID:{D25A185C-677A-43D8-9B7A-964455D729D8}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/External Power</Property>
	<Property Name="varPersistentID:{D8AF2666-CB7F-4BEE-B1B3-7B31E7191EEF}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/DIO2</Property>
	<Property Name="varPersistentID:{E8E3E8AA-0E72-4AB7-A143-B74EA5A5263E}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/AI3</Property>
	<Property Name="varPersistentID:{F023CA8E-F40E-4884-BDE3-A2AC63A45F1F}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/Link Quality</Property>
	<Property Name="varPersistentID:{FEEE7C6B-1CBE-423E-A431-22996F205455}" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node2/TC3</Property>
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="gateway_main.vi" Type="VI" URL="../gateway_main.vi"/>
		<Item Name="gateway打开历史文件.vi" Type="VI" URL="../gateway打开历史文件.vi"/>
		<Item Name="gateway发消息.vi" Type="VI" URL="../gateway发消息.vi"/>
		<Item Name="gateway记录.vi" Type="VI" URL="../gateway记录.vi"/>
		<Item Name="gateway设置.vi" Type="VI" URL="../gateway设置.vi"/>
		<Item Name="set-temperature.vi" Type="VI" URL="../set-temperature.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Acquire Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Acquire Semaphore.vi"/>
				<Item Name="AddNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/AddNamedSemaphorePrefix.vi"/>
				<Item Name="Application Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Application Directory.vi"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/GetNamedSemaphorePrefix.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="hostAPI.dll" Type="Document" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/hostAPI.dll"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="Not A Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Not A Semaphore.vi"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Obtain Semaphore Reference.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Obtain Semaphore Reference.vi"/>
				<Item Name="Release Semaphore Reference.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Release Semaphore Reference.vi"/>
				<Item Name="Release Semaphore.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Release Semaphore.vi"/>
				<Item Name="RemoveNamedSemaphorePrefix.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/RemoveNamedSemaphorePrefix.vi"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Semaphore RefNum" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore RefNum"/>
				<Item Name="Semaphore Refnum Core.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Semaphore Refnum Core.ctl"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="Validate Semaphore Size.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/semaphor.llb/Validate Semaphore Size.vi"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
				<Item Name="WSN Cancel Message.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Cancel Message.vi"/>
				<Item Name="WSN Close Gateway.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Close Gateway.vi"/>
				<Item Name="WSN Close Message.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Close Message.vi"/>
				<Item Name="WSN Close Node.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Close Node.vi"/>
				<Item Name="WSN Discover All Nodes.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Discover All Nodes.vi"/>
				<Item Name="WSN Err code.ctl" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Err code.ctl"/>
				<Item Name="WSN Gateway Time.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Gateway Time.vi"/>
				<Item Name="WSN Get New Messages.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Get New Messages.vi"/>
				<Item Name="WSN Get Node Info.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Get Node Info.vi"/>
				<Item Name="WSN Message Status.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Message Status.vi"/>
				<Item Name="WSN Message.ctl" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Message.ctl"/>
				<Item Name="WSN Msg Status.ctl" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Msg Status.ctl"/>
				<Item Name="WSN Node Info.ctl" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Node Info.ctl"/>
				<Item Name="WSN Open Gateway.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Open Gateway.vi"/>
				<Item Name="WSN Open Node Reference.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Open Node Reference.vi"/>
				<Item Name="WSN Send Message.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Targets/Embedded/WSN/Host API/WSN Send Message.vi"/>
			</Item>
			<Item Name="get_date.vi" Type="VI" URL="../gateway-sub/get_date.vi"/>
			<Item Name="loadandrun_subvi.vi" Type="VI" URL="../gateway-sub/loadandrun_subvi.vi"/>
			<Item Name="读tdms.vi" Type="VI" URL="../gateway-sub/读tdms.vi"/>
			<Item Name="获得消息.vi" Type="VI" URL="../gateway-sub/获得消息.vi"/>
			<Item Name="节点信息.vi" Type="VI" URL="../gateway-sub/节点信息.vi"/>
			<Item Name="设定sub.vi" Type="VI" URL="../gateway-sub/设定sub.vi"/>
			<Item Name="设置.vi" Type="VI" URL="../gateway-sub/设置.vi"/>
			<Item Name="生成消息.vi" Type="VI" URL="../gateway-sub/生成消息.vi"/>
			<Item Name="写测量tdms.vi" Type="VI" URL="../gateway-sub/写测量tdms.vi"/>
			<Item Name="写串口.vi" Type="VI" URL="../gateway-sub/写串口.vi"/>
		</Item>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
	<Item Name="VISN-WSN" Type="WSN RT Gateway">
		<Property Name="alias.name" Type="Str">VISN-WSN</Property>
		<Property Name="alias.value" Type="Str">169.254.62.215</Property>
		<Property Name="CCSymbols" Type="Str">TARGET_TYPE,RT;OS,VxWorks;CPU,PowerPC;</Property>
		<Property Name="host.ResponsivenessCheckEnabled" Type="Bool">true</Property>
		<Property Name="host.ResponsivenessCheckPingDelay" Type="UInt">5000</Property>
		<Property Name="host.ResponsivenessCheckPingTimeout" Type="UInt">1000</Property>
		<Property Name="host.TargetCPUID" Type="UInt">2</Property>
		<Property Name="host.TargetOSID" Type="UInt">14</Property>
		<Property Name="target.cleanupVisa" Type="Bool">false</Property>
		<Property Name="target.FPProtocolGlobals_ControlTimeLimit" Type="Int">300</Property>
		<Property Name="target.getDefault-&gt;WebServer.Port" Type="Int">80</Property>
		<Property Name="target.getDefault-&gt;WebServer.Timeout" Type="Int">60</Property>
		<Property Name="target.IOScan.Faults" Type="Str"></Property>
		<Property Name="target.IOScan.NetVarPeriod" Type="UInt">200</Property>
		<Property Name="target.IOScan.NetWatchdogEnabled" Type="Bool">false</Property>
		<Property Name="target.IOScan.Period" Type="UInt">200000</Property>
		<Property Name="target.IOScan.PowerupMode" Type="UInt">0</Property>
		<Property Name="target.IOScan.Priority" Type="UInt">0</Property>
		<Property Name="target.IOScan.ReportModeConflict" Type="Bool">true</Property>
		<Property Name="target.IsRemotePanelSupported" Type="Bool">true</Property>
		<Property Name="target.RTCPULoadMonitoringEnabled" Type="Bool">true</Property>
		<Property Name="target.RTTarget.ApplicationPath" Type="Path">/c/ni-rt/startup/startup.rtexe</Property>
		<Property Name="target.RTTarget.EnableFileSharing" Type="Bool">true</Property>
		<Property Name="target.RTTarget.IPAccess" Type="Str">+*</Property>
		<Property Name="target.RTTarget.LaunchAppAtBoot" Type="Bool">false</Property>
		<Property Name="target.RTTarget.VIPath" Type="Path">/c/ni-rt/startup</Property>
		<Property Name="target.server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="target.server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="target.server.tcp.access" Type="Str">+*</Property>
		<Property Name="target.server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="target.server.tcp.paranoid" Type="Bool">true</Property>
		<Property Name="target.server.tcp.port" Type="Int">3363</Property>
		<Property Name="target.server.tcp.serviceName" Type="Str">Main Application Instance/VI Server</Property>
		<Property Name="target.server.tcp.serviceName.default" Type="Str">Main Application Instance/VI Server</Property>
		<Property Name="target.server.vi.access" Type="Str">+*</Property>
		<Property Name="target.server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="target.server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="target.WebServer.Enabled" Type="Bool">false</Property>
		<Property Name="target.WebServer.LogEnabled" Type="Bool">false</Property>
		<Property Name="target.WebServer.LogPath" Type="Path">/c/ni-rt/system/www/www.log</Property>
		<Property Name="target.WebServer.Port" Type="Int">80</Property>
		<Property Name="target.WebServer.RootPath" Type="Path">/c/ni-rt/system/www</Property>
		<Property Name="target.WebServer.TcpAccess" Type="Str">c+*</Property>
		<Property Name="target.WebServer.Timeout" Type="Int">60</Property>
		<Property Name="target.WebServer.ViAccess" Type="Str">+*</Property>
		<Property Name="target.webservices.SecurityAPIKey" Type="Str">PqVr/ifkAQh+lVrdPIykXlFvg12GhhQFR8H9cUhphgg=:pTe9HRlQuMfJxAG6QCGq7UvoUpJzAzWGKy5SbZ+roSU=</Property>
		<Property Name="target.webservices.ValidTimestampWindow" Type="Int">15</Property>
		<Property Name="wsn.gatewaytype" Type="UInt">355</Property>
		<Item Name="Wireless Sensor Network" Type="WSN Node Container">
			<Item Name="Node1" Type="WSN Node">
				<Property Name="AI0.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="AI1.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="AI2.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="AI3.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="Battery Voltage.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="DIO0.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="DIO1.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="DIO2.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="DIO3.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="External Power.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="Link Quality.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="Mesh Router.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="VI Deployed.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="wsn.ExtRam.DefaultIovDepth" Type="UInt">2</Property>
				<Property Name="wsn.ExtRam.EioSize" Type="UInt">0</Property>
				<Property Name="wsn.ExtRam.ExtRamSize" Type="UInt">0</Property>
				<Property Name="wsn.ExtRam.IovSize" Type="UInt">157</Property>
				<Property Name="wsn.ExtRam.MaxIntRamHeapSize" Type="UInt">5032</Property>
				<Property Name="wsn.NodeConfigCRCName" Type="Str">2844256794</Property>
				<Property Name="wsn.NodeConfigName" Type="Bin">0$^Y&lt;7QA&gt;G6S=WFP&lt;DUC-3YQ)C"F&lt;G.P:'FO:TUC&gt;82G,4AC0TY+0%Z%)#"N&lt;W2V&lt;'6*2$UC-T5U)C"O97VF03*/&lt;W2F-3)A&lt;7FT03)R.$=V.T1W/4)Q-D1Q.D)Q-49S-%)U241Z-D!V.T5T.%5S2$-T-T)T-$-S-$!Q-$!Q-$!R.$""-4.$-$!Q-$!W-D!U-$)Q-4!S.$%U/4!Q-$1Q-T)Q-$1Q-$!Q-D"$-4!Q-$!S-$1R-$!Q-$!Q-$!Q.4)Q-$1Q-$!Q14"$-$!Q-$""-$1Q-$!Q-$!Q-$!Y-D)Q-$1Q-$!Q-$"$-$!Q-$!Q-$1Q-$!Q-$!Q-$!Y-T)Q-$1Q-$!Q-$"#2D!Q-$!Q-$.'-$!Q-$!Q-$!Q-4!U-%-V-T9V.E5X-T:'.T)S-$5Q.E9X.T9V.T)Q-$!Q-$5Q-4%T-T!W2$=T-D!U-D9V.D9W2D=S.D5S-$5T.D%W2$=Q.E-W/4:&amp;.D=Q-D%U-T)T.4:%.T-S-$1S.D5W.D:'.T)W.4)Q.4-W-4:%.T!W1T9Z.E5W.T!T-45T-4-Q-T!W2$=T-D!U-D9V.D9W2D=S.D5S-$5T.D%W2$=Q.E-W/4:&amp;.D=Q.$%V-T)T.4-Q.E1X-T)Q.$)W.49W.E9X-D9V-D!V-T9R.E1X-$:$.DEW249X2E5Q/41R.E-X.T9R.TEX-T)Q.%9W24!R-$!S.$!Q-$%W-4!U-$!Q-4"$.59V2D9T.E9W249W.DEW.T6'.59U.$1Z-$!Q-4%Q-$%Q-$!Q-$!Q-$!Q-$%Q-$!Q-$!Q-$!Q-$!W24!Q-$)W-4!U-$%Q-4!T.$1U/42'-$!Q-4%Q-$%Q-$!Q-$!Q-$!Q-$%Q-$!Q-$!Q-$!R-D!Q241U.$EU2D)Q.$1X-D9Z.T9W.4)Q.%1W2D9U.D5Q-$!Q-$1Q-$!Y.41X-D9Z.T-X.$9R.T1W.4!R-%5U.$=S.DEX.D9V-D!U1T:'.T=S-$2'.E5W1T=Z-$)Q2D1U.T)W/4=W.D5S-$1Y.DEW.T9Y-D!U2D:&amp;.E-X/4!T-4)U.$=S.DEX.D9V-D!U/$9Z.D=W/$)Q.D%W249U-D!U1T:'.T=Q-$!Q-T1Q-$!Q.D-Q-4!T-$%R/46'.59W-T:'.E5W.D9Z.D=V2D6'.4-W-4:%.T!W1T9V-D!U/4:&amp;.T1W.4=S.T9W-4:$-$!Q-4AR-D!Q/%.%1U.$1T.%-$!V-%-T.$=Q-$!Q14!U-$!Q-$!S24!Q-$%W-T!R-$-Q-4%T.59V2D9T.E9W249W.DEW.T6'.59U/$9V.D%X-D=U.D)W.49R.T1Q-$!R/$%S-$!Y1U2$1U.$-U1Q-$!Q1D1U-D!Q-$!X.$1S-$!Q-$*"-$!Q-D9T-$%Q-D!R-%9U-D9R.T1X.$9V.T)X/4)Q.49W2D:$.T1W-49X.D5Q-$!R-$1S-$!U-$!Q-$!Q-$!Q-$!Q-D!U-4!Q-$!Q-$!Q-$!Q-$)X-$!Q-T9T-$%Q-D!R-%-U1T9Z.E5W1D)Q.4%X.49R.E-W/4=U.TEQ-$!R-TAS-$"&amp;-$!Q-$!Q-$!Q-$!Q1TAU-D!Q-$!Q-$!Q-$!Q-$)T-$!Q.$9T-$%Q-$!R-%)V.D1Z-D!U.$9V.T!W1T:'.TEW.49U-$!Q-4%Q-$%Q-$!Q-$!Q-$!Q-$%Q-$!Q-$!Q-$!Q-$!S.D!Q-$5W-T!R-$!Q-4"&amp;.$5X/$=U.D5X-D:&amp;.D%W1T)Q.4!W2D=X.D5X-D!Q-$%R-$!R-$!Q-$!Q-$!Q-$!R-$!Q-$!Q-$!Q-$!Q-D-Q-$!W.D-Q-4!Q-$%Q1D2%.D5X-T9Y-D!V-D:'.T5X.$9V.T)Q-$!R-4!Q-4!Q-$!Q-$!Q-$!Q-4!Q-$!Q-$!Q-$!Q-$5Q.%1U2$1X/%9C)$Y+#4R16#"D;'&amp;O372F&lt;H1^)D!C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-#)A&gt;G&amp;M03)R)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D%W.T=X.$=S)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D!C)(:B&lt;$UC-3)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)T-T5V.$EU.#)A=W6M5GZH37ZE:8A^)D!C)$Y+#1E]16255F-A982U=EFO:'6Y03)Q)C"W97Q^)D%C)#]_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC.4!T-T)U-49C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-#)A&gt;G&amp;M03)R)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D9X-4=U.$!Q)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)DAT/45R/$=S)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D%Q-$=S/4-U.#)A=W6M5GZH37ZE:8A^)D!C)$Y+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)R-4=V-$9Y-49C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-4-U-T1Y/$!Q)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D!C)(:B&lt;$UC-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)R.4%R-D9S.T)C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-#)A&gt;G&amp;M03)Q)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D%W.TEQ-T=U.#)A=W6M5GZH37ZE:8A^)D!C)$Y+#1E]16255F-A982U=EFO:'6Y03)Q)C"W97Q^)D!C)#]_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-4AU.DAR-D%W)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D!C)(:B&lt;$UC-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)S-$%V-D-S-$!C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0&amp;:"4#"W97R5?8"F03)S)C"W97Q^)D5O-$!Q)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D)R/$-W.4EV-C)A=W6M5GZH37ZE:8A^)D!C)$Y+#1E]6E&amp;-)(:B&lt;&amp;2Z='5^)D)C)(:B&lt;$UC.D%O-$!Q)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D)T.4)Q/$=Q.#)A=W6M5GZH37ZE:8A^)D!C)$Y+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)S.4)Q.4%U.49C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-D9Y/$EU-D!Y)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D)Y.4=T.DEW-#)A=W6M5GZH37ZE:8A^)D!C)$Y+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)T-$)V.TEX-4)C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE],V"50AI],UZ%0AI</Property>
				<Property Name="wsn.NodeSerialNumber" Type="UInt">21280470</Property>
				<Property Name="wsn.NodeType" Type="UInt">354</Property>
				<Property Name="wsn.NodeTypeName" Type="Str">NI WSN-3202</Property>
				<Property Name="wsn.Udv.Types" Type="Str">..........</Property>
				<Property Name="WSN_Node_Identity_ID" Type="UInt">1</Property>
				<Item Name=" LabVIEW WSN Target @1" Type="Embedded">
					<Property Name="alias.name" Type="Str"> LabVIEW WSN Target @1</Property>
					<Property Name="alias.value" Type="Str">Embedded:WSN:NI WSN-3202</Property>
					<Property Name="EIOPath" Type="Str">EIO\eio.xml</Property>
					<Property Name="EmbeddedUrl" Type="Str">Embedded:WSN:NI WSN-3202</Property>
					<Property Name="Type" Type="Str">NI WSN-3202</Property>
					<Item Name="Analog Input" Type="Folder">
						<Item Name="AI0" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/AI0</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="AI1" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/AI1</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="AI2" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/AI2</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="AI3" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/AI3</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="Battery Voltage" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/Battery Voltage</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
					</Item>
					<Item Name="Digital I/O" Type="Folder">
						<Item Name="DIO0" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/DIO0</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="DIO1" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/DIO1</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="DIO2" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/DIO2</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="DIO3" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/DIO3</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="External Power" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/External Power</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
						<Item Name="User LED" Type="Elemental IO">
							<Property Name="eioAttrBag" Type="Xml"><AttributeSet name="">
   <Attribute name="resource">
   <Value>/User LED</Value>
   </Attribute>
</AttributeSet>
</Property>
						</Item>
					</Item>
					<Item Name="node3.vi" Type="VI" URL="../node/node3.vi"/>
					<Item Name="sample_a1.vi" Type="VI" URL="../node/node_sub/sample_a1.vi"/>
					<Item Name="Dependencies" Type="Dependencies">
						<Item Name="vi.lib" Type="Folder">
							<Item Name="EIO Prop Node Gain.ctl" Type="VI" URL="/&lt;vilib&gt;/Embedded/WSN/EIO/NI WSN-3202/EIO Prop Node Gain.ctl"/>
							<Item Name="EIO Prop Node Sensor Excitation Mode.ctl" Type="VI" URL="/&lt;vilib&gt;/Embedded/WSN/EIO/NI WSN-3202/EIO Prop Node Sensor Excitation Mode.ctl"/>
							<Item Name="Error codes.ctl" Type="VI" URL="/&lt;vilib&gt;/Embedded/WSN/Error codes.ctl"/>
							<Item Name="OperatingMode.ctl" Type="VI" URL="/&lt;vilib&gt;/Embedded/WSN/OperatingMode.ctl"/>
							<Item Name="WSN-3202 EIO Prop Node DIO Drive Mode.ctl" Type="VI" URL="/&lt;vilib&gt;/Embedded/WSN/EIO/NI WSN-3202/WSN-3202 EIO Prop Node DIO Drive Mode.ctl"/>
							<Item Name="WSNState.ctl" Type="VI" URL="/&lt;vilib&gt;/Embedded/WSN/WSNState.ctl"/>
						</Item>
						<Item Name="message_dio_control.vi" Type="VI" URL="../node/node_sub/message_dio_control.vi"/>
						<Item Name="sample_a0.vi" Type="VI" URL="../node/node_sub/sample_a0.vi"/>
						<Item Name="set_ai_power.vi" Type="VI" URL="../node/node_sub/set_ai_power.vi"/>
						<Item Name="set_red_state.vi" Type="VI" URL="../node/node_sub/set_red_state.vi"/>
						<Item Name="温度转换.vi" Type="VI" URL="../node/node_sub/温度转换.vi"/>
					</Item>
					<Item Name="Build Specifications" Type="Build">
						<Item Name="My Application" Type="EmbeddedBuildSpec">
							<Property Name="DefaultBuildSpec" Type="Bool">true</Property>
							<Property Name="EmbeddedUrl" Type="Str">Embedded:WSN:NI WSN-3202:Application</Property>
							<Property Name="SourceTopLevelVI" Type="Ref">/VISN-WSN/Wireless Sensor Network/Node1/ LabVIEW WSN Target @1/node3.vi</Property>
						</Item>
					</Item>
				</Item>
				<Item Name="AI0" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">0</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">True</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">AI0</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="AI1" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">1</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">True</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">AI1</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="AI2" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">2</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">AI2</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="AI3" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">3</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">AI3</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="Battery Voltage" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">4</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">Battery Voltage</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO0" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">0</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO0</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO1" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">1</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO1</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO2" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">2</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO2</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO3" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">3</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO3</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="External Power" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">7</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">External Power</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="Link Quality" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">5</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">Link Quality</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="Mesh Router" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">8</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">Mesh Router</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="VI Deployed" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">6</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">VI Deployed</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
			</Item>
			<Item Name="Node2" Type="WSN Node">
				<Property Name="Battery Voltage.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="DIO0.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="DIO1.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="DIO2.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="DIO3.ChannelAccess" Type="Str">readwrite</Property>
				<Property Name="External Power.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="Link Quality.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="Mesh Router.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="TC0.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="TC1.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="TC2.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="TC3.ChannelAccess" Type="Str">writeonly</Property>
				<Property Name="VI Deployed.ChannelAccess" Type="Str">readonly</Property>
				<Property Name="wsn.ExtRam.DefaultIovDepth" Type="UInt">2</Property>
				<Property Name="wsn.ExtRam.EioSize" Type="UInt">0</Property>
				<Property Name="wsn.ExtRam.ExtRamSize" Type="UInt">0</Property>
				<Property Name="wsn.ExtRam.IovSize" Type="UInt">157</Property>
				<Property Name="wsn.ExtRam.MaxIntRamHeapSize" Type="UInt">5030</Property>
				<Property Name="wsn.NodeConfigCRCName" Type="Str">4123725953</Property>
				<Property Name="wsn.NodeConfigName" Type="Bin">0$^Y&lt;7QA&gt;G6S=WFP&lt;DUC-3YQ)C"F&lt;G.P:'FO:TUC&gt;82G,4AC0TY+0%Z%)#"N&lt;W2V&lt;'6*2$UC-T5T)C"O97VF03*/&lt;W2F-C)A&lt;7FT03)R.$=V.T1W.T1Q-D1Q.D%Q-49R-%)U241Z-D!V.T5T.%5S2$-T-T)T-4-S-$!Q-$!Q-$!R.$""-4."-D!Q-$!W-4!U-$)Q-4!S.41U-T!Q-$1S-4)Q-%%T-TET/$B$-T!Q/$"&amp;-T1U-$!Q-$!Q-$!S-$)Q-$EQ-$!Q-$!Q-$!Q2$!Q-D1V-$!Q-$!Q-$!S-D)Q-%*$-U1V246$-T!Q1T!U241V-$!Q-$!Q-$!S-T)Q-$1Q.DAR/46#2$!W/$%Z.4.%-$!Q-$!Q-$!Q-D"%-4%V.$9Y.D5X-D:%.E9W-T:'.T5X-$:$.D5S-$5U.TEX-$9V-$!Q-$!Y-$!Q-42"-$%Q-42#-$)Q-45U-$-Q-41V-$1Q-45S-$5Q-45T-$9Q-42&amp;-$=Q-41S-$!Q-T"".$-U141T-D!V-T:'.T5X-D9T.D5Q-$!Q-$-Q-$"$.$EW24=U.D5X-D:&amp;.D%W1T)Q.$-U141T-$%Q-T-Q-D!U-T!S-$1T-D-V-D!U-T!Q-$!S.$!Q-$%W-4!U-$!Q-4"$.59V2D9T.E9W249W.DEW.T6'.59U.$1Z-$!Q-4%Q-$%Q-$!Q-$!Q-$!Q-$%Q-$!Q-$!Q-$!Q-$!W24!Q-$)W-4!U-$%Q-4!T.$1U/42'-$!Q-4%Q-$%Q-$!Q-$!Q-$!Q-$%Q-$!Q-$!Q-$!R-D!Q241U.$EU2D)Q.$1X-D9Z.T9W.4)Q.%1W2D9U.D5Q-$!Q-$1Q-$!Y.41X-D9Z.T-X.$9R.T1W.4!R-%5U.$=S.DEX.D9V-D!U1T:'.T=S-$2'.E5W1T=Z-$)Q2D1U.T)W/4=W.D5S-$1Y.DEW.T9Y-D!U2D:&amp;.E-X/4!T-4)U.$=S.DEX.D9V-D!U/$9Z.D=W/$)Q.D%W249U-D!U1T:'.T=Q-$!Q-T1Q-$!Q.D-Q-4!T-$%R/46'.59W-T:'.E5W.D9Z.D=V2D6'.4-W-4:%.T!W1T9V-D!U/4:&amp;.T1W.4=S.T9W-4:$-$!Q-4AR-D!Q/%.%1U.$1T.%-$!V-%-T.$=Q-$!Q14!U-$!Q-$!S24!Q-$%W-T!R-$-Q-4%T.59V2D9T.E9W249W.DEW.T6'.59U/$9V.D%X-D=U.D)W.49R.T1Q-$!R/$%S-$!Y1U2$1U.$-U1Q-$!Q1D1U-D!Q-$!X.$1S-$!Q-$*"-$!Q-D9T-$%Q-D!R-%9U-D9R.T1X.$9V.T)X/4)Q.49W2D:$.T1W-49X.D5Q-$!R-$1S-$!U-$!Q-$!Q-$!Q-$!Q-D!U-4!Q-$!Q-$!Q-$!Q-$)X-$!Q-T9T-$%Q-D!R-%-U1T9Z.E5W1D)Q.4%X.49R.E-W/4=U.TEQ-$!R-TAS-$"&amp;-$!Q-$!Q-$!Q-$!Q1TAU-D!Q-$!Q-$!Q-$!Q-$)T-$!Q.$9T-$%Q-$!R-%)V.D1Z-D!U.$9V.T!W1T:'.TEW.49U-$!Q-4%Q-$%Q-$!Q-$!Q-$!Q-$%Q-$!Q-$!Q-$!Q-$!S.D!Q-$5W-T!R-$!Q-4"&amp;.$5X/$=U.D5X-D:&amp;.D%W1T)Q.4!W2D=X.D5X-D!Q-$%R-$!R-$!Q-$!Q-$!Q-$!R-$!Q-$!Q-$!Q-$!Q-D-Q-$!W.D-Q-4!Q-$%Q1D2%.D5X-T9Y-D!V-D:'.T5X.$9V.T)Q-$!R-4!Q-4!Q-$!Q-$!Q-$!Q-4!Q-$!Q-$!Q-$!Q-$5Q.%1U2$1Z/$)C)$Y+#4R16#"D;'&amp;O372F&lt;H1^)D!C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-#)A&gt;G&amp;M03)Q)C!P0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D%C)(:B&lt;$UC-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)R.D=X.T1X-C)A=W6M5GZH37ZE:8A^)D!C)$Y+#1E]16255F-A982U=EFO:'6Y03)Q)C"W97Q^)D!C)#]_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-3)A&gt;G&amp;M03)Q)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D-T.45U/41U)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D!C)(:B&lt;$UC-#)A,TY+#1E]16255F-A982U=EFO:'6Y03)R)C"W97Q^)D!C)#]_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC.4!T-T)U-49C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-#)A&gt;G&amp;M03)Q)C!P0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D%C)(:B&lt;$UC-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)W.T%X.$1Q-#)A=W6M5GZH37ZE:8A^)D!C)$Y+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)Y-TEV-4AX-C)A=W6M5GZH37ZE:8A^)D!C)$Y+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)R-$!X-DET.$1C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-4%X.4!W/$%W)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D%T.$-U/$AQ-#)A=W6M5GZH37ZE:8A^)D!C)$Y+#1E]16255F-A982U=EFO:'6Y03)Q)C"W97Q^)D!C)#]_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-45R-4)W-D=S)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*#4R"6&amp;235S"B&gt;(2S37ZE:8A^)D!C)(:B&lt;$UC-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)R.D=Z-$-X.$1C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0%&amp;56&amp;*4)'&amp;U&gt;(**&lt;G2F?$UC-#)A&gt;G&amp;M03)Q)C!P0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D%Y.$9Y-4)R.C)A=W6M5GZH37ZE:8A^)D!C)$Y+#1E]16255F-A982U=EFO:'6Y03)Q)C"W97Q^)D!C)#]_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-D!R.4)T-D!Q)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*#4R715QA&gt;G&amp;M6(FQ:4UC-C)A&gt;G&amp;M03)V,D!Q-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)S-4AT.D5Z.4)C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE*0&amp;:"4#"W97R5?8"F03)S)C"W97Q^)D9R,D!Q-#)A,TY+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)S-T5S-$AX-$1C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-D5S-$5R.$5W)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*0#^16$Y+#4R16#"D;'&amp;O372F&lt;H1^)D)W/$AZ.$)Q/#)A=W6M5GZH37ZE:8A^)D!C)$Y+#4QP5&amp;1_#AE]5&amp;1A9WBB&lt;EFE:7ZU03)S/$5X-T9Z.D!C)(.F&lt;&amp;*O:UFO:'6Y03)Q)C!_#AE],V"50AI*0&amp;"5)'.I97Z*:'6O&gt;$UC-T!S.4=Z.T%S)C"T:7R3&lt;G&gt;*&lt;G2F?$UC-#)A0AI*0#^16$Y+0#^/2$Y+</Property>
				<Property Name="wsn.NodeSerialNumber" Type="UInt">21310370</Property>
				<Property Name="wsn.NodeType" Type="UInt">353</Property>
				<Property Name="wsn.NodeTypeName" Type="Str">NI WSN-3212</Property>
				<Property Name="wsn.Udv.Types" Type="Str">..........</Property>
				<Property Name="WSN_Node_Identity_ID" Type="UInt">2</Property>
				<Item Name="Battery Voltage" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">4</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">Battery Voltage</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO0" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">0</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO0</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO1" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">1</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO1</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO2" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">2</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO2</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="DIO3" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">3</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Output</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">DIO3</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="External Power" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">7</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">External Power</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="Link Quality" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">5</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">Link Quality</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="Mesh Router" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">8</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">Mesh Router</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="TC0" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">0</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">True</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">TC0</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="TC1" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">1</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">True</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">TC1</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="TC2" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">2</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">TC2</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="TC3" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">3</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">TC3</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">'1!!!")!A!1!!!!"!!5!#1!!!1!!!!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
				<Item Name="VI Deployed" Type="Variable">
					<Property Name="featurePacks" Type="Str">Industrial</Property>
					<Property Name="Industrial:BufferingEnabled" Type="Str">False</Property>
					<Property Name="Industrial:ChannelIndex" Type="Str">6</Property>
					<Property Name="Industrial:EnableTimestamp" Type="Str">False</Property>
					<Property Name="Industrial:IODirection" Type="Str">Input</Property>
					<Property Name="Industrial:IsNetworkPublished" Type="Str">True</Property>
					<Property Name="Industrial:Mode" Type="Str">1</Property>
					<Property Name="Industrial:PhysicalName" Type="Str">VI Deployed</Property>
					<Property Name="Industrial:PublishedReadOnly" Type="Str">False</Property>
					<Property Name="Industrial:RSI" Type="Str">False</Property>
					<Property Name="Network:BuffSize" Type="Str">50</Property>
					<Property Name="Network:UseBinding" Type="Str">False</Property>
					<Property Name="Network:UseBuffering" Type="Str">True</Property>
					<Property Name="numTypedefs" Type="UInt">0</Property>
					<Property Name="type" Type="Str">Industrial</Property>
					<Property Name="typeDesc" Type="Bin">&amp;1!!!")!A!1!!!!"!!1!)1!"!!!!!!!!!!</Property>
					<Property Name="wsn.VariableMaxLength" Type="UInt">1</Property>
				</Item>
			</Item>
		</Item>
		<Item Name="依赖关系" Type="Dependencies"/>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
</Project>
