#ifndef APPJS_CEF_BASE_H
#define APPJS_CEF_BASE_H
#pragma once

#include <windows.h>
#include "include/cef_browser.h"

namespace appjs {

class CefBase {

public:
  static void AddWebView(CefWindowHandle,RECT);

protected:
  static void Init();

private:
  CefBase(const CefBase&);
  CefBase& operator= (const CefBase&);

};

} /* appjs */

#endif /* end of APPJS_CEF_H */

