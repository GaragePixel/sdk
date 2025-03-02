
#include "sdk/sdk.buildv1.1.15/windows_debug_mx/include/sdk_generators_2html_2hoedown_2hoedown.h"

#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_types.h"

bbString g_sdk_generators_hoedown_MarkdownToHtml(bbString l_markdown,bbBool l_toc){
  bbDBFrame db_f{"MarkdownToHtml:monkey.types.String(markdown:monkey.types.String,toc:monkey.types.Bool)","Z:/$$5__MAD2nd/__MONKEY2/Monkey2-v2018.09b/modules/sdk/generators/html/hoedown/hoedown.monkey2"};
  bbDBLocal("markdown",&l_markdown);
  bbDBLocal("toc",&l_toc);
  bbDBStmt(483335);
  hoedown_buffer* l_ob=hoedown_buffer_new(4096);
  bbDBLocal("ob",&l_ob);
  bbDBStmt(491527);
  hoedown_renderer* l_r{};
  bbDBLocal("r",&l_r);
  bbDBStmt(499713);
  if(l_toc){
    bbDBBlock db_blk;
    bbDBStmt(503810);
    l_r=hoedown_html_toc_renderer_new(10);
  }else{
    bbDBStmt(507905);
    bbDBBlock db_blk;
    bbDBStmt(512002);
    l_r=hoedown_html_renderer_new((hoedown_html_flags)0,10);
  }
  bbDBStmt(524295);
  hoedown_document* l_doc=hoedown_document_new(l_r,hoedown_extensions(int(HOEDOWN_EXT_TABLES)|int(HOEDOWN_EXT_FENCED_CODE)),10);
  bbDBLocal("doc",&l_doc);
  bbDBStmt(532481);
  hoedown_document_render(l_doc,l_ob,bbCString(l_markdown),l_markdown.utf8Length());
  bbDBStmt(540679);
  bbString l_html=bbString::fromCString(hoedown_buffer_cstr(l_ob));
  bbDBLocal("html",&l_html);
  bbDBStmt(548865);
  hoedown_document_free(l_doc);
  bbDBStmt(557057);
  hoedown_html_renderer_free(l_r);
  bbDBStmt(565249);
  hoedown_buffer_free(l_ob);
  bbDBStmt(573441);
  return l_html;
}

void mx2_sdk_generators_2html_2hoedown_2hoedown_init_f(){
}
