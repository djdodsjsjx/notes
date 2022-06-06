# 28实现 strStr()
```cpp
//直接调用标准库
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
```