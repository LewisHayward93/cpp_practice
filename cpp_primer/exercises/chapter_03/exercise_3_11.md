const std::string s = "Keep Out!";
for (auto &c : s) { /\* \*/ }

Legal: auto-deduced type. The auto specifier will deduce the type const char &
for c; however, this coult potentially pose an issue: if the expression inside
the range loop attempted to assign/re-assign a value to c, the compiler will
reject it because c is a const. It is good practice to be explicit and use
const auto &c instead.
