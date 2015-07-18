#ifndef RENDER_SIMPLE_HTML_H_INCLUDED
#define RENDER_SIMPLE_HTML_H_INCLUDED

#include <ostream>
#include <string>
#include "8.3/xcf/logform.hxx"
#include "8.2/managed-application/logform.hxx"

namespace v81c {

namespace html {

namespace lf = v81c::v8_3::xcf::logform;
namespace v8 = v81c::v8_1::data::core;
namespace app= v81c::v8_2::managedapplication::logform;


std::ostream &operator << (std::ostream &os, const lf::ManagedForm &form);

} // :html

namespace htdoc {



} // :htdoc

} // :v81c

#endif // RENDER_SIMPLE_HTML_H_INCLUDED
