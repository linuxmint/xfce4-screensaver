/* automatically generated from xfce4-screensaver-dialog.ui */
#ifdef __SUNPRO_C
#pragma align 4 (xfce4_screensaver_dialog_ui)
#endif
#ifdef __GNUC__
static const char xfce4_screensaver_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char xfce4_screensaver_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><object class=\"GtkImage\" id=\"image1\"><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">False</"
  "property><property name=\"pixel_size\">16</property><property name=\"ic"
  "on_name\">input-keyboard-symbolic</property><property name=\"use_fallba"
  "ck\">True</property></object><object class=\"GtkEventBox\" id=\"login_w"
  "indow\"><property name=\"name\">login_window</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "child><object class=\"GtkBox\" id=\"login_box\"><property name=\"name\""
  ">login_box</property><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"orientation\">ver"
  "tical</property><child><object class=\"GtkFrame\" id=\"content_frame\">"
  "<property name=\"name\">content_frame</property><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"label_xalign\">0</property><property name=\"shadow_type\">non"
  "e</property><child><object class=\"GtkGrid\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><property "
  "name=\"margin_left\">24</property><property name=\"margin_right\">24</p"
  "roperty><property name=\"margin_top\">24</property><property name=\"row"
  "_spacing\">6</property><property name=\"row_homogeneous\">True</propert"
  "y><child><object class=\"GtkFrame\" id=\"user_image_border\"><property "
  "name=\"name\">user_image_border</property><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"halign\">center</property><property name=\"valign\">center</propert"
  "y><property name=\"margin_right\">18</property><property name=\"label_x"
  "align\">0</property><property name=\"shadow_type\">none</property><chil"
  "d><object class=\"GtkImage\" id=\"auth-face-image\"><property name=\"na"
  "me\">user_image</property><property name=\"width_request\">80</property"
  "><property name=\"height_request\">80</property><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"pixel_size\">80</property><property name=\"icon_name\">avatar"
  "-default</property></object></child></object><packing><property name=\""
  "left_attach\">0</property><property name=\"top_attach\">0</property><pr"
  "operty name=\"height\">2</property></packing></child><child><object cla"
  "ss=\"GtkLabel\" id=\"auth-realname-label\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"tooltip_text\" translatable=\"yes\">%U</property><property name=\""
  "valign\">end</property><property name=\"hexpand\">True</property><prope"
  "rty name=\"vexpand\">True</property><property name=\"label\">&lt;span s"
  "ize=\"x-large\"&gt;%R&lt;/span&gt;</property><property name=\"use_marku"
  "p\">True</property><property name=\"xalign\">0</property></object><pack"
  "ing><property name=\"left_attach\">1</property><property name=\"top_att"
  "ach\">0</property></packing></child><child><object class=\"GtkBox\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Fal"
  "se</property><property name=\"valign\">start</property><child><object c"
  "lass=\"GtkEntry\" id=\"auth-prompt-entry\"><property name=\"name\">prom"
  "pt_entry</property><property name=\"width_request\">-1</property><prope"
  "rty name=\"can_focus\">True</property><property name=\"valign\">center<"
  "/property><property name=\"hexpand\">True</property><property name=\"vi"
  "sibility\">False</property><property name=\"activates_default\">True</p"
  "roperty><property name=\"primary_icon_activatable\">False</property><pr"
  "operty name=\"secondary_icon_activatable\">False</property><property na"
  "me=\"placeholder_text\" translatable=\"yes\">Enter your password</prope"
  "rty><property name=\"input_purpose\">password</property></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Tr"
  "ue</property><property name=\"position\">0</property></packing></child>"
  "<child><object class=\"GtkToggleButton\" id=\"keyboard-toggle\"><proper"
  "ty name=\"can_focus\">True</property><property name=\"receives_default\""
  ">True</property><property name=\"no_show_all\">True</property><property"
  " name=\"halign\">center</property><property name=\"valign\">center</pro"
  "perty><property name=\"image\">image1</property><property name=\"relief"
  "\">none</property></object><packing><property name=\"expand\">False</pr"
  "operty><property name=\"fill\">False</property><property name=\"positio"
  "n\">1</property></packing></child><child><object class=\"GtkBox\" id=\""
  "auth-prompt-kbd-layout-indicator\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"hal"
  "ign\">end</property><property name=\"valign\">center</property><child><"
  "placeholder/></child></object><packing><property name=\"expand\">False<"
  "/property><property name=\"fill\">True</property><property name=\"posit"
  "ion\">2</property></packing></child></object><packing><property name=\""
  "left_attach\">1</property><property name=\"top_attach\">1</property></p"
  "acking></child></object></child></object><packing><property name=\"expa"
  "nd\">True</property><property name=\"fill\">True</property><property na"
  "me=\"position\">0</property></packing></child><child><object class=\"Gt"
  "kInfoBar\" id=\"greeter_infobar\"><property name=\"name\">greeter_infob"
  "ar</property><property name=\"can_focus\">False</property><property nam"
  "e=\"no_show_all\">True</property><child internal-child=\"action_area\">"
  "<object class=\"GtkButtonBox\"><property name=\"can_focus\">False</prop"
  "erty></object><packing><property name=\"expand\">False</property><prope"
  "rty name=\"fill\">False</property><property name=\"position\">0</proper"
  "ty></packing></child><child internal-child=\"content_area\"><object cla"
  "ss=\"GtkBox\" id=\"infobar-content_area\"><property name=\"can_focus\">"
  "False</property><property name=\"spacing\">16</property><child><object "
  "class=\"GtkBox\" id=\"auth-prompt-box\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property><property name="
  "\"hexpand\">True</property><property name=\"orientation\">vertical</pro"
  "perty><child><object class=\"GtkLabel\" id=\"status-message-label\"><pr"
  "operty name=\"can_focus\">False</property><property name=\"no_show_all\""
  ">True</property><property name=\"hexpand\">True</property><property nam"
  "e=\"wrap\">True</property></object><packing><property name=\"expand\">T"
  "rue</property><property name=\"fill\">True</property><property name=\"p"
  "osition\">0</property></packing></child><child><object class=\"GtkLabel"
  "\" id=\"auth-prompt-label\"><property name=\"can_focus\">False</propert"
  "y><property name=\"no_show_all\">True</property><property name=\"hexpan"
  "d\">True</property><property name=\"xalign\">0.5</property><property na"
  "me=\"yalign\">0.5</property></object><packing><property name=\"expand\""
  ">False</property><property name=\"fill\">False</property><property name"
  "=\"position\">1</property></packing></child><child><object class=\"GtkL"
  "abel\" id=\"auth-capslock-label\"><property name=\"can_focus\">False</p"
  "roperty><property name=\"no_show_all\">True</property><property name=\""
  "hexpand\">True</property><property name=\"label\" translatable=\"yes\">"
  "You have the Caps Lock key on.</property></object><packing><property na"
  "me=\"expand\">False</property><property name=\"fill\">False</property><"
  "property name=\"position\">2</property></packing></child><child><object"
  " class=\"GtkLabel\" id=\"auth-status-label\"><property name=\"can_focus"
  "\">False</property><property name=\"no_show_all\">True</property><prope"
  "rty name=\"hexpand\">True</property></object><packing><property name=\""
  "expand\">False</property><property name=\"fill\">False</property><prope"
  "rty name=\"position\">3</property></packing></child></object><packing><"
  "property name=\"expand\">True</property><property name=\"fill\">True</p"
  "roperty><property name=\"position\">0</property></packing></child></obj"
  "ect><packing><property name=\"expand\">False</property><property name=\""
  "fill\">False</property><property name=\"position\">0</property></packin"
  "g></child></object><packing><property name=\"expand\">False</property><"
  "property name=\"fill\">True</property><property name=\"position\">1</pr"
  "operty></packing></child><child><object class=\"GtkFrame\" id=\"buttonb"
  "ox_frame\"><property name=\"name\">buttonbox_frame</property><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"label_xalign\">0</property><property name=\"shad"
  "ow_type\">none</property><child><object class=\"GtkBox\" id=\"auth-acti"
  "on-area\"><property name=\"visible\">True</property><property name=\"ca"
  "n_focus\">False</property><property name=\"halign\">end</property><prop"
  "erty name=\"margin_left\">24</property><property name=\"margin_right\">"
  "24</property><property name=\"margin_bottom\">24</property><property na"
  "me=\"spacing\">6</property><property name=\"homogeneous\">True</propert"
  "y><child><object class=\"GtkButton\" id=\"auth-switch-button\"><propert"
  "y name=\"label\" translatable=\"yes\">_Switch User</property><property "
  "name=\"visible\">True</property><property name=\"can_focus\">True</prop"
  "erty><property name=\"focus_on_click\">False</property><property name=\""
  "can_default\">True</property><property name=\"receives_default\">False<"
  "/property><property name=\"use_underline\">True</property></object><pac"
  "king><property name=\"expand\">False</property><property name=\"fill\">"
  "False</property><property name=\"position\">1</property></packing></chi"
  "ld><child><object class=\"GtkButton\" id=\"auth-logout-button\"><proper"
  "ty name=\"label\" translatable=\"yes\">_Log Out</property><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">True</propert"
  "y><property name=\"focus_on_click\">False</property><property name=\"ca"
  "n_default\">True</property><property name=\"receives_default\">False</p"
  "roperty><property name=\"use_underline\">True</property></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Tr"
  "ue</property><property name=\"position\">2</property></packing></child>"
  "<child><object class=\"GtkButton\" id=\"auth-cancel-button\"><property "
  "name=\"label\" translatable=\"yes\">_Cancel</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"focus_on_click\">False</property><property name=\"can_de"
  "fault\">True</property><property name=\"receives_default\">False</prope"
  "rty><property name=\"use_underline\">True</property></object><packing><"
  "property name=\"expand\">False</property><property name=\"fill\">True</"
  "property><property name=\"position\">3</property></packing></child><chi"
  "ld><object class=\"GtkButton\" id=\"auth-unlock-button\"><property name"
  "=\"label\" translatable=\"yes\">_Unlock</property><property name=\"name"
  "\">login_button</property><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">True</property><property name=\"can_default\""
  ">True</property><property name=\"receives_default\">False</property><pr"
  "operty name=\"use_underline\">True</property></object><packing><propert"
  "y name=\"expand\">False</property><property name=\"fill\">True</propert"
  "y><property name=\"position\">4</property></packing></child></object></"
  "child></object><packing><property name=\"expand\">False</property><prop"
  "erty name=\"fill\">True</property><property name=\"position\">2</proper"
  "ty></packing></child></object></child><style><class name=\"background\""
  "/><class name=\"keycap\"/></style></object><object class=\"GtkOverlay\""
  " id=\"lock-overlay\"><property name=\"name\">screen</property><property"
  " name=\"visible\">True</property><property name=\"can_focus\">False</pr"
  "operty><child><object class=\"GtkImage\" id=\"lock-image\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">False</prope"
  "rty><property name=\"stock\">gtk-missing-image</property></object><pack"
  "ing><property name=\"index\">-1</property></packing></child><style><cla"
  "ss name=\"lightdm-gtk-greeter\"/></style></object><object class=\"GtkBo"
  "x\" id=\"lock-panel\"><property name=\"name\">panel_window</property><p"
  "roperty name=\"visible\">True</property><property name=\"can_focus\">Fa"
  "lse</property><property name=\"spacing\">6</property><child><object cla"
  "ss=\"GtkLabel\" id=\"auth-hostname-label\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"margin_left\">6</property><property name=\"label\" translatable=\""
  "yes\">&lt;b&gt;%h&lt;/b&gt;</property><property name=\"use_markup\">Tru"
  "e</property></object><packing><property name=\"expand\">False</property"
  "><property name=\"fill\">True</property><property name=\"position\">0</"
  "property></packing></child><child type=\"center\"><object class=\"GtkLa"
  "bel\" id=\"auth-date-time-label\"><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">False</property><property name=\"marg"
  "in_right\">6</property><property name=\"label\" translatable=\"yes\">&l"
  "t;b&gt;%s&lt;/b&gt;</property><property name=\"use_markup\">True</prope"
  "rty><property name=\"xalign\">0.5</property></object><packing><property"
  " name=\"expand\">True</property><property name=\"fill\">True</property>"
  "<property name=\"position\">4</property></packing></child><child><objec"
  "t class=\"GtkImage\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"margin_right\">6<"
  "/property><property name=\"margin_top\">6</property><property name=\"ma"
  "rgin_bottom\">6</property><property name=\"pixel_size\">16</property><p"
  "roperty name=\"icon_name\">system-lock-screen-symbolic</property><prope"
  "rty name=\"icon_size\">1</property></object><packing><property name=\"e"
  "xpand\">False</property><property name=\"fill\">True</property><propert"
  "y name=\"pack_type\">end</property><property name=\"position\">3</prope"
  "rty></packing></child><style><class name=\"background\"/><class name=\""
  "panel\"/><class name=\"xfce4-panel\"/></style></object></interface>"
};

static const unsigned xfce4_screensaver_dialog_ui_length = 13204u;

