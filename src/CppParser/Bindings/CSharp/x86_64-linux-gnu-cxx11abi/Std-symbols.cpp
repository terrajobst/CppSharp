#define _LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS
#define _LIBCPP_HIDE_FROM_ABI

#include <string>

template std::allocator<char>::allocator();
template std::allocator<char>::~allocator();
template std::basic_string<char, std::char_traits<char>, std::allocator<char>>::basic_string();
template std::basic_string<char, std::char_traits<char>, std::allocator<char>>::~basic_string();
template std::basic_string<char, std::char_traits<char>, std::allocator<char>>& std::basic_string<char, std::char_traits<char>, std::allocator<char>>::assign(const char*);
template const char* std::basic_string<char, std::char_traits<char>, std::allocator<char>>::data() const noexcept;
