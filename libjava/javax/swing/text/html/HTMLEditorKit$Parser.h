
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_HTMLEditorKit$Parser__
#define __javax_swing_text_html_HTMLEditorKit$Parser__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
        namespace html
        {
            class HTMLEditorKit$Parser;
            class HTMLEditorKit$ParserCallback;
        }
      }
    }
  }
}

class javax::swing::text::html::HTMLEditorKit$Parser : public ::java::lang::Object
{

public:
  HTMLEditorKit$Parser();
  virtual void parse(::java::io::Reader *, ::javax::swing::text::html::HTMLEditorKit$ParserCallback *, jboolean) = 0;
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_HTMLEditorKit$Parser__