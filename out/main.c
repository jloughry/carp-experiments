#include "../core/SDLHelper.h"
#include <math.h>
#include <carp_debug.h>
#include <carp_pattern.h>
#include <carp_system.h>
#include <carp_io.h>
#include <carp_string.h>
#include <carp_bool.h>
#include <carp_char.h>
#include <carp_float.h>
#include <carp_double.h>
#include <carp_long.h>
#include <carp_int.h>
#include <core.h>

//Types:

// Depth 50
typedef Array Array__SDL_Event;

// Depth 50
typedef Array Array__String;

// Depth 50
typedef Array Array__char;

// Depth 50
typedef Array Array__int;

// Depth 101
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 101
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 101
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 101
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 101
typedef String(*Fn__String_MUL__String)(String*);

// Depth 101
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 101
typedef char*(*Fn__String_MUL__char_MUL_)(String*);

// Depth 101
typedef int(*Fn__String_MUL__int)(String*);

// Depth 101
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 101
typedef char(*Fn__String_MUL__int_char)(String*, int);

// Depth 101
typedef void(*Fn__String_MUL__void)(String*);

// Depth 101
typedef String(*Fn__String_String_String)(String, String);

// Depth 101
typedef char(*Fn___char)();

// Depth 101
typedef int(*Fn___int)();

// Depth 101
typedef void(*Fn___void)();

// Depth 101
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 101
typedef String(*Fn__bool_String)(bool);

// Depth 101
typedef bool(*Fn__bool_bool)(bool);

// Depth 101
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 101
typedef char(*Fn__char_MUL__char)(char*);

// Depth 101
typedef String(*Fn__char_String)(char);

// Depth 101
typedef bool(*Fn__char_char_bool)(char, char);

// Depth 101
typedef int(*Fn__char_int)(char);

// Depth 101
typedef double(*Fn__double_MUL__double)(double*);

// Depth 101
typedef String(*Fn__double_String)(double);

// Depth 101
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 101
typedef double(*Fn__double_double_double)(double, double);

// Depth 101
typedef float(*Fn__float_MUL__float)(float*);

// Depth 101
typedef String(*Fn__float_String)(float);

// Depth 101
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 101
typedef float(*Fn__float_float_float)(float, float);

// Depth 101
typedef int(*Fn__int_MUL__int)(int*);

// Depth 101
typedef int(*Fn__int_MUL__int_MUL__int)(int*, int*);

// Depth 101
typedef String(*Fn__int_String)(int);

// Depth 101
typedef bool(*Fn__int_bool)(int);

// Depth 101
typedef char(*Fn__int_char)(int);

// Depth 101
typedef int(*Fn__int_int)(int);

// Depth 101
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 101
typedef int(*Fn__int_int_int)(int, int);

// Depth 101
typedef void(*Fn__int_void)(int);

// Depth 101
typedef long(*Fn__long_MUL__long)(long*);

// Depth 101
typedef String(*Fn__long_String)(long);

// Depth 101
typedef bool(*Fn__long_bool)(long);

// Depth 101
typedef bool(*Fn__long_long_bool)(long, long);

// Depth 101
typedef long(*Fn__long_long_long)(long, long);

// Depth 101
typedef struct {
    int x;
    int y;
    bool left;
    bool right;
} MouseState;

// Depth 102
typedef int(*Fn__Array__SDL_Event_MUL__int)(Array__SDL_Event*);

// Depth 102
typedef SDL_Event*(*Fn__Array__SDL_Event_MUL__int_SDL_Event_MUL_)(Array__SDL_Event*, int);

// Depth 102
typedef Array__SDL_Event(*Fn__Array__SDL_Event_SDL_Event_Array__SDL_Event)(Array__SDL_Event, SDL_Event);

// Depth 102
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 102
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 102
typedef Array__String(*Fn__Array__String_String_Array__String)(Array__String, String);

// Depth 102
typedef Array__char(*Fn__Array__char_Array__char)(Array__char);

// Depth 102
typedef Pattern(*Fn__Array__char_MUL__Pattern)(Array__char*);

// Depth 102
typedef String(*Fn__Array__char_MUL__String)(Array__char*);

// Depth 102
typedef int(*Fn__Array__char_MUL__int)(Array__char*);

// Depth 102
typedef Array__char(*Fn__Array__char_MUL__int_Array__char)(Array__char*, int);

// Depth 102
typedef char*(*Fn__Array__char_MUL__int_char_MUL_)(Array__char*, int);

// Depth 102
typedef void(*Fn__Array__char_MUL__int_char_void)(Array__char*, int, char);

// Depth 102
typedef Array__char(*Fn__Array__char_MUL__int_int_Array__char)(Array__char*, int, int);

// Depth 102
typedef Array__char(*Fn__Array__char_char_Array__char)(Array__char, char);

// Depth 102
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 102
typedef char(*Fn__FILE_MUL__char)(FILE*);

// Depth 102
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 102
typedef int(*Fn__SDL_Color_MUL__int)(SDL_Color*);

// Depth 102
typedef bool(*Fn__SDL_EventType_SDL_EventType_bool)(SDL_EventType, SDL_EventType);

// Depth 102
typedef SDL_EventType(*Fn__SDL_Event_MUL__SDL_EventType)(SDL_Event*);

// Depth 102
typedef SDL_Keycode(*Fn__SDL_Event_MUL__SDL_Keycode)(SDL_Event*);

// Depth 102
typedef bool(*Fn__SDL_Event_MUL__bool)(SDL_Event*);

// Depth 102
typedef bool(*Fn__SDL_Keycode_SDL_Keycode_bool)(SDL_Keycode, SDL_Keycode);

// Depth 102
typedef String(*Fn__SDL_Keycode_String)(SDL_Keycode);

// Depth 102
typedef int*(*Fn__SDL_Point_MUL__int_MUL_)(SDL_Point*);

// Depth 102
typedef int*(*Fn__SDL_Rect_MUL__int_MUL_)(SDL_Rect*);

// Depth 102
typedef SDL_Renderer*(*Fn__SDL_Renderer_MUL__MUL__SDL_Renderer_MUL_)(SDL_Renderer**);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_Color_MUL__void)(SDL_Renderer*, SDL_Color*);

// Depth 102
typedef SDL_Renderer*(*Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_)(SDL_Renderer*);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_Texture_MUL__SDL_Rect_MUL__SDL_Rect_MUL__void)(SDL_Renderer*, SDL_Texture*, SDL_Rect*, SDL_Rect*);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__int_int_int_int_void)(SDL_Renderer*, int, int, int, int);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__void)(SDL_Renderer*);

// Depth 102
typedef SDL_Rect(*Fn__SDL_Texture_MUL__SDL_Rect)(SDL_Texture*);

// Depth 102
typedef void(*Fn__SDL_Texture_MUL__int_MUL__int_MUL__int_MUL__int_MUL__void)(SDL_Texture*, int*, int*, int*, int*);

// Depth 102
typedef SDL_Window*(*Fn__SDL_Window_MUL__MUL__SDL_Window_MUL_)(SDL_Window**);

// Depth 102
typedef SDL_Window*(*Fn__SDL_Window_MUL__SDL_Window_MUL_)(SDL_Window*);

// Depth 102
typedef void(*Fn__SDL_Window_MUL__char_MUL__void)(SDL_Window*, char*);

// Depth 102
typedef void(*Fn__SDL_Window_MUL__void)(SDL_Window*);

// Depth 102
typedef Array__char(*Fn__String_MUL__Array__char)(String*);

// Depth 102
typedef Array__String(*Fn__String_MUL__Array__char_MUL__Array__String)(String*, Array__char*);

// Depth 102
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 102
typedef Array__SDL_Event(*Fn___Array__SDL_Event)();

// Depth 102
typedef SDL_Event(*Fn___SDL_Event)();

// Depth 102
typedef Array__char(*Fn__int_Array__char)(int);

// Depth 102
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 102
typedef Array__char(*Fn__int_Fn___char_Array__char)(int, Fn___char);

// Depth 102
typedef Array__char(*Fn__int_char_MUL__Array__char)(int, char*);

// Depth 102
typedef SDL_Color(*Fn__int_int_int_SDL_Color)(int, int, int);

// Depth 102
typedef void(*Fn__int_int_int_SDL_Window_MUL__MUL__SDL_Renderer_MUL__MUL__void)(int, int, int, SDL_Window**, SDL_Renderer**);

// Depth 102
typedef SDL_Rect(*Fn__int_int_int_int_SDL_Rect)(int, int, int, int);

// Depth 102
typedef struct {
    SDL_Window* window;
    SDL_Renderer* renderer;
    int fps;
} SDLApp;

// Depth 103
typedef MouseState(*Fn__int_int_bool_bool_MouseState)(int, int, bool, bool);

// Depth 104
typedef SDL_Renderer**(*Fn__SDLApp_MUL__SDL_Renderer_MUL__MUL_)(SDLApp*);

// Depth 104
typedef void(*Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void)(SDLApp*, SDL_Renderer*, int*);

// Depth 104
typedef SDL_Window**(*Fn__SDLApp_MUL__SDL_Window_MUL__MUL_)(SDLApp*);

// Depth 104
typedef int*(*Fn__SDLApp_MUL__int_MUL_)(SDLApp*);

// Depth 104
typedef void(*Fn__SDLApp_MUL__void)(SDLApp*);

// Depth 104
typedef SDLApp(*Fn__SDL_Window_MUL__SDL_Renderer_MUL__int_SDLApp)(SDL_Window*, SDL_Renderer*, int);

// Depth 104
typedef SDLApp(*Fn__String_MUL__int_int_SDLApp)(String*, int, int);

// Depth 105
typedef void(*Fn__SDLApp_MUL__Fn__SDLApp_MUL__void_Fn__int_int_Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void_int_void)(SDLApp*, Fn__SDLApp_MUL__void, Fn__int_int, Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void, int);


//Declarations:

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
void draw__SDLApp_MUL_(SDLApp* app, SDL_Renderer* rend, int* state);

// Depth 500
int main(int argc, char** argv);

// Depth 500
int max__int(int a, int b);

// Depth 500
int tick(int state);

// Depth 1000

// Depth 500
Array Array_allocate__char (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
void Array_aset_BANG___char (Array *aRef, int n, char newValue);

// Depth 500
void Array_aset_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___char (Array *aRef, int n, char newValue);

// Depth 500
int Array_count__SDL_Event (Array *a);

// Depth 500
int Array_count__String (Array *a);

// Depth 500
int Array_count__char (Array *a);

// Depth 500
void Array_delete__SDL_Event (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__char (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
SDL_Event* Array_nth__SDL_Event (Array *aRef, int n);

// Depth 500
String* Array_nth__String (Array *aRef, int n);

// Depth 500
char* Array_nth__char (Array *aRef, int n);

// Depth 500
Array__char Array_prefix_MINUS_array__char(Array__char* xs, int end_MINUS_index);

// Depth 500
Array Array_push_MINUS_back__SDL_Event(Array a, SDL_Event value);

// Depth 500
Array Array_push_MINUS_back__String(Array a, String value);

// Depth 500
Array Array_push_MINUS_back__char(Array a, char value);

// Depth 500
Array__int Array_range(int start, int end, int step);

// Depth 500
Array__char Array_repeat__char(int n, Fn___char f);

// Depth 500
Array__char Array_replicate__char(int n, char* e);

// Depth 500
Array__char Array_reverse__char(Array__char a);

// Depth 500
Array__char Array_subarray__char(Array__char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__char Array_suffix_MINUS_array__char(Array__char* xs, int start_MINUS_index);

// Depth 1000

// Depth 500
String Bool_prn(bool x);

// Depth 1000

// Depth 500
bool Char__DIV__EQ_(char a, char b);

// Depth 500
int Char_meaning(char* char_MINUS_ref);

// Depth 500
String Char_prn(char x);

// Depth 500
char Char_random();

// Depth 500
char Char_random_MINUS_between(char a, char b);

// Depth 1000

// Depth 500
bool CharRef__EQ_(char* a, char* b);

// Depth 1000

// Depth 500
bool Double__DIV__EQ_(double x, double y);

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
bool Double_approx(double x, double y);

// Depth 500
double Double_e;

// Depth 500
double Double_pi;

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 1000

// Depth 500
bool Float__DIV__EQ_(float x, float y);

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
bool Float_approx(float x, float y);

// Depth 500
float Float_pi;

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 1000

// Depth 500
String IO_read_MINUS__GT_EOF(String* filename);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 1000

// Depth 500
bool Long__DIV__EQ_(long x, long y);

// Depth 500
bool Long_even_QMARK_(long a);

// Depth 500
bool Long_odd_QMARK_(long a);

// Depth 500
String Long_prn(long x);

// Depth 1000

// Depth 500
bool LongRef__LT_(long* a, long* b);

// Depth 500
bool LongRef__EQ_(long* a, long* b);

// Depth 500
bool LongRef__GT_(long* a, long* b);

// Depth 1000

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__char* chars);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 1000

// Depth 500
SDL_Renderer* Pointer_copy__SDL_Renderer (SDL_Renderer** ptrRef);

// Depth 500
SDL_Window* Pointer_copy__SDL_Window (SDL_Window** ptrRef);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
void SDL_bg(SDL_Renderer* rend, SDL_Color* color);

// Depth 500
SDL_Rect SDL_dimensions(SDL_Texture* texture);

// Depth 500
void SDL_draw_MINUS_texture(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point);

// Depth 500
void SDL_draw_MINUS_texture_MINUS_centered(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point);

// Depth 1000

// Depth 500
Array__SDL_Event SDL_Event_all();

// Depth 1000

// Depth 500
bool SDL_Keycode__DIV__EQ_(SDL_Keycode x, SDL_Keycode y);

// Depth 500
String SDL_Keycode_prn(SDL_Keycode x);

// Depth 1000

// Depth 500
MouseState SDL_MouseState_copy(MouseState* pRef);

// Depth 500
void SDL_MouseState_delete(MouseState p);

// Depth 500
MouseState SDL_MouseState_get();

// Depth 500
MouseState SDL_MouseState_init(int x, int y, bool left, bool right);

// Depth 500
bool* SDL_MouseState_left(MouseState* p);

// Depth 500
String SDL_MouseState_prn(MouseState *p);

// Depth 500
bool* SDL_MouseState_right(MouseState* p);

// Depth 500
MouseState SDL_MouseState_set_MINUS_left(MouseState p, bool newValue);

// Depth 500
void SDL_MouseState_set_MINUS_left_BANG_(MouseState* pRef, bool newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_right(MouseState p, bool newValue);

// Depth 500
void SDL_MouseState_set_MINUS_right_BANG_(MouseState* pRef, bool newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_x(MouseState p, int newValue);

// Depth 500
void SDL_MouseState_set_MINUS_x_BANG_(MouseState* pRef, int newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_y(MouseState p, int newValue);

// Depth 500
void SDL_MouseState_set_MINUS_y_BANG_(MouseState* pRef, int newValue);

// Depth 500
String SDL_MouseState_str(MouseState *p);

// Depth 500
MouseState SDL_MouseState_update_MINUS_left(MouseState p, Fn__bool_bool updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_right(MouseState p, Fn__bool_bool updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_x(MouseState p, Fn__int_int updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_y(MouseState p, Fn__int_int updater);

// Depth 500
int* SDL_MouseState_x(MouseState* p);

// Depth 500
int* SDL_MouseState_y(MouseState* p);

// Depth 1000

// Depth 500
SDLApp SDLApp_copy(SDLApp* pRef);

// Depth 500
SDLApp SDLApp_create(String* title, int width, int height);

// Depth 500
void SDLApp_delete(SDLApp p);

// Depth 500
int* SDLApp_fps(SDLApp* p);

// Depth 500
SDLApp SDLApp_init(SDL_Window* window, SDL_Renderer* renderer, int fps);

// Depth 500
String SDLApp_prn(SDLApp *p);

// Depth 500
void SDLApp_quit_MINUS_on_MINUS_esc(SDLApp* app);

// Depth 500
SDL_Renderer** SDLApp_renderer(SDLApp* p);

// Depth 500
void SDLApp_run_MINUS_with_MINUS_callbacks__int(SDLApp* app, Fn__SDLApp_MUL__void event_MINUS_fn, Fn__int_int update_MINUS_fn, Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void draw_MINUS_fn, int initial_MINUS_state);

// Depth 500
SDLApp SDLApp_set_MINUS_fps(SDLApp p, int newValue);

// Depth 500
void SDLApp_set_MINUS_fps_BANG_(SDLApp* pRef, int newValue);

// Depth 500
SDLApp SDLApp_set_MINUS_renderer(SDLApp p, SDL_Renderer* newValue);

// Depth 500
void SDLApp_set_MINUS_renderer_BANG_(SDLApp* pRef, SDL_Renderer* newValue);

// Depth 500
SDLApp SDLApp_set_MINUS_window(SDLApp p, SDL_Window* newValue);

// Depth 500
void SDLApp_set_MINUS_window_BANG_(SDLApp* pRef, SDL_Window* newValue);

// Depth 500
void SDLApp_stop__void(SDLApp* app);

// Depth 500
String SDLApp_str(SDLApp *p);

// Depth 500
SDLApp SDLApp_update_MINUS_fps(SDLApp p, Fn__int_int updater);

// Depth 500
SDLApp SDLApp_update_MINUS_renderer(SDLApp p, Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_ updater);

// Depth 500
SDLApp SDLApp_update_MINUS_window(SDLApp p, Fn__SDL_Window_MUL__SDL_Window_MUL_ updater);

// Depth 500
SDL_Window** SDLApp_window(SDLApp* p);

// Depth 1000

// Depth 500
SDL_Point SDL_Point_init(int x, int y);

// Depth 500
String SDL_Point_prn(SDL_Point *p);

// Depth 500
SDL_Point SDL_Point_set_MINUS_x(SDL_Point p, int newValue);

// Depth 500
void SDL_Point_set_MINUS_x_BANG_(SDL_Point* pRef, int newValue);

// Depth 500
SDL_Point SDL_Point_set_MINUS_y(SDL_Point p, int newValue);

// Depth 500
void SDL_Point_set_MINUS_y_BANG_(SDL_Point* pRef, int newValue);

// Depth 500
String SDL_Point_str(SDL_Point *p);

// Depth 500
SDL_Point SDL_Point_update_MINUS_x(SDL_Point p, Fn__int_int updater);

// Depth 500
SDL_Point SDL_Point_update_MINUS_y(SDL_Point p, Fn__int_int updater);

// Depth 500
int* SDL_Point_x(SDL_Point* p);

// Depth 500
int* SDL_Point_y(SDL_Point* p);

// Depth 1000

// Depth 500
int* SDL_Rect_h(SDL_Rect* p);

// Depth 500
SDL_Rect SDL_Rect_init(int x, int y, int w, int h);

// Depth 500
String SDL_Rect_prn(SDL_Rect *p);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_h(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_h_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_w(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_w_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_x(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_x_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_y(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_y_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
String SDL_Rect_str(SDL_Rect *p);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_h(SDL_Rect p, Fn__int_int updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_w(SDL_Rect p, Fn__int_int updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_x(SDL_Rect p, Fn__int_int updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_y(SDL_Rect p, Fn__int_int updater);

// Depth 500
int* SDL_Rect_w(SDL_Rect* p);

// Depth 500
int* SDL_Rect_x(SDL_Rect* p);

// Depth 500
int* SDL_Rect_y(SDL_Rect* p);

// Depth 1000

// Depth 500
bool String__DIV__EQ_(String* a, String* b);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
int String_count_MINUS_char(String* s, char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
String String_join(Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, char pad, String* s);

// Depth 500
String String_prefix_MINUS_string(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
Array__String String_split_MINUS_by(String* _s, Array__char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_substring(String* s, int a, int b);

// Depth 500
String String_suffix_MINUS_string(String* s, int b);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__DIV__EQ_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 1000

// Depth 500
void System_exit__void (int code);


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }
}

//Definitions:
bool _LT__EQ___int(int a, int b) {
    bool _14 = false;
    bool _9 = Int__LT_(a, b);
    if(_9) {
        _14 = true;
    } else {
        bool _13 = Int__EQ_(a, b);
        _14 = _13;
    }
    return _14;
}

bool _GT__EQ___int(int a, int b) {
    bool _14 = false;
    bool _9 = Int__GT_(a, b);
    if(_9) {
        _14 = true;
    } else {
        bool _13 = Int__EQ_(a, b);
        _14 = _13;
    }
    return _14;
}

Array Array_allocate__char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(char));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

void Array_aset_BANG___char (Array *aRef, int n, char newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    /* Ignore non-managed type inside Array: 'Char' */

    ((char*)a.data)[n] = newValue;
}

void Array_aset_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    /* Ignore non-managed type inside Array: 'Int' */

    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___char (Array *aRef, int n, char newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((char*)a.data)[n] = newValue;
}

int Array_count__SDL_Event (Array *a) { return (*a).len; }
int Array_count__String (Array *a) { return (*a).len; }
int Array_count__char (Array *a) { return (*a).len; }
void Array_delete__SDL_Event (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'SDL_Event' */
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

SDL_Event* Array_nth__SDL_Event (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((SDL_Event*)a.data)[n]);
}

String* Array_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((String*)a.data)[n]);
}

char* Array_nth__char (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((char*)a.data)[n]);
}

Array__char Array_prefix_MINUS_array__char(Array__char* xs, int end_MINUS_index) {
    Array__char _9 = Array_subarray__char(xs, 0, end_MINUS_index);
    return _9;
}

Array Array_push_MINUS_back__SDL_Event(Array a, SDL_Event value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(SDL_Event) * a.capacity);
    }
    ((SDL_Event*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__String(Array a, String value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(String) * a.capacity);
    }
    ((String*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__char(Array a, char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(char) * a.capacity);
    }
    ((char*)a.data)[a.len - 1] = value;
    return a;
}

Array__int Array_range(int start, int end, int step) {
    Array__int _70;
    /* let */ {
        int _15 = Int__MINUS_(end, start);
        int _17 = Int__DIV_(_15, step);
        int _18 = Int_abs(_17);
        int _19 = Int_inc(_18);
        Array__int _20 = Array_allocate__int(_19);
        Array__int x = _20;
        int e = start;
        int i = 0;
        Fn__int_int_bool _37;
        bool _30 = Int__LT_(start, end);
        if (_30) {
            Fn__int_int_bool _33 = _LT__EQ___int;
            _37 = _33;
        } else {
            Fn__int_int_bool _36 = _GT__EQ___int;
            _37 = _36;
        }
        Fn__int_int_bool op = _37;
        bool _44 = op(e, end);
        bool _67 = _44;
        while (_67) {
            Array__int* _49 = &x; // ref
            Array_aset_BANG___int(_49, i, e);
            int _57 = Int_inc(i);
            i = _57;  // Int = Int
            int _64 = Int__PLUS_(e, step);
            e = _64;  // Int = Int
            bool _44 = op(e, end);
            _67 = _44;
        }
        Array__int _69 = x;
        _70 = _69;
    }
    return _70;
}

Array__char Array_repeat__char(int n, Fn___char f) {
    Array__char _42;
    /* let */ {
        Array__char _9 = Array_allocate__char(n);
        Array__char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _38 = _20;
            while (_38) {
                Array__char* _25 = &a; // ref
                char _28 = f();
                Array_aset_MINUS_uninitialized_BANG___char(_25, i, _28);
                int _35 = Int__PLUS_(i, 1);
                i = _35;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _38 = _20;
            }
        }
        Array__char _41 = a;
        _42 = _41;
    }
    return _42;
}

Array__char Array_replicate__char(int n, char* e) {
    Array__char _43;
    /* let */ {
        Array__char _9 = Array_allocate__char(n);
        Array__char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__char* _25 = &a; // ref
                char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___char(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__char Array_reverse__char(Array__char a) {
    Array__char _72;
    /* let */ {
        int i = 0;
        Array__char* _12 = &a; // ref
        int _13 = Array_count__char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__char* _28 = &a; // ref
                char* _30 = Array_nth__char(_28, i);
                char _31 = Char_copy(_30);
                char tmp = _31;
                Array__char* _37 = &a; // ref
                Array__char* _43 = &a; // ref
                char* _45 = Array_nth__char(_43, j);
                char _46 = Char_copy(_45);
                Array_aset_BANG___char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__char* _57 = &a; // ref
                Array_aset_BANG___char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__char _71 = a;
        _72 = _71;
    }
    return _72;
}

Array__char Array_subarray__char(Array__char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(char) * 0) };
        Array__char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                char* _29 = Array_nth__char(xs, i);
                char _30 = Char_copy(_29);
                Array__char _31 = Array_push_MINUS_back__char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__char _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__char Array_suffix_MINUS_array__char(Array__char* xs, int start_MINUS_index) {
    int _10 = Array_count__char(xs);
    Array__char _11 = Array_subarray__char(xs, start_MINUS_index, _10);
    return _11;
}

String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Char__DIV__EQ_(char a, char b) {
    char _10 = a; // From the 'the' function.
    bool _12 = Char__EQ_(_10, b);
    bool _13 = not(_12);
    return _13;
}

int Char_meaning(char* char_MINUS_ref) {
    int _134;
    char _8 = Char_copy(char_MINUS_ref);
    bool _10 = Char__EQ_(_8, '0');
    if (_10) {
        int _13 = 0;
        _134 = _13;
    } else {
        int _132;
        char _19 = Char_copy(char_MINUS_ref);
        bool _21 = Char__EQ_(_19, '1');
        if (_21) {
            int _24 = 1;
            _132 = _24;
        } else {
            int _130;
            char _30 = Char_copy(char_MINUS_ref);
            bool _32 = Char__EQ_(_30, '2');
            if (_32) {
                int _35 = 2;
                _130 = _35;
            } else {
                int _128;
                char _41 = Char_copy(char_MINUS_ref);
                bool _43 = Char__EQ_(_41, '3');
                if (_43) {
                    int _46 = 3;
                    _128 = _46;
                } else {
                    int _126;
                    char _52 = Char_copy(char_MINUS_ref);
                    bool _54 = Char__EQ_(_52, '4');
                    if (_54) {
                        int _57 = 4;
                        _126 = _57;
                    } else {
                        int _124;
                        char _63 = Char_copy(char_MINUS_ref);
                        bool _65 = Char__EQ_(_63, '5');
                        if (_65) {
                            int _68 = 5;
                            _124 = _68;
                        } else {
                            int _122;
                            char _74 = Char_copy(char_MINUS_ref);
                            bool _76 = Char__EQ_(_74, '6');
                            if (_76) {
                                int _79 = 6;
                                _122 = _79;
                            } else {
                                int _120;
                                char _85 = Char_copy(char_MINUS_ref);
                                bool _87 = Char__EQ_(_85, '7');
                                if (_87) {
                                    int _90 = 7;
                                    _120 = _90;
                                } else {
                                    int _118;
                                    char _96 = Char_copy(char_MINUS_ref);
                                    bool _98 = Char__EQ_(_96, '8');
                                    if (_98) {
                                        int _101 = 8;
                                        _118 = _101;
                                    } else {
                                        int _116;
                                        char _107 = Char_copy(char_MINUS_ref);
                                        bool _109 = Char__EQ_(_107, '9');
                                        if (_109) {
                                            int _112 = 9;
                                            _116 = _112;
                                        } else {
                                            int _115 = -1;
                                            _116 = _115;
                                        }
                                        int _117 = _116;
                                        _118 = _117;
                                    }
                                    int _119 = _118;
                                    _120 = _119;
                                }
                                int _121 = _120;
                                _122 = _121;
                            }
                            int _123 = _122;
                            _124 = _123;
                        }
                        int _125 = _124;
                        _126 = _125;
                    }
                    int _127 = _126;
                    _128 = _127;
                }
                int _129 = _128;
                _130 = _129;
            }
            int _131 = _130;
            _132 = _131;
        }
        int _133 = _132;
        _134 = _133;
    }
    return _134;
}

String Char_prn(char x) {
    String _6 = Char_str(x);
    return _6;
}

char Char_random() {
    int _5 = Int_random();
    char _6 = Char_from_MINUS_int(_5);
    return _6;
}

char Char_random_MINUS_between(char a, char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool CharRef__EQ_(char* a, char* b) {
    char _8 = Char_copy(a);
    char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool Double__DIV__EQ_(double x, double y) {
    bool _9 = Double__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

bool Double_approx(double x, double y) {
    bool _28;
    bool _9 = Double__GT_(x, y);
    if (_9) {
        double _15 = Double__MINUS_(x, y);
        bool _17 = Double__LT_(_15, 1.0e-5);
        bool _18 = _17;
        _28 = _18;
    } else {
        double _24 = Double__MINUS_(y, x);
        bool _26 = Double__LT_(_24, 1.0e-5);
        bool _27 = _26;
        _28 = _27;
    }
    return _28;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

bool Float__DIV__EQ_(float x, float y) {
    bool _9 = Float__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

bool Float_approx(float x, float y) {
    bool _28;
    bool _9 = Float__GT_(x, y);
    if (_9) {
        float _15 = Float__MINUS_(x, y);
        bool _17 = Float__LT_(_15, 1.0e-5f);
        bool _18 = _17;
        _28 = _18;
    } else {
        float _24 = Float__MINUS_(y, x);
        bool _26 = Float__LT_(_24, 1.0e-5f);
        bool _27 = _26;
        _28 = _27;
    }
    return _28;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

String IO_read_MINUS__GT_EOF(String* filename) {
    String _48;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        FILE* _9 = IO_fopen(filename, _8_ref);
        FILE* f = _9;
        char _13 = Char_from_MINUS_int(0);
        char c = _13;
        Array _15 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(char) * 0) };
        Array__char r = _15;
        char _24 = IO_fgetc(f);
        c = _24;  // Char = Char
        bool _29 = Char__DIV__EQ_(c, IO_EOF);
        bool _30 = _29;
        bool _38 = _30;
        while (_38) {
            Array__char _36 = Array_push_MINUS_back__char(r, c);
            r = _36;  // (Array Char) = (Array Char)
            char _24 = IO_fgetc(f);
            c = _24;  // Char = Char
            bool _29 = Char__DIV__EQ_(c, IO_EOF);
            bool _30 = _29;
            _38 = _30;
        }
        IO_fclose(f);
        Array__char* _45 = &r; // ref
        String _46 = String_from_MINUS_chars(_45);
        String _47 = _46;
        _48 = _47;
        Array_delete__char(r);
    }
    return _48;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = Int__DIV__EQ_(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = Int__DIV__EQ_(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = Int__DIV__EQ_(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_zero() {
    return 0;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

bool Long__DIV__EQ_(long x, long y) {
    bool _9 = Long__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

bool Long_even_QMARK_(long a) {
    long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

bool Long_odd_QMARK_(long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

String Long_prn(long x) {
    String _6 = Long_str(x);
    return _6;
}

bool LongRef__LT_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

Pattern Pattern_from_MINUS_chars(Array__char* chars) {
    static String _8 = "[";
    String *_8_ref = &_8;
    String _9 = String_copy(_8_ref);
    String _13 = String_from_MINUS_chars(chars);
    static String _16 = "]";
    String *_16_ref = &_16;
    String _17 = String_copy(_16_ref);
    static String _19 = "";
    String *_19_ref = &_19;
    String _20 = String_copy(_19_ref);
    String _21 = String_append(_17, _20);
    String _22 = String_append(_13, _21);
    String _23 = String_append(_9, _22);
    String* _24 = &_23; // ref
    Pattern _25 = Pattern_init(_24);
    String_delete(_23);
    return _25;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = Int__DIV__EQ_(_9, -1);
    return _11;
}

SDL_Renderer* Pointer_copy__SDL_Renderer (SDL_Renderer** ptrRef) {
    return *ptrRef;
}

SDL_Window* Pointer_copy__SDL_Window (SDL_Window** ptrRef) {
    return *ptrRef;
}

bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

Array__SDL_Event SDL_Event_all() {
    Array__SDL_Event _27;
    /* let */ {
        Array _5 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(SDL_Event) * 0) };
        Array__SDL_Event events = _5;
        SDL_Event _8 = SDL_Event_init();
        SDL_Event e = _8;
        bool _16 = SDL_PollEvent(&e);
        bool _24 = _16;
        while (_24) {
            Array__SDL_Event _22 = Array_push_MINUS_back__SDL_Event(events, e);
            events = _22;  // (Array SDL_Event) = (Array SDL_Event)
            bool _16 = SDL_PollEvent(&e);
            _24 = _16;
        }
        Array__SDL_Event _26 = events;
        _27 = _26;
    }
    return _27;
}

bool SDL_Keycode__DIV__EQ_(SDL_Keycode x, SDL_Keycode y) {
    bool _9 = SDL_Keycode__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

String SDL_Keycode_prn(SDL_Keycode x) {
    String _6 = SDL_Keycode_str(x);
    return _6;
}

MouseState SDL_MouseState_copy(MouseState* pRef) {
    MouseState copy = *pRef;
    /* Ignore non-managed member 'x' */
    /* Ignore non-managed member 'y' */
    /* Ignore non-managed member 'left' */
    /* Ignore non-managed member 'right' */
    return copy;
}

void SDL_MouseState_delete(MouseState p) {
    /* Ignore non-managed member 'x' */
    /* Ignore non-managed member 'y' */
    /* Ignore non-managed member 'left' */
    /* Ignore non-managed member 'right' */
}

MouseState SDL_MouseState_get() {
    MouseState _44;
    /* let */ {
        int x = 0;
        int y = 0;
        int _16 = SDL_GetMouseState(&x, &y);
        int state = _16;
        int _24 = SDL_BUTTON(SDL_BUTTON_LEFT);
        int _25 = Int_bit_MINUS_and(state, _24);
        bool _26 = Int__DIV__EQ_(0, _25);
        bool l = _26;
        int _34 = SDL_BUTTON(SDL_BUTTON_RIGHT);
        int _35 = Int_bit_MINUS_and(state, _34);
        bool _36 = Int__DIV__EQ_(0, _35);
        bool r = _36;
        MouseState _43 = SDL_MouseState_init(x, y, l, r);
        _44 = _43;
    }
    return _44;
}

MouseState SDL_MouseState_init(int x, int y, bool left, bool right) {
    MouseState instance;
    instance.x = x;
    instance.y = y;
    instance.left = left;
    instance.right = right;
    return instance;
}

bool* SDL_MouseState_left(MouseState* p) { return (&(p->left)); }

String SDL_MouseState_prn(MouseState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "MouseState");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "MouseState");
  bufferPtr += strlen("MouseState") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

bool* SDL_MouseState_right(MouseState* p) { return (&(p->right)); }

MouseState SDL_MouseState_set_MINUS_left(MouseState p, bool newValue) {
    /* Ignore non-managed member 'left' */
    p.left = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_left_BANG_(MouseState* pRef, bool newValue) {
    pRef->left = newValue;
}


MouseState SDL_MouseState_set_MINUS_right(MouseState p, bool newValue) {
    /* Ignore non-managed member 'right' */
    p.right = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_right_BANG_(MouseState* pRef, bool newValue) {
    pRef->right = newValue;
}


MouseState SDL_MouseState_set_MINUS_x(MouseState p, int newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_x_BANG_(MouseState* pRef, int newValue) {
    pRef->x = newValue;
}


MouseState SDL_MouseState_set_MINUS_y(MouseState p, int newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_y_BANG_(MouseState* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_MouseState_str(MouseState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "MouseState");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "MouseState");
  bufferPtr += strlen("MouseState") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

MouseState SDL_MouseState_update_MINUS_left(MouseState p, Fn__bool_bool updater) {
    p.left = updater(p.left);
    return p;
}


MouseState SDL_MouseState_update_MINUS_right(MouseState p, Fn__bool_bool updater) {
    p.right = updater(p.right);
    return p;
}


MouseState SDL_MouseState_update_MINUS_x(MouseState p, Fn__int_int updater) {
    p.x = updater(p.x);
    return p;
}


MouseState SDL_MouseState_update_MINUS_y(MouseState p, Fn__int_int updater) {
    p.y = updater(p.y);
    return p;
}


int* SDL_MouseState_x(MouseState* p) { return (&(p->x)); }

int* SDL_MouseState_y(MouseState* p) { return (&(p->y)); }

void SDL_bg(SDL_Renderer* rend, SDL_Color* color) {
    int _12 = SDL_Color_r(color);
    int _15 = SDL_Color_g(color);
    int _18 = SDL_Color_b(color);
    SDL_SetRenderDrawColor(rend, _12, _15, _18, 255);
    SDL_RenderClear(rend);
}

SDL_Rect SDL_dimensions(SDL_Texture* texture) {
    SDL_Rect _29;
    /* let */ {
        int w = 0;
        int h = 0;
        SDL_QueryTexture(texture, NULL, NULL, &w, &h);
        SDL_Rect _27 = SDL_rect(0, 0, w, h);
        SDL_Rect _28 = _27;
        _29 = _28;
    }
    return _29;
}

void SDL_draw_MINUS_texture(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point) {
    /* let */ {
        SDL_Rect _10 = SDL_dimensions(texture);
        SDL_Rect dims = _10;
        int* _16 = SDL_Point_x(point);
        int _17 = Int_copy(_16);
        int* _21 = SDL_Point_y(point);
        int _22 = Int_copy(_21);
        SDL_Rect* _27 = &dims; // ref
        int* _28 = SDL_Rect_w(_27);
        int _29 = Int_copy(_28);
        SDL_Rect* _34 = &dims; // ref
        int* _35 = SDL_Rect_h(_34);
        int _36 = Int_copy(_35);
        SDL_Rect _37 = SDL_rect(_17, _22, _29, _36);
        SDL_Rect dest = _37;
        SDL_RenderCopy(rend, texture, &dims, &dest);
    }
}

void SDL_draw_MINUS_texture_MINUS_centered(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point) {
    /* let */ {
        SDL_Rect _10 = SDL_dimensions(texture);
        SDL_Rect dims = _10;
        SDL_Rect* _16 = &dims; // ref
        int* _17 = SDL_Rect_w(_16);
        int _18 = Int_copy(_17);
        int w = _18;
        SDL_Rect* _24 = &dims; // ref
        int* _25 = SDL_Rect_h(_24);
        int _26 = Int_copy(_25);
        int h = _26;
        int* _33 = SDL_Point_x(point);
        int _34 = Int_copy(_33);
        int _38 = Int__DIV_(w, 2);
        int _39 = Int__MINUS_(_34, _38);
        int* _44 = SDL_Point_y(point);
        int _45 = Int_copy(_44);
        int _49 = Int__DIV_(h, 2);
        int _50 = Int__MINUS_(_45, _49);
        SDL_Rect _53 = SDL_rect(_39, _50, w, h);
        SDL_Rect dest = _53;
        SDL_RenderCopy(rend, texture, &dims, &dest);
    }
}

SDLApp SDLApp_copy(SDLApp* pRef) {
    SDLApp copy = *pRef;
    /* Ignore non-managed member 'window' */
    /* Ignore non-managed member 'renderer' */
    /* Ignore non-managed member 'fps' */
    return copy;
}

SDLApp SDLApp_create(String* title, int width, int height) {
    SDLApp _38;
    /* let */ {
        int _ = SDL_INIT_EVERYTHING;
        SDL_Window* win = NULL;
        SDL_Renderer* ren = NULL;
        SDL_CreateWindowAndRenderer(width, height, 0, &win, &ren);
        char* _30 = String_cstr(title);
        SDL_SetWindowTitle(win, _30);
        SDLApp _36 = SDLApp_init(win, ren, 60);
        SDLApp _37 = _36;
        _38 = _37;
    }
    return _38;
}

void SDLApp_delete(SDLApp p) {
    /* Ignore non-managed member 'window' */
    /* Ignore non-managed member 'renderer' */
    /* Ignore non-managed member 'fps' */
}

int* SDLApp_fps(SDLApp* p) { return (&(p->fps)); }

SDLApp SDLApp_init(SDL_Window* window, SDL_Renderer* renderer, int fps) {
    SDLApp instance;
    instance.window = window;
    instance.renderer = renderer;
    instance.fps = fps;
    return instance;
}

String SDLApp_prn(SDLApp *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDLApp");
  size +=  snprintf(NULL, 0, "%p ", p->window);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->renderer);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDLApp");
  bufferPtr += strlen("SDLApp") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->window);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->window);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->renderer);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->renderer);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

void SDLApp_quit_MINUS_on_MINUS_esc(SDLApp* app) {
    /* let */ {
        Array__SDL_Event _8 = SDL_Event_all();
        Array__SDL_Event* _9 = &_8; // ref
        Array__SDL_Event* xs = _9;
        int _13 = Array_count__SDL_Event(xs);
        int len = _13;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _90 = _23;
            while (_90) {
                /* let */ {
                    SDL_Event* _30 = Array_nth__SDL_Event(xs, i);
                    SDL_Event* event = _30;
                    SDL_EventType _36 = SDL_Event_type(event);
                    bool _38 = SDL_Event__EQ_(_36, SDL_QUIT);
                    if (_38) {
                        SDLApp_stop__void(app);
                    } else {
                        SDL_EventType _49 = SDL_Event_type(event);
                        bool _51 = SDL_Event__EQ_(_49, SDL_KEYDOWN);
                        if (_51) {
                            /* let */ {
                                SDL_Keycode _57 = SDL_Event_keycode(event);
                                SDL_Keycode key = _57;
                                bool _63 = SDL_Keycode__EQ_(key, SDLK_ESCAPE);
                                if (_63) {
                                    SDLApp_stop__void(app);
                                } else {
                                    /* () */
                                }
                            }
                        } else {
                            /* () */
                        }
                    }
                }
                int _87 = Int__PLUS_(i, 1);
                i = _87;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _90 = _23;
            }
        }
        Array_delete__SDL_Event(_8);
    }
}

SDL_Renderer** SDLApp_renderer(SDLApp* p) { return (&(p->renderer)); }

void SDLApp_run_MINUS_with_MINUS_callbacks__int(SDLApp* app, Fn__SDLApp_MUL__void event_MINUS_fn, Fn__int_int update_MINUS_fn, Fn__SDLApp_MUL__SDL_Renderer_MUL__int_MUL__void draw_MINUS_fn, int initial_MINUS_state) {
    /* let */ {
        SDL_Renderer** _13 = SDLApp_renderer(app);
        SDL_Renderer* _14 = Pointer_copy__SDL_Renderer(_13);
        SDL_Renderer* rend = _14;
        int state = initial_MINUS_state;
        bool _51 = true;
        while (_51) {
            event_MINUS_fn(app);
            int _28 = update_MINUS_fn(state);
            state = _28;  // Int = Int
            int* _35 = &state; // ref
            draw_MINUS_fn(app, rend, _35);
            SDL_RenderPresent(rend);
            int* _46 = SDLApp_fps(app);
            int _47 = Int_copy(_46);
            int _48 = Int__DIV_(1000, _47);
            SDL_Delay(_48);
            _51 = true;
        }
    }
}

SDLApp SDLApp_set_MINUS_fps(SDLApp p, int newValue) {
    /* Ignore non-managed member 'fps' */
    p.fps = newValue;
    return p;
}


void SDLApp_set_MINUS_fps_BANG_(SDLApp* pRef, int newValue) {
    pRef->fps = newValue;
}


SDLApp SDLApp_set_MINUS_renderer(SDLApp p, SDL_Renderer* newValue) {
    /* Ignore non-managed member 'renderer' */
    p.renderer = newValue;
    return p;
}


void SDLApp_set_MINUS_renderer_BANG_(SDLApp* pRef, SDL_Renderer* newValue) {
    pRef->renderer = newValue;
}


SDLApp SDLApp_set_MINUS_window(SDLApp p, SDL_Window* newValue) {
    /* Ignore non-managed member 'window' */
    p.window = newValue;
    return p;
}


void SDLApp_set_MINUS_window_BANG_(SDLApp* pRef, SDL_Window* newValue) {
    pRef->window = newValue;
}


void SDLApp_stop__void(SDLApp* app) {
    SDL_Window** _9 = SDLApp_window(app);
    SDL_Window* _10 = Pointer_copy__SDL_Window(_9);
    SDL_DestroyWindow(_10);
    SDL_Quit();
    System_exit__void(0);
}

String SDLApp_str(SDLApp *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDLApp");
  size +=  snprintf(NULL, 0, "%p ", p->window);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->renderer);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDLApp");
  bufferPtr += strlen("SDLApp") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->window);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->window);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->renderer);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->renderer);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDLApp SDLApp_update_MINUS_fps(SDLApp p, Fn__int_int updater) {
    p.fps = updater(p.fps);
    return p;
}


SDLApp SDLApp_update_MINUS_renderer(SDLApp p, Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_ updater) {
    p.renderer = updater(p.renderer);
    return p;
}


SDLApp SDLApp_update_MINUS_window(SDLApp p, Fn__SDL_Window_MUL__SDL_Window_MUL_ updater) {
    p.window = updater(p.window);
    return p;
}


SDL_Window** SDLApp_window(SDLApp* p) { return (&(p->window)); }

SDL_Point SDL_Point_init(int x, int y) {
    SDL_Point instance;
    instance.x = x;
    instance.y = y;
    return instance;
}

String SDL_Point_prn(SDL_Point *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Point");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Point");
  bufferPtr += strlen("SDL_Point") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Point SDL_Point_set_MINUS_x(SDL_Point p, int newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void SDL_Point_set_MINUS_x_BANG_(SDL_Point* pRef, int newValue) {
    pRef->x = newValue;
}


SDL_Point SDL_Point_set_MINUS_y(SDL_Point p, int newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void SDL_Point_set_MINUS_y_BANG_(SDL_Point* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_Point_str(SDL_Point *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Point");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Point");
  bufferPtr += strlen("SDL_Point") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Point SDL_Point_update_MINUS_x(SDL_Point p, Fn__int_int updater) {
    p.x = updater(p.x);
    return p;
}


SDL_Point SDL_Point_update_MINUS_y(SDL_Point p, Fn__int_int updater) {
    p.y = updater(p.y);
    return p;
}


int* SDL_Point_x(SDL_Point* p) { return (&(p->x)); }

int* SDL_Point_y(SDL_Point* p) { return (&(p->y)); }

int* SDL_Rect_h(SDL_Rect* p) { return (&(p->h)); }

SDL_Rect SDL_Rect_init(int x, int y, int w, int h) {
    SDL_Rect instance;
    instance.x = x;
    instance.y = y;
    instance.w = w;
    instance.h = h;
    return instance;
}

String SDL_Rect_prn(SDL_Rect *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Rect");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Rect");
  bufferPtr += strlen("SDL_Rect") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Rect SDL_Rect_set_MINUS_h(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'h' */
    p.h = newValue;
    return p;
}


void SDL_Rect_set_MINUS_h_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->h = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_w(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'w' */
    p.w = newValue;
    return p;
}


void SDL_Rect_set_MINUS_w_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->w = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_x(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void SDL_Rect_set_MINUS_x_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->x = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_y(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void SDL_Rect_set_MINUS_y_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_Rect_str(SDL_Rect *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Rect");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Rect");
  bufferPtr += strlen("SDL_Rect") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Rect SDL_Rect_update_MINUS_h(SDL_Rect p, Fn__int_int updater) {
    p.h = updater(p.h);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_w(SDL_Rect p, Fn__int_int updater) {
    p.w = updater(p.w);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_x(SDL_Rect p, Fn__int_int updater) {
    p.x = updater(p.x);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_y(SDL_Rect p, Fn__int_int updater) {
    p.y = updater(p.y);
    return p;
}


int* SDL_Rect_w(SDL_Rect* p) { return (&(p->w)); }

int* SDL_Rect_x(SDL_Rect* p) { return (&(p->x)); }

int* SDL_Rect_y(SDL_Rect* p) { return (&(p->y)); }

bool String__DIV__EQ_(String* a, String* b) {
    String* _12 = a; // From the 'the' function.
    bool _14 = String__EQ_(_12, b);
    bool _15 = not(_14);
    return _15;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_chomp(String* s) {
    static String _5 = "\\n$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

int String_count_MINUS_char(String* s, char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_count(s);
            bool _20 = Int__LT_(i, _19);
            bool _50 = _20;
            while (_50) {
                char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _47 = Int__PLUS_(i, 1);
                i = _47;  // Int = Int
                int _19 = String_count(s);
                bool _20 = Int__LT_(i, _19);
                _50 = _20;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_count(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    int _13 = String_count(s);
    int _16 = String_count(sub);
    int _17 = Int__MINUS_(_13, _16);
    String _18 = String_suffix_MINUS_string(s, _17);
    String* _19 = &_18; // ref
    bool _20 = String__EQ_(sub, _19);
    String_delete(_18);
    return _20;
}

char String_head(String* s) {
    char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

String String_join(Array__String* strings) {
    String _49;
    /* let */ {
        static String _7 = "";
        String *_7_ref = &_7;
        String _8 = String_copy(_7_ref);
        String result = _8;
        int _12 = Array_count__String(strings);
        int len = _12;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _45 = _23;
            while (_45) {
                String* _33 = Array_nth__String(strings, i);
                String _34 = String_copy(_33);
                String _35 = String_append(result, _34);
                result = _35;  // String = String
                int _42 = Int__PLUS_(i, 1);
                i = _42;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _45 = _23;
            }
        }
        String _48 = result;
        _49 = _48;
    }
    return _49;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(char) * 1) };
    ((char*)_8.data)[0] = '\n';
    Array__char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_count(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        char* _25 = &pad; // ref
        Array__char _26 = Array_replicate__char(x, _25);
        Array__char* _27 = &_26; // ref
        String _28 = String_from_MINUS_chars(_27);
        String _31 = String_copy(s);
        String _32 = String_append(_28, _31);
        _33 = _32;
        Array_delete__char(_26);
    }
    return _33;
}

String String_pad_MINUS_right(int len, char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_count(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        String _21 = String_copy(s);
        char* _28 = &pad; // ref
        Array__char _29 = Array_replicate__char(x, _28);
        Array__char* _30 = &_29; // ref
        String _31 = String_from_MINUS_chars(_30);
        String _32 = String_append(_21, _31);
        _33 = _32;
        Array_delete__char(_29);
    }
    return _33;
}

String String_prefix_MINUS_string(String* s, int a) {
    Array__char _11 = String_chars(s);
    Array__char* _12 = &_11; // ref
    Array__char _14 = Array_prefix_MINUS_array__char(_12, a);
    Array__char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__char(_11);
    Array_delete__char(_14);
    return _16;
}

String String_random_MINUS_sized(int n) {
    Array__char _9 = Array_repeat__char(n, Char_random);
    Array__char* _10 = &_9; // ref
    String _11 = String_from_MINUS_chars(_10);
    Array_delete__char(_9);
    return _11;
}

String String_repeat(int n, String* inpt) {
    String _43;
    /* let */ {
        static String _8 = "";
        String *_8_ref = &_8;
        String _9 = String_copy(_8_ref);
        String str = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                String _28 = String_copy(inpt);
                String _29 = String_append(str, _28);
                str = _29;  // String = String
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        String _42 = str;
        _43 = _42;
    }
    return _43;
}

String String_reverse(String* s) {
    Array__char _9 = String_chars(s);
    Array__char _10 = Array_reverse__char(_9);
    Array__char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__char(_10);
    return _12;
}

Array__String String_split_MINUS_by(String* _s, Array__char* separators) {
    Array__String _80;
    /* let */ {
        String _9 = String_copy(_s);
        String s = _9;
        Array _15 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String _16 = _15; // From the 'the' function.
        Array__String result = _16;
        Pattern _20 = Pattern_from_MINUS_chars(separators);
        Pattern pat = _20;
        Pattern* _25 = &pat; // ref
        String* _28 = &s; // ref
        int _29 = Pattern_find(_25, _28);
        int idx = _29;
        bool _36 = Int__DIV__EQ_(idx, -1);
        bool _74 = _36;
        while (_74) {
            String* _45 = &s; // ref
            String _47 = String_prefix_MINUS_string(_45, idx);
            Array__String _48 = Array_push_MINUS_back__String(result, _47);
            result = _48;  // (Array String) = (Array String)
            String* _55 = &s; // ref
            int _59 = Int__PLUS_(idx, 1);
            String _60 = String_suffix_MINUS_string(_55, _59);
            String_delete(s);
            s = _60;  // String = String
            Pattern* _67 = &pat; // ref
            String* _70 = &s; // ref
            int _71 = Pattern_find(_67, _70);
            idx = _71;  // Int = Int
            bool _36 = Int__DIV__EQ_(idx, -1);
            _74 = _36;
        }
        Array__String _78 = Array_push_MINUS_back__String(result, s);
        Array__String _79 = _78;
        _80 = _79;
        Pattern_delete(pat);
    }
    return _80;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    int _12 = String_count(sub);
    String _13 = String_prefix_MINUS_string(s, _12);
    String* _14 = &_13; // ref
    bool _15 = String__EQ_(sub, _14);
    String_delete(_13);
    return _15;
}

String String_substring(String* s, int a, int b) {
    Array__char _12 = String_chars(s);
    Array__char* _13 = &_12; // ref
    Array__char _16 = Array_subarray__char(_13, a, b);
    Array__char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__char(_12);
    Array_delete__char(_16);
    return _18;
}

String String_suffix_MINUS_string(String* s, int b) {
    Array__char _11 = String_chars(s);
    Array__char* _12 = &_11; // ref
    Array__char _14 = Array_suffix_MINUS_array__char(_12, b);
    Array__char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__char(_11);
    Array_delete__char(_14);
    return _16;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    Array _9 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(char) * 2) };
    ((char*)_9.data)[0] = '\t';
    ((char*)_9.data)[1] = ' ';
    Array__char* _10 = &_9; // ref
    Array__String _11 = String_split_MINUS_by(s, _10);
    Array_delete__char(_9);
    return _11;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__DIV__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__DIV__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

void System_exit__void (int code) {
    exit(code);
}

void draw__SDLApp_MUL_(SDLApp* app, SDL_Renderer* rend, int* state) {
    int _13 = Int_copy(state);
    int _15 = Int__DIV_(_13, 2);
    int _19 = Int_copy(state);
    int _21 = Int__DIV_(_19, 3);
    int _25 = Int_copy(state);
    int _27 = Int__DIV_(_25, 4);
    SDL_Color _28 = SDL_rgb(_15, _21, _27);
    SDL_Color* _29 = &_28; // ref
    SDL_bg(rend, _29);
}

int main(int argc, char** argv) {
    carp_init_globals(argc, argv);
    /* let */ {
        static String _6 = "The Minimalistic Color Generator";
        String *_6_ref = &_6;
        SDLApp _9 = SDLApp_create(_6_ref, 400, 300);
        SDLApp app = _9;
        int state = 0;
        SDLApp* _16 = &app; // ref
        SDLApp_run_MINUS_with_MINUS_callbacks__int(_16, SDLApp_quit_MINUS_on_MINUS_esc, tick, draw__SDLApp_MUL_, state);
        SDLApp_delete(app);
    }
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

int tick(int state) {
    int _7 = Int__PLUS_(state, 10);
    return _7;
}

