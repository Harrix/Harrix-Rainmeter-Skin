[Variables]
;Colors
ColorWhite = 255,255,255
ColorBlack = 0,0,0
ColorDark = 40,40,40
AlphaTransparentForDark = 190
AlphaTransparentForWhite = 100

;Common
ColorCommon = #ColorWhite#
Font = Roboto
;Language = en
Language = ru
;Language = de

;App Icons
AppSize = 32
AppAlpha = 255
AppColor = #ColorCommon#
;AppIconName = icon.png
AppIconName = icon_color.png
AppX = 10
AppY = 10

AdobeAfterEffects = C:\Program Files\Adobe\Adobe After Effects CC 2017\Support Files\AfterFX.exe
AdobeAudition = C:\Program Files\Adobe\Adobe Audition CC 2017\Adobe Audition CC.exe
AdobeBridge = C:\Program Files\Adobe\Adobe Bridge CC 2017\Bridge.exe
AdobeDreamweaver = C:\Program Files\Adobe\Adobe Dreamweaver CC 2017\Dreamweaver.exe
AdobeFlashProfessional = C:\Program Files (x86)\Adobe\Adobe Flash CS6\Flash.exe
AdobeIllustrator = C:\Program Files\Adobe\Adobe Illustrator CC 2017\Support Files\Contents\Windows\Illustrator.exe
AdobeInDesign = C:\Program Files\Adobe\Adobe InDesign CC 2017\InDesign.exe
AdobeLightroom = C:\Program Files\Adobe\Adobe Lightroom\lightroom.exe
AdobePhotoshop = C:\Program Files\Adobe\Adobe Photoshop CC 2017\Photoshop.exe
AdobePremierePro = C:\Program Files\Adobe\Adobe Premiere Pro CC 2017\Adobe Premiere Pro.exe
Aimp = C:\Program Files (x86)\AIMP\AIMP.exe
AndroidStudio = D:\Android\Android Studio\bin\studio64.exe
Atom = C:\Users\User\AppData\Local\atom\atom.exe
Dropbox = C:\Program Files (x86)\Dropbox\Client\Dropbox.exe
FastStoneCapture = C:\Program Files (x86)\FastStone Capture\FSCapture.exe
GitHub = C:\Users\sergi\AppData\Local\GitHubDesktop\GitHubDesktop.exe
GoogleChrome = C:\Program Files (x86)\Google\Chrome\Application\chrome.exe
KeePass = D:\Harrix\Dropbox\Programs\KeePass\KeePass.exe
MicrosoftAccess = C:\Program Files (x86)\Microsoft Office\root\Office16\MSACCESS.EXE
MicrosoftExcel = C:\Program Files (x86)\Microsoft Office\root\Office16\EXCEL.EXE
MicrosoftOneNote = C:\Program Files (x86)\Microsoft Office\root\Office16\ONENOTE.EXE
MicrosoftOutlook = C:\Program Files (x86)\Microsoft Office\root\Office16\OUTLOOK.EXE
MicrosoftPowerPoint = C:\Program Files (x86)\Microsoft Office\root\Office16\POWERPNT.EXE
MicrosoftPublisher = C:\Program Files (x86)\Microsoft Office\root\Office16\MSPUB.EXE
MicrosoftVisio =
MicrosoftWord = C:\Program Files (x86)\Microsoft Office\root\Office16\WINWORD.EXE
Notepad = C:\Program Files (x86)\Notepad++\notepad++.exe
OneDrive = C:\Users\User\AppData\Local\Microsoft\OneDrive\OneDrive.exe
Qt = D:\Qt\Tools\QtCreator\bin\qtcreator.exe
QtUnderVisualStudio = D:\Qt\Tools\QtCreator\bin\qtcreator.exe
SQLite = D:\Harrix\Dropbox\Programs\PortableSQLliteBrowser\SQLiteDatabaseBrowserPortable.exe
Skype = C:\Program Files (x86)\Skype\Phone\Skype.exe
Skyrim = C:\Program Files (x86)\Steam\steamapps\common\Skyrim\SkyrimLauncher.exe
Steam = C:\Program Files (x86)\Steam\Steam.exe
TotalCommander = C:\totalcmd\TOTALCMD64.EXE
VisualStudio = C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\devenv.exe
uTorrent = C:\Users\User\AppData\Roaming\uTorrent\uTorrent.exe
IntelliJIDEA = C:\Program Files\JetBrains\IntelliJ IDEA Community Edition 2017.3.1\bin\idea64.exe

;Clock
ClockTextAlpha = 255
ClockColor = #ColorCommon#,#ClockTextAlpha#
ClockTimeFontSize = 70
ClockDateFontSize = 14
ClockTimeAndDateWidth = 350
ClockTimeAndDateLineHeight = 103
ClockTimeAndDateXDate = -20
ClockDialPath = #ROOTCONFIGPATH#@Resources\Clock Dials
ClockDialFileName = Clock dial 14.png
ClockDialSize = 128

;Weather
;Codes to take here: https://weather.codes/
Location = RSXX0267:1:RS
WeatherUpdate = 5000
WeatherAlpha = 255
WeatherColor = #ColorCommon#,#WeatherAlpha#
WeatherIconColor = #WeatherColor#
;WeatherIconsPath = color
;WeatherIconsPath = color_white_cloud
;WeatherIconsPath = fill
;WeatherIconsPath = fill_color
;WeatherIconsPath = fill_color_white_cloud
WeatherIconsPath =
WeatherTempFontSize = 30
WeatherDescFontSize = 10
WeatherDayFontSize = 14
WeatherIconSize = 50

;Calendar
CalendarColor = #ColorCommon#
CalendarTodayColor = #ColorCommon#
CalendarTodayAlpha = 70
CalendarNotCurrentMonthAlpha = 100
CalendarCurrentMonthAlpha = 255
CalendarFontAlpha = 255
CalendarFontSize = 10
CalendarWeekStartsMonday = 1
CalendarCellWidth = 20
CalendarCellHeight = 20
CalendarHorizontalSpace = 10
CalendarBackgroundWidth = 220
CalendarWeekdaySpace = 25
CalendarWeekdaySpaceAfter = 20

;Info
InfoColor = #ColorCommon#
InfoFontAlpha = 255
InfoFontSize = 10
InfoCPURAMUptimeWidth = 220
InfoCPURAMUptimeHeight = 70
InfoCPURAMUptimeLineHeight = 20
InfoCPURAMLineHeight = 20
InfoCPURAMLineHeightLarge = 25
InfoFontSizeLarge = 14

;Background
BackgroundColor = #ColorBlack#
BackgroundAlpha = 70
BackgroundVerticalWidth = 470
BackgroundVerticalAppWidth = 55
BackgroundHorizontalHeight = 200
BackgroundCircleColor = #ColorBlack#
BackgroundCircleAlpha = 70
BackgroundCircleSize = 300
BackgroundCirclePath = #ROOTCONFIGPATH#@Resources\Circle

;Player
PlayerName = AIMP
PlayerButtonColor = #ColorCommon#
PlayerButtonAlpha = 255
PlayerFontColor = #ColorCommon#
PlayerFontAlpha = 255
PlayerButtonSize = 14
PlayerButtonSpace = 10
PlayerButtonPath = #ROOTCONFIGPATH#@Resources\Player
PlayerPositionTextPadding = -3
PlayerTextWidth = 300
PlayerPositionFontSize = 12
PlayerTitleFontSize = 14
PlayerArtistFontSize = 10
PlayerAlbumFontSize = 10

;CalendarStyle
[CalendarStyle]
FontColor = #CalendarColor#,#CalendarFontAlpha#
FontFace = #Font#
FontSize = #CalendarFontSize#
StringStyle = Normal
AntiAlias = 1
DynamicVariables = 1
StringAlign = Right
W = #CalendarCellWidth#
H = #CalendarCellHeight#
X = (#CalendarCellWidth# + #CalendarHorizontalSpace#)r
Y = r

;InfoStyle
[InfoStyle]
FontColor = #InfoColor#,#InfoFontAlpha#
FontFace = #Font#
FontSize = #InfoFontSize#
StringAlign = Left
StringStyle = Normal
AntiAlias = 1
DynamicVariables = 1
