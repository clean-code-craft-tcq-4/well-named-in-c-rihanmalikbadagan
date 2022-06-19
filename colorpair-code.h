
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const int MAX_COLORPAIR_NAME_CHARS;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void 
ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair 
GetColorFromPairNumber(int pairNumber);

int 
GetPairNumberFromColor(const ColorPair* colorPair);