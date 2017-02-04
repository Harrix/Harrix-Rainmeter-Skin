[Variables]
CornerEvent=idle

[BGMask]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBG]
ImageFlip=None
X=(#CurrentWMax#-[BGMask:W])
Y=(#CurrentHMax#-[BGMask:H])
DynamicVariables=1

[HorizontalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=(#CurrentWMax#-[Width]-#BoxPadding#*2-#GlowPadding#)
Y=(#CurrentHMax#-[BGMask:H])
W=([Width]-[BGMask:W]+#BoxPadding#*2+#GlowPadding#)
H=([BGMask:H]-#GlowPadding#)
DynamicVariables=1

[VerticalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=(#CurrentWMax#-[Width]-#BoxPadding#*2-#GlowPadding#)
Y=(#CurrentHMax#-[Height]-#GlowPadding#-#BoxPadding#*2)
W=([Width]-#GlowPadding#+#BoxPadding#*2+#GlowPadding#)
H=([Height]+#BoxPadding#*2-[BGMask:H]+#GlowPadding#)
DynamicVariables=1

[BGMaskMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask_mini.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBGMini]
ImageFlip=None
X=(#CurrentWMax#-[BGMaskMini:W])
Y=(#CurrentHMax#-[BGMaskMini:H])
DynamicVariables=1

[HorizontalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=(#CurrentWMax#-[WidthMini]-#GlowPaddingMini#-#BoxPaddingMini#*2)
Y=(#CurrentHMax#-[BGMaskMini:H])
W=([WidthMini]-[BGMaskMini:W]+#BoxPaddingMini#*2+#GlowPaddingMini#)
H=([BGMaskMini:H]-#GlowPaddingMini#)
DynamicVariables=1

[VerticalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=(#CurrentWMax#-[WidthMini]-#BoxPaddingMini#*2-#GlowPaddingMini#)
Y=(#CurrentHMax#-[HeightMini]-#BoxPaddingMini#*2-#GlowPaddingMini#)
W=([WidthMini]+#BoxPaddingMini#*2)
H=([HeightMini]+#BoxPaddingMini#*2-[BGMaskMini:H]+#GlowPaddingMini#)
DynamicVariables=1

[Anchor]
Meter=Image
SolidColor=0,0,0,0
X=(#CurrentWMax#-[Width]-#BoxPadding#-#GlowPadding#)
Y=(#CurrentHMax#-[Height]-#BoxPadding#-#GlowPadding#)
W=0
H=0
DynamicVariables=1

[AnchorMini]
Meter=Image
SolidColor=0,0,0,0
X=(#CurrentWMax#-[WidthMini]-#BoxPaddingMini#-#GlowPaddingMini#)
Y=(#CurrentHMax#-[HeightMini]-#BoxPaddingMini#-#GlowPaddingMini#)
W=0
H=0
DynamicVariables=1

[Corner]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#.png"
X=(#CurrentWMax#-[Corner:W])
Y=(#CurrentHMax#-[Corner:H])
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMain]
DynamicVariables=1
MouseOverAction=[!SetVariable "CornerEvent" "hover"][!Redraw]
MouseLeaveAction=[!SetVariable "CornerEvent" "idle"][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "#CurrentWidget#Mini" "[ChangeType]" "#@#settings.inc"][!SetOptionGroup "MiniControl" "IsMini" "[ChangeType]"][!SetOption "ChangeType" "String" "[ChangeType]"][!Redraw]

[CornerMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#_mini.png"
X=(#CurrentWMax#-[CornerMini:W])
Y=(#CurrentHMax#-[CornerMini:H])
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMainMini]
DynamicVariables=1
