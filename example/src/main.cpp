#include "ofMain.h"
#include "ofxUUID.h"

int main()
{
    ofLogNotice() << sole::uuid4().str();
}