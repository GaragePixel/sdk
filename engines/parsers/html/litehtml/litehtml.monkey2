
Namespace sdk.engines.litehtml

#Import "makefile.monkey2"

#Import "litehtml/include/*.h"

#Import "native/litehtml_glue.h"
#Import "native/litehtml_glue.cpp"

Extern

Struct web_color="litehtml::web_color"
	Field blue:UByte
	Field green:UByte
	Field red:UByte
	Field alpha:UByte
End

Struct size="litehtml::size"
	Field width:Int
	Field height:Int
End

Struct position="litehtml::position"
	Field x:Int
	Field y:Int
	Field width:Int
	Field height:Int
End

Enum font_style="litehtml::font_style"
End

'Const fontStyleNormal:font_style
'Const fontStyleItalic:font_style

Const font_decoration_none:UInt
Const font_decoration_underline:UInt
Const font_decoration_linethrough:UInt
Const font_decoration_overline:UInt

Struct font_metrics="litehtml::font_metrics"
	Field height:Int
	Field ascent:Int
	Field descent:Int
	Field x_height:Int
	Field draw_spaces:Bool
End

Enum list_style_type="litehtml::list_style_type"
End

Const list_style_type_none:list_style_type="litehtml::list_style_type_none"
Const list_style_type_circle:list_style_type="litehtml::list_style_type_circle"
Const list_style_type_disc:list_style_type="litehtml::list_style_type_disc"
Const list_style_type_square:list_style_type="litehtml::list_style_type_square"
#rem
Const list_style_type_armenian:list_style_type
Const list_style_type_cjk_ideographic:list_style_type
Const list_style_type_decimal:list_style_type
Const list_style_type_decimal_leading_zero:list_style_type
Const list_style_type_georgian:list_style_type
Const list_style_type_hebrew:list_style_type
Const list_style_type_hiragana:list_style_type
Const list_style_type_hiragana_iroha:list_style_type
Const list_style_type_katakana:list_style_type
Const list_style_type_katakana_iroha:list_style_type
Const list_style_type_lower_alpha:list_style_type
Const list_style_type_lower_greek:list_style_type
Const list_style_type_lower_latin:list_style_type
Const list_style_type_lower_roman:list_style_type
Const list_style_type_upper_alpha:list_style_type
Const list_style_type_upper_latin:list_style_type
Const list_style_type_upper_roman:list_style_type
#end

Struct list_marker="litehtml::list_marker"
	'tstring			image;
	'const tchar_t*	baseurl;
	Field marker_type:list_style_type
	Field color:web_color
	Field pos:position
End

Enum border_style
End

Const border_style_none:border_style="litehtml::border_style_none"
Const border_style_hidden:border_style="litehtml::border_style_hidden"
Const border_style_dotted:border_style
Const border_style_dashed:border_style
Const border_style_solid:border_style="litehtml::border_style_solid"
Const border_style_double:border_style
Const border_style_groove:border_style
Const border_style_ridge:border_style
Const border_style_inset:border_style
Const border_style_outset:border_style

Struct border="litehtml::border"
	Field width:Int
	Field style:border_style
	Field color:web_color
End

Struct border_radiuses="litehtml::border_radiuses"
	Field top_left_x:Int
	Field top_left_y:Int
	Field top_right_x:Int
	Field top_right_y:Int
	Field bottom_right_x:Int
	Field bottom_right_y:Int
	Field bottom_left_x:Int
	Field bottom_left_y:Int
End

Struct borders="litehtml::borders"
	Field left:border
	Field top:border
	Field right:border
	Field bottom:border
	Field radius:border_radiuses
End

Enum background_attachment
End

Const background_attachment_scroll:background_attachment
Const background_attachment_fixed:background_attachment

Enum background_repeat
End

Const background_repeat_repeat:background_repeat
Const background_repeat_repeat_x:background_repeat
Const background_repeat_repeat_y:background_repeat
Const background_repeat_no_repeat:background_repeat

Struct background_paint="litehtml::background_paint"
	'tstring					image;
	'tstring					baseurl;
	Field attachment:background_attachment
	Field repeat_:background_repeat	="repeat"
	Field color:web_color
	Field clip_box:position
	Field origin_box:position
	Field border_box:position
	Field border_radius:border_radiuses	
	Field image_size:size
	Field position_x:Int
	Field position_y:Int
	Field is_root:Bool
End

Enum media_type="litehtml::media_type"
End

Const media_type_none:media_type
Const media_type_all:media_type
Const media_type_screen:media_type="litehtml::media_type_screen"
Const media_type_print:media_type
Const media_type_braille:media_type
Const media_type_embossed:media_type
Const media_type_handheld:media_type
Const media_type_projection:media_type
Const media_type_speech:media_type
Const media_type_tty:media_type
Const media_type_tv:media_type

Struct media_features="litehtml::media_features"
	Field type:media_type
	Field width:Int				' (pixels) For continuous media, this is the width of the viewport including the size of a rendered scroll bar (if any). For paged media, this is the width of the page box.
	Field height:Int			' (pixels) The height of the targeted display area of the output device. For continuous media, this is the height of the viewport including the size of a rendered scroll bar (if any). For paged media, this is the height of the page box.
	Field device_width:Int		' (pixels) The width of the rendering surface of the output device. For continuous media, this is the width of the screen. For paged media, this is the width of the page sheet size.
	Field device_height:Int		' (pixels) The height of the rendering surface of the output device. For continuous media, this is the height of the screen. For paged media, this is the height of the page sheet size.
	Field color:Int				' The number of bits per color component of the output device. If the device is not a color device, the value is zero.
	Field color_index:Int		' The number of entries in the color lookup table of the output device. If the device does not use a color lookup table, the value is zero.
	Field monochrome:Int		' The number of bits per pixel in a monochrome frame buffer. If the device is not a monochrome device, the output device value will be 0.
	Field resolution:Int		' The resolution of the output device (in DPI)
End

Class document_container="bb_litehtml_document_container"

	Method create_font:Object( faceName:String,size:Int,weight:Int,style:font_style,docoration:UInt,fm:font_metrics Ptr ) Abstract="_create_font"

	Method delete_font( font:Object ) Abstract="_delete_font"
	
	Method text_width:Int( text:String,font:Object ) Abstract="_text_width"

	Method draw_text( hdc:Object,text:String,font:Object,color:web_color Ptr,pos:position Ptr ) Abstract="_draw_text"
	
	Method pt_to_px:Int( pt:Int ) Abstract="_pt_to_px"
	
	Method get_default_font_size:Int() Abstract="_get_default_font_size"
	
	Method get_default_font_name:String() Abstract="_get_default_font_name"
	
	Method draw_list_marker( hdc:Object,marker:list_marker Ptr ) Abstract="_draw_list_marker"
	
	Method load_image( src:String,baseurl:String,redraw_on_ready:Bool ) Abstract="_load_image"
	
	Method get_image_size( src:String,baseurl:String,sz:size Ptr ) Abstract="_get_image_size"
	
	Method draw_background( hdc:Object,img_src:String,img_baseurl:String,bg:background_paint Ptr ) Abstract="_draw_background"
	
	Method draw_borders( hdc:Object,bordrs:borders Ptr,pos:position Ptr,root:Bool ) Abstract="_draw_borders"

	Method set_caption( caption:String ) Abstract="_set_caption"
	
	Method set_base_url( baseurl:String ) Abstract="_set_base_url"
	
	Method on_anchor_click( url:String ) Abstract="_on_anchor_click"
	
	Method set_cursor( cursor:String ) Abstract="_set_cursor"	
	
	Method import_css:String( url:String,baseurl:String ) Abstract="_import_css"
	
	Method set_clip( pos:position Ptr,radiuses:border_radiuses Ptr ) Abstract="_set_clip"
	
	Method del_clip() Abstract="_del_clip"
	
	Method get_client_rect( client:position Ptr ) Abstract="_get_client_rect"
	
	Method get_media_features( media:media_features Ptr ) Abstract="_get_media_features"
	
	Method get_language:String() Abstract="_get_language"
	
	Method get_culture:String() Abstract="_get_culture"

End

Class context="bb_litehtml_context"

	Method load_master_stylesheet( master_css:String )
	
End

Class document="bb_litehtml_document"

	Method New( source:String,container:document_container,context:context )
	
	Method render( max_width:Int )
	
	Method draw( hdc:Object,x:Int,y:Int,clip:position Ptr )
	
	Method width:Int()
	
	Method height:Int()
	
	Method media_changed()
	
	Method on_mouse_over( x:Int,y:Int,client_x:Int,client_y:Int )

	Method on_lbutton_down( x:Int,y:Int,client_x:Int,client_y:Int )

	Method on_lbutton_up( x:Int,y:Int,client_x:Int,client_y:Int )

	Method on_mouse_leave()

End
