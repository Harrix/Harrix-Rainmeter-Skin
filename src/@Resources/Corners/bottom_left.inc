[Variables]
CornerEvent=idle

[BGMask]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBG]
ImageFlip=Horizontal
X=0
Y=(#CurrentHMax#-[BGMask:H])
DynamicVariables=1

[HorizontalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=[BGMask:W]
Y=(#CurrentHMax#-[BGMask:H])
W=([Width]-[BGMask:W]+#GlowPadding#+#BoxPadding#*2)
H=([BGMask:H]-#GlowPadding#)
DynamicVariables=1

[VerticalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=#GlowPadding#
Y=(#CurrentHMax#-[Height]-#GlowPadding#-#BoxPadding#*2)
W=([Width]+#BoxPadding#*2)
H=([Height]+#BoxPadding#*2-[BGMask:H]+#GlowPadding#)
DynamicVariables=1

[BGMaskMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask_mini.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBGMini]
ImageFlip=Horizontal
X=0
Y=(#CurrentHMax#-[BGMaskMini:H])
DynamicVariables=1

[HorizontalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=[BGMaskMini:W]
Y=(#CurrentHMax#-[BGMaskMini:H])
W=([WidthMini]+#BoxPaddingMini#*2-[BGMaskMini:W]+#GlowPaddingMini#)
H=([BGMaskMini:H]-#GlowPaddingMini#)
DynamicVariables=1

[VerticalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=#GlowPaddingMini#
Y=(#CurrentHMax#-[HeightMini]-#GlowPaddingMini#-#BoxPaddingMini#*2)
W=([WidthMini]+#BoxPaddingMini#*2)
H=([HeightMini]+#BoxPaddingMini#*2-[BGMaskMini:H]+#GlowPaddingMini#)
DynamicVariables=1

[Anchor]
Meter=Image
SolidColor=0,0,0,0
X=(#BoxPadding#+#GlowPadding#)
Y=(#CurrentHMax#-[Height]-#BoxPadding#-#GlowPadding#)
W=0
H=0
DynamicVariables=1

[AnchorMini]
Meter=Image
SolidColor=0,0,0,0
X=(#BoxPaddingMini#+#GlowPaddingMini#)
Y=(#CurrentHMax#-[HeightMini]-#BoxPaddingMini#-#GlowPaddingMini#)
W=0
H=0
DynamicVariables=1

[Corner]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#.png"
X=0
Y=(#CurrentHMax#-[Corner:H])
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMain]
ImageFlip=Horizontal
DynamicVariables=1
MouseOverAction=[!SetVariable "CornerEvent" "hover"][!Redraw]
MouseLeaveAction=[!SetVariable "CornerEvent" "idle"][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "#CurrentWidget#Mini" "[ChangeType]" "#@#settings.inc"][!SetOptionGroup "MiniControl" "IsMini" "[ChangeType]"][!SetOption "ChangeType" "String" "[ChangeType]"][!Redraw]

[CornerMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#_mini.png"
X=0
Y=(#CurrentHMax#-[CornerMini:H])
ImageFlip=Horizontal
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMainMini]
DynamicVariables=1
