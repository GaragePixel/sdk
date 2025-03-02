
#include "sdk/sdk.buildv1.1.15/windows_release_mx/include/sdk_generators_2html_2hoedown_2hoedown.h"

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"

bbString g_sdk_generators_hoedown_MarkdownToHtml(bbString l_markdown,bbBool l_toc){
  hoedown_buffer* l_ob=hoedown_buffer_new(4096);
  hoedown_renderer* l_r{};
  if(l_toc){
    l_r=hoedown_html_toc_renderer_new(10);
  }else{
    l_r=hoedown_html_renderer_new((hoedown_html_flags)0,10);
  }
  hoedown_document* l_doc=hoedown_document_new(l_r,hoedown_extensions(int(HOEDOWN_EXT_TABLES)|int(HOEDOWN_EXT_FENCED_CODE)),10);
  hoedown_document_render(l_doc,l_ob,bbCString(l_markdown),l_markdown.utf8Length());
  bbString l_html=bbString::fromCString(hoedown_buffer_cstr(l_ob));
  hoedown_document_free(l_doc);
  hoedown_html_renderer_free(l_r);
  hoedown_buffer_free(l_ob);
  return l_html;
}

void mx2_sdk_generators_2html_2hoedown_2hoedown_init_f(){
}
