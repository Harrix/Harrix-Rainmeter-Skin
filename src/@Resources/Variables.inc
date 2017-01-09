[Variables]
;Colors
ColorWhite = 255,255,255
ColorBlack = 0,0,0
ColorTeal = 25,165,165
ColorDark = 95,95,95

;Common
ColorCommon = #ColorDark#
Font = Open Sans

;App Icons
AppSize = 32
AppAlpha = 255
AppColor = #ColorCommon#
AppX = 10R
AppY = 10R
MicrosoftWord = C:\Program Files (x86)\Microsoft Office\Office16\WINWORD.EXE
MicrosoftExcel = C:\Program Files (x86)\Microsoft Office\Office16\EXCEL.EXE
MicrosoftOneNote = C:\Program Files (x86)\Microsoft Office\Office16\ONENOTE.EXE
Photoshop = C:\Program Files\Adobe\Adobe Photoshop CC 2015\Photoshop.exe
Lightroom = C:\Program Files\Adobe\Adobe Lightroom\lightroom.exe
Illustrator = C:\Program Files\Adobe\Adobe Illustrator CC 2015\Support Files\Contents\Windows\Illustrator.exe
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

;Clock
ClockTextAlpha = 255
ClockColor = #ColorCommon#,#ClockTextAlpha#
ClockTimeFontSize = 70
ClockDateFontSize = 14
ClockTranslate = "Monday":"Понедельник", "Tuesday":"Вторник", "Wednesday":"Среда", "Thursday":"Четверг", "Friday":"Пятница", "Saturday":"Суббота", "Sunday":"Воскресенье", "January":"Января", "February":"Февраля", "March":"Марта", "April":"Апреля", "May":"Мая", "June":"Июня", "July":"Июля", "August":"Августа", "September":"Сентября", "October":"Октября", "November":"Ноября", "December":"Декабря"

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
CalendarTodayColor = #ColorTeal#
CalendarTodayAlpha = 70
CalendarNotCurrentMonthAlpha = 100
CalendarFontAlpha = 255
FontSize = 10
CalendarWeekStartsMonday = 1
CalendarCellWidth = 20
CalendarCellHeight = 20
CalendarVerticalSpace = 0
CalendarHorizontalSpace = 10
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
;CalendarStyle
[CalendarStyle]
FontColor = #CalendarColor#,#CalendarFontAlpha#
FontFace = #Font#
FontSize = #FontSize#
StringStyle = Normal
AntiAlias = 1
DynamicVariables = 1
StringAlign = Right
W = #CalendarCellWidth#
H = #CalendarCellHeight#
X = (#CalendarCellWidth# + #CalendarHorizontalSpace#)r
Y = r