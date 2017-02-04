[Variables]
CornerEvent=idle

[BGMask]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBG]
ImageFlip=Both
X=0
Y=0
DynamicVariables=1

[HorizontalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=[BGMask:W]
Y=#GlowPadding#
W=([Width]-[BGMask:W]+#GlowPadding#+#BoxPadding#*2)
H=([BGMask:H]-#GlowPadding#)
DynamicVariables=1

[VerticalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=#GlowPadding#
Y=[BGMask:H]
W=([Width]+#BoxPadding#*2)
H=([Height]-[BGMask:H]+#GlowPadding#+#BoxPadding#*2)
DynamicVariables=1

[BGMaskMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask_mini.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBGMini]
ImageFlip=Both
X=0
Y=0
DynamicVariables=1

[HorizontalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=[BGMaskMini:W]
Y=#GlowPaddingMini#
W=([WidthMini]-[BGMaskMini:W]+#GlowPaddingMini#+(#BoxPaddingMini#*2))
H=([BGMaskMini:H]-#GlowPaddingMini#)
DynamicVariables=1

[VerticalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=#GlowPaddingMini#
Y=[BGMaskMini:H]
W=([WidthMini]+(#BoxPaddingMini#*2))
H=([HeightMini]-[BGMaskMini:H]+#GlowPaddingMini#+(#BoxPaddingMini#*2))
DynamicVariables=1

[Anchor]
Meter=Image
SolidColor=0,0,0,0
X=(#BoxPadding#+#GlowPadding#)
Y=(#BoxPadding#+#GlowPadding#)
W=0
H=0
DynamicVariables=1

[AnchorMini]
Meter=Image
SolidColor=0,0,0,0
X=(#BoxPaddingMini#+#GlowPaddingMini#)
Y=(#BoxPaddingMini#+#GlowPaddingMini#)
W=0
H=0
DynamicVariables=1

[Corner]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#.png"
X=0
Y=0
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMain]
ImageFlip=Both
DynamicVariables=1
MouseOverAction=[!SetVariable "CornerEvent" "hover"][!Redraw]
MouseLeaveAction=[!SetVariable "CornerEvent" "idle"][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "#CurrentWidget#Mini" "[ChangeType]" "#@#settings.inc"][!SetOptionGroup "MiniControl" "IsMini" "[ChangeType]"][!SetOption "ChangeType" "String" "[ChangeType]"][!Redraw]

[CornerMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#_mini.png"
X=0
Y=0
ImageFlip=Both
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMainMini]
DynamicVariables=1
