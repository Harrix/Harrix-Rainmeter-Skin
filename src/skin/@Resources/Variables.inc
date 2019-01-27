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
Language = ru

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
