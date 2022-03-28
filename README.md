# ofxUUID

## description
uuid generation for openFrameworks. it simply includes [sole](https://github.com/r-lyeh/sole) - a zlib/libpng licensed uuid library.

```
#include "ofMain.h"
#include "ofxUUID.h"

int main()
{
    ofLogNotice() << sole::uuid4().str();
}
```