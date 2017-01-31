[Variables]
;Colors
ColorWhite = 255,255,255
ColorBlack = 0,0,0
ColorDark = 40,40,40
AlphaTransparentForDark = 190
AlphaTransparentForWhite = 100

;Common
ColorCommon = #ColorWhite#
Font = Open Sans

;App Icons
AppSize = 32
AppAlpha = 255
AppColor = #ColorCommon#
;AppIconName = icon.png
AppIconName = icon_color.png
AppX = 10
AppY = 10
MicrosoftWord = C:\Program Files (x86)\Microsoft Office\Office16\WINWORD.EXE
MicrosoftExcel = C:\Program Files (x86)\Microsoft Office\Office16\EXCEL.EXE
MicrosoftOneNote = C:\Program Files (x86)\Microsoft Office\Office16\ONENOTE.EXE
AdobePhotoshop = C:\Program Files\Adobe\Adobe Photoshop CC 2015\Photoshop.exe
AdobeLightroom = C:\Program Files\Adobe\Adobe Lightroom\lightroom.exe
AdobeIllustrator = C:\Program Files\Adobe\Adobe Illustrator CC 2015\Support Files\Contents\Windows\Illustrator.exe
FastStoneCapture = C:\Program Files (x86)\FastStone Capture\FSCapture.exe
SQLite = C:\Harrix\Dropbox\Programs\PortableSQLliteBrowser\SQLiteDatabaseBrowserPortable.exe
Qt = C:\Qt\Qt5.8.0_mingw_android\Tools\QtCreator\bin\qtcreator.exe
QtUnderVisualStudio = C:\Qt\Qt5.8.0\Tools\QtCreator\bin\qtcreator.exe
VisualStudio = C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\IDE\devenv.exe
Aimp = C:\Program Files (x86)\AIMP\AIMP.exe
Atom = C:\Users\sensor\AppData\Local\atom\app-1.13.0-beta6\atom.exe
GitHub = C:\Users\sensor\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\GitHub, Inc\GitHub.appref-ms
Notepad = C:\Program Files (x86)\Notepad++\notepad++.exe
KeePass = C:\Harrix\Dropbox\Programs\KeePass\KeePass.exe
TotalCommander = C:\Total Commander\TOTALCMD.EXE
MyComputer = Shell:::{20D04FE0-3AEA-1069-A2D8-08002B30309D}

;Clock
ClockTextAlpha = 255
ClockColor = #ColorCommon#,#ClockTextAlpha#
ClockTimeFontSize = 70
ClockDateFontSize = 14
ClockTimeAndDateWidth = 350
ClockTimeAndDateLineHeight = 103
ClockTimeAndDateXDate = -20
ClockTranslate = "Monday":"Понедельник", "Tuesday":"Вторник", "Wednesday":"Среда", "Thursday":"Четверг", "Friday":"Пятница", "Saturday":"Суббота", "Sunday":"Воскресенье", "January":"Января", "February":"Февраля", "March":"Марта", "April":"Апреля", "May":"Мая", "June":"Июня", "July":"Июля", "August":"Августа", "September":"Сентября", "October":"Октября", "November":"Ноября", "December":"Декабря"
ClockDialPath = #ROOTCONFIGPATH#@Resources\Clock Dials
ClockDialFileName = Clock dial 14.png
ClockDialSize = 128

;Weather
;Codes to take here: https://weather.codes/
Location = RSXX0267:1:RS
WeatherUpdate = 5000
Language = "ru"
WeatherAlpha = 255
WeatherColor = #ColorCommon#,#WeatherAlpha#
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
WeatherTranslate = "Now": "Сейчас", "Today":"Сегодня", "Tonight":"Ночью", "Tomorrow":"Завтра", "like":"как", "Monday":"Понедельник", "Tuesday":"Вторник", "Wednesday":"Среда", "Thursday":"Четверг", "Friday":"Пятница", "Saturday":"Суббота", "Sunday":"Воскресенье"

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
;CalendarTranslate
Mon = ПН
Tue = ВТ
Wed = СР
Thu = ЧТ
Fri = ПТ
Sat = СБ
Sun = ВС
January = Январь
February = Февраль
March = Март
April = Апрель
May = Май
June = Июнь
July = Июль
August = Август
September = Сентябрь
October = Октябрь
November = Ноябрь
December = Декабрь

;Info
InfoColor = #ColorCommon#
InfoFontAlpha = 255
InfoFontSize = 10
InfoTranslate = "cores":"ядра"
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