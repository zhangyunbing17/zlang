// 由Z语言生成
   
#include <stdio.h> 
#include <stdlib.h>
#include <signal.h>
#include <stdarg.h> 
#include <inttypes.h>  

#ifdef __linux__ 
#include <pthread.h> 
#endif 

#ifdef __APPLE__ 

#endif 

#ifdef _WIN32 
#include <windows.h>
//#include <WinSock2.h> 
#endif 

//================================== TYPEDEFS ================================*/ 
typedef struct tm tm;  
typedef unsigned char byte;
typedef unsigned int uint;
typedef int64_t i64;
typedef int32_t i32;
typedef int16_t i16;
typedef int8_t i8;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
typedef uint32_t rune;
typedef float f32;
typedef double f64; 

//typedef unsigned char* charptr;
//typedef unsigned char* byteptr;
//typedef int* intptr;
//typedef void* voidptr;

typedef struct map map;
typedef struct array array;

typedef array array_string; 
typedef array array_int; 
typedef array array_byte; 
typedef array array_uint; 
typedef array array_float; 
typedef array array_f32; 
typedef array array_f64; 
typedef map map_int; 
typedef map map_string; 
#ifndef bool
	typedef int bool;
	#define true 1
	#define false 0
#endif

//============================== MACROS =============================*/ 

#define _PUSH(arr, val, typ,  Carr) {typ Carr = (val); array_push(arr, &Carr);}
#define _PUSH_MANY(arr, val, typ, Carr) {typ Carr = (val); array_push_many(arr, Carr.data, Carr.len);}

#define _IN(typ, val, arr) array_##typ##_contains(arr, val) 
#define _IN1(typ, val, arr) array_baohan(arr, val) 

//#define z_sizeof(typ) siz##eof ##typ##;

#define ALLOC_INIT(type, ...) (type *)memdup((type[]){ __VA_ARGS__ }, sizeof(type)) 
/*
#define delete1(p) {\n	if( (p) != NULL ){\n	free((p));\n	(p) = NULL;\n}
*/

//================================== GLOBALS =================================*/   
//int Z_ZERO = 0; 
char* g_str_buf; 
int load_so(char*);
void reload_so();
void init_consts();
#include <sys/stat.h>
#include <signal.h>
#include <sys/unistd.h> // tcc
#include <errno.h>
#include <winsock2.h>
#include <time.h>
typedef struct array array;
typedef array array_int;
typedef array array_string;
typedef array array_char;
typedef struct string string;
typedef struct ustring ustring;
typedef struct map map;
typedef array array_Entry;
typedef struct Entry Entry;
typedef struct Option Option;
typedef struct os__FILE os__FILE;
typedef struct os__File os__File;
typedef struct os__FileInfo os__FileInfo;
typedef Option Option_os__File;
typedef Option Option_os__File;
typedef Option Option_os__File;
typedef Option Option_string;
typedef array array_ustring;
typedef Option Option_string;
typedef struct os__filetime os__filetime;
typedef struct os__win32finddata os__win32finddata;
typedef struct time__Time time__Time;
typedef Option Option_int;
typedef struct strings__Builder strings__Builder;
typedef struct GenC GenC;
typedef struct Fn Fn;
typedef array array_Var;
typedef struct Var Var;
typedef struct Parser Parser;
typedef array array_ScanRes;
typedef array array_Token;
typedef struct Scanner Scanner;
typedef struct ScanRes ScanRes;
typedef int AccessMod;
typedef struct Type Type;
typedef array array_Fn;
typedef struct Table Table;
typedef array array_Type;
typedef map map_Fn;
typedef struct FileImportTable FileImportTable;
typedef int Token;
typedef int BuildMode;
typedef int OS;
typedef int Pass;
typedef struct Z Z;
typedef struct Preferences Preferences;
typedef Option Option_os__File;
typedef Option Option_os__File;
typedef Option Option_os__File;
typedef Option Option_string;
typedef Option Option_string;
typedef Option Option_int;
struct array {
    void* data;
    int len;
    int cap;
    int elm_size;
    int cap0;
    int len0;
    int elm1_size;
    int wei;
    int* bounds;
    int* wei_val;
    char* elm_type;
}; 
struct string {
    char* str;
    int len;
}; 
struct ustring {
    string s;
    array_int runes;
    int len;
}; 
struct map {
    array_Entry entries;
    int size;
    int cap;
    string elm_type;
    int elm_size;
}; 
struct Entry {
    string key;
    void* val;
}; 
struct Option {
    char data[255];
    string error;
    bool ok;
}; 
struct os__FILE {
}; 
struct os__File {
    os__FILE* cfile;
}; 
struct os__FileInfo {
    string name;
    int size;
}; 
struct os__filetime {
    u32 dwLowDateTime;
    u32 dwHighDateTime;
}; 
struct os__win32finddata {
    u32 dwFileAttributes;
    os__filetime ftCreationTime;
    os__filetime ftLastAccessTime;
    os__filetime ftLastWriteTime;
    u32 nFileSizeHigh;
    u32 nFileSizeLow;
    u32 dwReserved0;
    u32 dwReserved1;
    u16 cFileName[260];
    u16 cAlternateFileName[14];
    u32 dwFileType;
    u32 dwCreatorType;
    u16 wFinderFlags;
}; 
struct time__Time {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int uni;
}; 
struct strings__Builder {
    array_char buf;
    int len;
}; 
struct GenC {
    Pass run;
    bool nogen;
    string tmp_line;
    string cur_line;
    string prev_line;
    bool is_tmp;
    string fn_main;
    string stash;
    string fmt_indent;
    os__File out;
    string out_path;
    array_string typedefs;
    array_string type_aliases;
    array_string includes;
    array_string types;
    array_string thread_args;
    array_string thread_fns;
    array_string consts;
    array_string fns;
    array_string so_fns;
    array_string consts_init;
    array_string lines;
    bool is_user;
}; 
struct Fn {
    string pkg;
    string _class;
    string orig_class;
    string name;
    string ret_type;
    array_Var args;
    string T;
    bool is_private;
    bool is_method;
    bool is_interface;
    array_Var local_vars;
    int var_idx;
    int scope_level;
    bool is_c;
    bool returns_error;
    bool is_decl;
}; 
struct Var {
    string type;
    string type1;
    string type2;
    string name;
    string arr_ss;
    bool is_let;
    bool is_const;
    bool is_import_const;
    bool is_global;
    bool is_array;
    bool is_self;
    bool is_arg;
    string parent;
    void* value;
    int counts;
    bool ptr;
    bool ref;
    string mod;
    array_Var args;
    AccessMod access_mod;
    string attr;
    string attr2;
    string parent_fn;
    int line_nr;
    bool is_used;
    int scope_level;
    string z_cur_fn;
}; 
struct Parser {
    string file_path;
    string file_name;
    Scanner* scanner;
    array_ScanRes res;
    int res_idx;
    array_Token tokens;
    int token_idx;
    int tk_pos;
    Token tok;
    string lit;
    GenC* genc;
    Table* table;
    FileImportTable* import_table;
    Pass run;
    OS os;
    string mod;
    bool inside_const;
    Var decl_var;
    Var expr_var;
    string assigned_type;
    string expected_type;
    string _arr_ss;
    string _arr;
    int tmp_cnt;
    bool is_script;
    Preferences* pref;
    bool neibu_bao;
    array_string zh_lines;
    bool inside_if_expr;
    bool is_struct_init;
    int if_expr_cnt;
    int for_expr_cnt;
    bool ptr_cast;
    bool calling_c;
    Fn* cur_fn;
    bool returns;
    string zroot;
    bool is_c_struct_init;
    bool is_par;
    bool can_chash;
    string attr;
    array_string attrs;
    array_string Generic;
    string gener;
    bool z_syntax;
    string z_log;
    bool z_statem;
    bool z_class;
    string z_type;
    string z_self;
    string attr_type;
    string attr_name;
    string z_fn_name;
    int prev_tk_pos;
    Token prev_tok;
    string prev_lit;
    int prev_tk_pos2;
    Token prev_tok2;
    string prev_lit2;
    int line_nr;
    int line_pos;
    int top_pos;
}; 
struct Scanner {
    string file_path;
    string text;
    int pos;
    int prev_line_pos;
    int line_nr;
    int line_pos;
    int col_nr;
    int line_tok_nr;
    int tok_pos;
    bool inside_string;
    bool dollar_start;
    bool dollar_end;
    bool debug;
    string line_comment;
    bool started;
    bool re_nl;
    int fmt_indent;
    bool err;
    int err_pos;
    int err_line;
    string err_msg;
}; 
struct ScanRes {
    Token tok;
    string lit;
}; 
struct Type {
    string mod;
    string name;
    string orig_name;
    array_Var attributes;
    array_Fn methods;
    string parent;
    Fn func;
    bool is_c;
    bool is_interface;
    bool is_struct;
    bool is_enum;
    array_string enum_vals;
    bool is_JiMing;
}; 
struct Table {
    array_Type types;
    array_Var consts;
    map_Fn fns;
    map_int obf_ids;
    array_string imports;
    array_string flags;
    int fn_cnt;
    bool obfuscate;
}; 
struct FileImportTable {
    string file_path;
    map_string imports;
}; 
struct Z {
    OS os;
    string out_name_c;
    array_string files;
    string dir;
    Table* table;
    GenC* genc;
    Preferences* pref;
    string ZYuYan_dir;
    string out_name;
    string zroot;
}; 
struct Preferences {
    BuildMode build_mode;
    bool nofmt;
    bool is_test;
    bool is_script;
    bool is_live;
    bool is_so;
    bool is_prof;
    bool translated;
    bool is_prod;
    bool is_verbose;
    bool obfuscate;
    bool is_play;
    bool is_repl;
    bool is_run;
    bool show_c_cmd;
    bool sanitize;
    bool is_debug;
    bool no_auto_free;
    string c_options;
    bool z_c;
}; 

string _STR(const char*, ...);


string _STR_TMP(const char*, ...);

array new_array2(int wei, int* a, int elm_size, string typ);/*decl*/
void* array_get0(array self, int i);/*decl*/
array new_array(int mylen, int cap, int elm_size);/*decl*/
array new_array1(int cap, int elm_size, string typ);/*decl*/
array new_array_from_c_array(int len, int cap, int elm_size, void* c_array);/*decl*/
array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, void* c_array);/*decl*/
array array_repeat(void* val, int nr_repeats, int elm_size);/*decl*/
void array_set(array* self, int idx, void* val);/*decl*/
void* array_get(array self, int i);/*decl*/
bool array_baohan(array self, void* val);/*decl*/
void array_insert(array* self, int i, void* val);/*decl*/
void array_prepend(array* self, void* val);/*decl*/
void array_delete(array* self, int idx);/*decl*/
void* array_first(array self);/*decl*/
void* array_last(array self);/*decl*/
array array_slice(array self, int start, int _end);/*decl*/
array array_left(array self, int n);/*decl*/
array array_right(array self, int n);/*decl*/
void array_push(array* self, void* val);/*decl*/
void array_push_many(array* self, void* val, int size);/*decl*/
void array_sort_with_compare(array* self, void* compare);/*decl*/
string array_int_str(array_int self);/*decl*/
string array_string_str(array_string self);/*decl*/
string array_string_strln(array_string self);/*decl*/
void array_int_free(array_int self);/*decl*/
void array_fre(array* self);/*decl*/
string array_char_hex(array_char self);/*decl*/
bool char_is_digit(char self);/*decl*/
bool char_is_letter(char self);/*decl*/
bool char_is_white(char self) ; //tou
string tos(char* s, int len);/*decl*/
string c2s(char* s) ; //tou
string tos_clone(char* s);/*decl*/
void todo();/*decl*/
string string_clone(string self);/*decl*/
char* string_cstr(string self);/*decl*/
string string_replace(string self, string rep, string with);/*decl*/
int string_int(string self);/*decl*/
i64 string_i64(string self);/*decl*/
f32 string_f32(string self);/*decl*/
bool string_eq(string self, string a);/*decl*/
bool string_ne(string self, string a);/*decl*/
bool string_lt(string self, string a);/*decl*/
bool string_le(string self, string a);/*decl*/
bool string_gt(string self, string a);/*decl*/
bool string_ge(string self, string a);/*decl*/
string string_add(string self, string a);/*decl*/
array_string string_split(string self, string delim);/*decl*/
array_string string_split_single(string self, char delim);/*decl*/
array_string string_split_into_lines(string self);/*decl*/
string string_left(string self, int n);/*decl*/
string string_right(string self, int n);/*decl*/
string string_substr(string self, int start, int end);/*decl*/
int string_index(string self, string p);/*decl*/
int string_last_index(string self, string p);/*decl*/
int string_index_after(string self, string p, int start);/*decl*/
string string_all_before(string self, string dot);/*decl*/
string string_first_before(string self, string dot);/*decl*/
string string_first_after(string self, string dot);/*decl*/
string string_last_before(string self, string dot);/*decl*/
string string_last_after(string self, string dot);/*decl*/
string string_all_after(string self, string dot);/*decl*/
bool string_contains(string self, string p);/*decl*/
bool string_starts_with(string self, string p);/*decl*/
bool string_ends_with(string self, string p);/*decl*/
string string_to_lower(string self);/*decl*/
string string_to_upper(string self);/*decl*/
string string_find_between(string self, string start, string end);/*decl*/
bool array_string_contains(array_string self, string val);/*decl*/
bool array_int_contains(array_int self, int val);/*decl*/
bool is_space(char c);/*decl*/
bool char_is_space(char self);/*decl*/
string string_trim_space(string self);/*decl*/
string string_trim(string self, char c);/*decl*/
string string_trim_left(string self, string cutset);/*decl*/
string string_trim_right(string self, string cutset);/*decl*/
int compare_strings(string* a, string* b);/*decl*/
int compare_strings_by_len(string* a, string* b);/*decl*/
int compare_lower_strings(string* a, string* b);/*decl*/
void array_string_sort(array_string* self);/*decl*/
void array_string_sort_ignore_case(array_string* self);/*decl*/
void array_string_sort_by_len(array_string* self);/*decl*/
ustring string_ustring(string self);/*decl*/
ustring string_ustring_tmp(string self);/*decl*/
string ustring_substr(ustring self, int start, int end);/*decl*/
string ustring_left(ustring self, int pos);/*decl*/
string ustring_right(ustring self, int pos);/*decl*/
char string_at(string self, int idx);/*decl*/
string ustring_at(ustring self, int idx);/*decl*/
void ustring_free(ustring self);/*decl*/
int abs(int a);/*decl*/
void string_free(string self);/*decl*/
void array_string_free(array_string self);/*decl*/
string array_string_join(array_string self, string del);/*decl*/
string array_string_join_lines(array_string self);/*decl*/
string string_reverse(string self);/*decl*/
string string_limit(string self, int max);/*decl*/
array_char string_bytes(string self) ; //tou
void z_exit(int code) ; //tou
bool isnil(void* v) ; //tou
void z_panic(string s) ; //tou
void println(string s) ; //tou
void z_print(string s) ; //tou
char* z_malloc(int n) ; //tou
char* z_calloc(int n) ; //tou
void z_free(void* ptr) ; //tou
int _strlen(char* s) ; //tou
void* memdup(void* src, int sz) ; //tou
string double_str(double self);/*decl*/
string f64_str(f64 self);/*decl*/
string f32_str(f32 self);/*decl*/
string ptr_str(void* ptr);/*decl*/
string int_str(int self);/*decl*/
string u8_str(u8 self);/*decl*/
string i64_str(i64 self);/*decl*/
string bool_str(bool self);/*decl*/
string int_hex(int self);/*decl*/
string i64_hex(i64 self);/*decl*/
bool array_char_contains(array_char self, char val);/*decl*/
string rune_str(rune self);/*decl*/
string char_str(char self);/*decl*/
int utf8_char_len(char b) ; //tou
string utf32_to_str(u32 code) ; //tou
string utf32_to_str_no_malloc(u32 code, void* buf) ; //tou
int string_utf32_code(string self) ; //tou
map new_map(int cap, int elm_size, char* elm) ; //tou
map new_map1(int cap, int elm_size, string elm) ; //tou
Entry map_new_entry(map* self, string key, void* val) ; //tou
void map_set(map* self, string key, void* val) ; //tou
bool map_get(map self, string key, void* out) ; //tou
array_string map_keys(map* self) ; //tou
bool map_exists(map self, string key) ; //tou
void map_println(map self) ; //tou
void map_free(map self) ; //tou
string map_string_str(map_string self) ; //tou
Option opt_ok(void* data, int size) ; //tou
Option z_error(string s) ; //tou
void Console__win_color();/*decl*/
string Console__format(string msg, string open, string close);/*decl*/
string Console__black(string msg) ; //tou
string Console__blue(string msg);/*decl*/
string Console__cyan(string msg);/*decl*/
string Console__dim(string msg);/*decl*/
string Console__green(string msg);/*decl*/
string Console__gray(string msg);/*decl*/
string Console__magenta(string msg);/*decl*/
string Console__red(string msg);/*decl*/
string Console__white(string msg);/*decl*/
string Console__yellow(string msg);/*decl*/
string Console__hidden(string msg);/*decl*/
string Console__inverse(string msg);/*decl*/
string Console__reset(string msg);/*decl*/
string Console__italic(string msg);/*decl*/
string Console__bold(string msg);/*decl*/
string Console__strikethrough(string msg);/*decl*/
string Console__underline(string msg);/*decl*/
string Console__bg_black(string msg);/*decl*/
string Console__bg_blue(string msg);/*decl*/
string Console__bg_cyan(string msg);/*decl*/
string Console__bg_green(string msg);/*decl*/
string Console__bg_magenta(string msg);/*decl*/
string Console__bg_red(string msg);/*decl*/
string Console__bg_white(string msg);/*decl*/
string Console__bg_yellow(string msg);/*decl*/
void Console__set_cursor_position(int x, int y);/*decl*/
void Console__move(int n, string direction);/*decl*/
void Console__cursor_up(int n);/*decl*/
void Console__cursor_down(int n);/*decl*/
void Console__cursor_forward(int n);/*decl*/
void Console__cursor_back(int n);/*decl*/
void Console__erase_display(string t);/*decl*/
void Console__erase_toend();/*decl*/
void Console__erase_tobeg();/*decl*/
void Console__erase_clear();/*decl*/
void Console__erase_del_clear();/*decl*/
void Console__erase_line(string t);/*decl*/
void Console__erase_line_toend();/*decl*/
void Console__erase_line_tobeg();/*decl*/
void Console__erase_line_clear();/*decl*/
void Console__show_cursor();/*decl*/
void Console__hide_cursor();/*decl*/
void os__todo_remove();/*decl*/
array_string os__init_os_args(int argc, char** argv);/*decl*/
array_string os__parse_windows_cmd_line(char* cmd);/*decl*/
void os__File_write(os__File self, string s);/*decl*/
void os__File_write_bytes(os__File self, void* data, int size);/*decl*/
void os__File_write_bytes_at(os__File self, void* data, int size, int pos);/*decl*/
void os__File_writeln(os__File self, string s) ; //tou
void os__File_flush(os__File self);/*decl*/
void os__File_close(os__File self);/*decl*/
Option_os__File os__open(string path);/*decl*/
Option_os__File os__create(string path);/*decl*/
Option_os__File os__open_append(string path);/*decl*/
void os__write_file(string path, string text);/*decl*/
Option_string os__read_file(string path);/*decl*/
string os__read_file2(string path);/*decl*/
array_string os__read_lines(string path);/*decl*/
array_ustring os__read_ulines(string path);/*decl*/
int os__file_size(string path);/*decl*/
void os__mv(string old, string _new);/*decl*/
bool os__file_exists(string path);/*decl*/
bool os__dir_exists(string path);/*decl*/
void os__mkdir(string path);/*decl*/
void os__rm(string path);/*decl*/
void os__print_c_errno();/*decl*/
string os__ext(string path);/*decl*/
string os__dir(string path);/*decl*/
string os__basedir(string path);/*decl*/
string os__path_sans_ext(string path);/*decl*/
string os__filename(string path);/*decl*/
string os__get_line();/*decl*/
string os__get_raw_line();/*decl*/
string os__user_os();/*decl*/
Option_string os__hostname();/*decl*/
string os__home_dir();/*decl*/
string os__executable();/*decl*/
bool os__is_dir(string path);/*decl*/
void os__chdir(string path);/*decl*/
string os__getwd();/*decl*/
array_string os__ls(string path);/*decl*/
int os__system(string cmd);/*decl*/
os__FILE* os__popen(string path);/*decl*/
string os__exec(string cmd);/*decl*/
void os__clear();/*decl*/
string os__getenv(string key);/*decl*/
int os__setenv(string name, string value, bool overwrite);/*decl*/
int os__unsetenv(string name);/*decl*/
void os__signal(int signum, void* handler);/*decl*/
int os__fork();/*decl*/
int os__wait();/*decl*/
int os__file_last_mod_unix(string path);/*decl*/
void os__print_backtrace();/*decl*/
void time__remove_me_when_c_bug_is_fixed();/*decl*/
time__Time time__now();/*decl*/
time__Time time__random();/*decl*/
time__Time time__unix(int u);/*decl*/
time__Time time__convert_ctime(tm t);/*decl*/
string time__Time_format_ss(time__Time self);/*decl*/
string time__Time_format(time__Time self);/*decl*/
string time__Time_smonth(time__Time self);/*decl*/
string time__Time_hhmm(time__Time self);/*decl*/
string time__Time_hhmm12(time__Time self);/*decl*/
string time__Time_hhmmss(time__Time self);/*decl*/
string time__Time_ymmdd(time__Time self);/*decl*/
string time__Time_md(time__Time self);/*decl*/
string time__Time_clean(time__Time self);/*decl*/
string time__Time_clean12(time__Time self);/*decl*/
time__Time time__parse(string s);/*decl*/
time__Time time__new_time(time__Time t);/*decl*/
int time__Time_calc_unix(time__Time* self);/*decl*/
time__Time time__Time_add_seconds(time__Time self, int seconds);/*decl*/
int time__since(time__Time t);/*decl*/
string time__Time_relative(time__Time self);/*decl*/
int time__day_of_week(int y, int m, int d);/*decl*/
int time__Time_day_of_week(time__Time self);/*decl*/
string time__Time_weekday_str(time__Time self);/*decl*/
i64 time__ticks();/*decl*/
void time__sleep(int seconds);/*decl*/
void time__usleep(int n);/*decl*/
void time__sleep_ms(int n);/*decl*/
bool time__is_leap_year(int year);/*decl*/
Option_int time__days_in_month(int month, int year);/*decl*/
strings__Builder strings__new_builder(int initial_size);/*decl*/
void strings__Builder_write(strings__Builder* self, string s);/*decl*/
void strings__Builder_writeln(strings__Builder* self, string s);/*decl*/
string strings__Builder_str(strings__Builder self);/*decl*/
void strings__Builder_cut(strings__Builder self, int n);/*decl*/
void strings__Builder_free(strings__Builder* self);/*decl*/
string strings__repeat(char c, int n);/*decl*/
string strings__repeat2(string c, int n);/*decl*/
void rand__seed(int s);/*decl*/
int rand__next(int max);/*decl*/
f64 math__abs(f64 a);/*decl*/
f64 math__acos(f64 a);/*decl*/
f64 math__asin(f64 a);/*decl*/
f64 math__atan(f64 a);/*decl*/
f64 math__atan2(f64 a, f64 b);/*decl*/
f64 math__cbrt(f64 a);/*decl*/
int math__ceil(f64 a);/*decl*/
f64 math__cos(f64 a);/*decl*/
f64 math__cosh(f64 a);/*decl*/
f64 math__degrees(f64 radians);/*decl*/
f64 math__exp(f64 a);/*decl*/
array_int math__digits(int n, int base);/*decl*/
f64 math__erf(f64 a);/*decl*/
f64 math__erfc(f64 a);/*decl*/
f64 math__exp2(f64 a);/*decl*/
int math__recursive_product(int n, int* current_number_ptr);/*decl*/
i64 math__factorial(int n);/*decl*/
f64 math__floor(f64 a);/*decl*/
f64 math__fmod(f64 a, f64 b);/*decl*/
f64 math__gamma(f64 a);/*decl*/
i64 math__gcd(i64 a, i64 b);/*decl*/
i64 math__lcm(i64 a, i64 b);/*decl*/
f64 math__log(f64 a);/*decl*/
f64 math__log2(f64 a);/*decl*/
f64 math__log10(f64 a);/*decl*/
f64 math__log_gamma(f64 a);/*decl*/
f64 math__log_n(f64 a, f64 b);/*decl*/
f64 math__max(f64 a, f64 b);/*decl*/
f64 math__min(f64 a, f64 b);/*decl*/
f64 math__pow(f64 a, f64 b);/*decl*/
f64 math__radians(f64 degrees);/*decl*/
f64 math__round(f64 f);/*decl*/
f64 math__sin(f64 a);/*decl*/
f64 math__sinh(f64 a);/*decl*/
f64 math__sqrt(f64 a);/*decl*/
f64 math__tan(f64 a);/*decl*/
f64 math__tanh(f64 a);/*decl*/
f64 math__trunc(f64 a);/*decl*/
string Parser_array_init(Parser* self) ; //tou
void Parser_register_array(Parser* self, string typ) ; //tou
string Parser_arr_init(Parser* self) ; //tou
void Parser_assign_stat(Parser* self, Var v, int ph, bool is_arr) ; //tou
string Parser_assoc(Parser* self) ; //tou
string Parser_bool_expression(Parser* self) ; //tou
string Parser_bterm(Parser* self) ; //tou
void Z_cc(Z* self) ; //tou
GenC* new_cgen(string out_name_c) ; //tou
void GenC_save(GenC* self) ; //tou
void GenC_genln(GenC* self, string s) ; //tou
void GenC_gen(GenC* self, string s) ; //tou
void GenC_start_tmp(GenC* self) ; //tou
string GenC_end_tmp(GenC* self) ; //tou
int GenC_biaoqian(GenC* self) ; //tou
void GenC_cha_ru(GenC* self, int pos, string val) ; //tou
int GenC_biaoqian2(GenC* self) ; //tou
void GenC_cha_ru2(GenC* self, int pos, string val) ; //tou
void GenC_insert_before(GenC* self, string val) ; //tou
void GenC_register_thread_fn(GenC* self, string wrapper_name, string wrapper_text, string struct_text) ; //tou
string Z_prof_counters(Z* self);/*decl*/
string Parser_print_prof_counters(Parser* self) ; //tou
void Parser_gen_type(Parser* self, string s) ; //tou
void Parser_gen_typedef(Parser* self, string s) ; //tou
void Parser_gen_type_alias(Parser* self, string s) ; //tou
void build_thirdparty_obj_file(string flag) ; //tou
void Parser_class_decl(Parser* self) ; //tou
void Parser_f_decl(Parser* self, string class_name, string attr_type, string attr_name, bool p) ; //tou
void Parser_f_args(Parser* self, Fn* f) ; //tou
Fn* new_Fn(string pkg, bool private) ; //tou
Fn* Fn_Fn(string pkg, bool private) ; //tou
Var Fn_find_var(Fn* self, string name) ; //tou
bool Fn_known_var(Fn* self, string name) ; //tou
void Fn_register_var(Fn* self, Var v) ; //tou
void Fn_clear_vars(Fn* self) ; //tou
void Fn_open_scope(Fn* self) ; //tou
void Fn_close_scope(Fn* self) ; //tou
string Fn_str(Fn* self) ; //tou
void Fn_mark_var_used(Fn* self, Var v) ; //tou
string Parser_struct_init(Parser* self, bool is_c_struct_init) ; //tou
void Z_compile(Z* self) ; //tou
bool is_compile_time_const(string s) ; //tou
void Parser_const_decl(Parser* self) ; //tou
string Parser_dot(Parser* self, string str_typ, int method_ph) ; //tou
void Parser_enum_decl(Parser* self) ; //tou
void Parser_error(Parser* self, string s) ; //tou
void Parser_log2(Parser* self, string color, string msg) ; //tou
string Parser_expression(Parser* self) ; //tou
string Parser_term(Parser* self) ; //tou
string Parser_unary(Parser* self) ; //tou
string Parser_factor(Parser* self) ; //tou
void Z_add_user_z_files(Z* self) ; //tou
array_string Z_duqu_z(Z* self, string dir) ; //tou
string Z_mokuai_chuli(Z* self, string pkg) ; //tou
string Parser_typ_to_fmt(Parser* self, string typ, int level) ; //tou
string format_str(string str) ; //tou
void Parser_fmt_0(Parser* self) ; //tou
void Parser_fmt_inc(Parser* self) ; //tou
void Parser_fmt_dec(Parser* self) ; //tou
string Scanner_get_var_name(Scanner* self, int pos) ; //tou
void Scanner_cao_change(Scanner* self, string operator) ; //tou
int Scanner_get_opening_bracket(Scanner* self) ; //tou
void Scanner_create_type_string(Scanner* self, Type T, string name) ; //tou
void Parser_create_type_string(Parser* self, Type T, string name) ; //tou
bool Parser_is_sig(Parser* self) ; //tou
void Parser_fn_decl(Parser* self) ; //tou
void Parser_fn_args(Parser* self, Fn* f) ; //tou
void Parser_check_unused_variables(Parser* self) ; //tou
string Fn_typ_str(Fn self) ; //tou
string Fn_str_args(Fn* self, Table* table) ; //tou
void Parser_fn_call(Parser* self, Fn f, int method_ph, string receiver_var, string got_type) ; //tou
Fn* Parser_fn_call_args(Parser* self, Fn* f) ; //tou
void Parser_for_st(Parser* self) ; //tou
string Parser_get_type(Parser* self) ; //tou
void Parser_go_stat(Parser* self) ; //tou
bool contains_capital(string s) ; //tou
bool is_number_type(string typ) ; //tou
bool is_float_type(string typ) ; //tou
string default_type(string typ) ; //tou
int type_size1(string typ);/*decl*/
string os_name_to_ifdef(string name) ; //tou
void Parser_comp_time(Parser* self) ; //tou
void Parser_chash(Parser* self) ; //tou
string Parser_if_st(Parser* self, bool is_expr, int elif_depth) ; //tou
void Parser_import_stat(Parser* self) ; //tou
string Parser_index_expr(Parser* self, string typ, int fn_ph) ; //tou
Fn* Parser_interface_method(Parser* self, string attr_name, string receiver) ; //tou
bool Scanner_has_gone_over_line_end(Scanner* self) ; //tou
void Parser_async_fn_call(Parser* self, Fn f, int method_ph, string receiver_var, string _type) ; //tou
string Parser_js_decode(Parser* self) ; //tou
void Parser_gen_json_for_type(Parser* self, Type typ);/*decl*/
bool is_js_prim(string typ);/*decl*/
string Parser_decode_array(Parser* self, string typ);/*decl*/
string js_enc_name(string typ);/*decl*/
string js_dec_name(string typ);/*decl*/
string Parser_encode_array(Parser* self, string typ);/*decl*/
string Parser_map_init(Parser* self) ; //tou
void Parser_register_map(Parser* self, string typ) ; //tou
string Parser_name_expr(Parser* self) ; //tou
void Parser_log(Parser* self, string s) ; //tou
bool Parser_first_run(Parser* self) ; //tou
Parser Z_new_parser(Z* self, string path, Pass run) ; //tou
void Parser_next(Parser* self) ; //tou
void Parser_parse(Parser* self) ; //tou
void Parser_hanshu_jiexi(Parser* self) ; //tou
string Parser_strtok(Parser* self) ; //tou
string Parser_check_name(Parser* self) ; //tou
string Parser_check_string(Parser* self) ; //tou
void Parser_check(Parser* self, Token expected) ; //tou
void Parser_jiancha(Parser* self, string expe) ; //tou
void Parser_print_tok(Parser* self) ; //tou
void Parser_genln(Parser* self, string s) ; //tou
void Parser_gen(Parser* self, string s) ; //tou
void Parser_zh_genln(Parser* self, string s) ; //tou
bool Parser_fileis(Parser* self, string s) ; //tou
string Parser_cast(Parser* self, string typ) ; //tou
string Parser_get_tmp(Parser* self) ; //tou
string Parser_get_add_digit(Parser* self, string val) ; //tou
int Parser_get_tmp_counter(Parser* self) ; //tou
string prepend_pkg(string pkg, string name) ; //tou
string Parser_prepend_pkg(Parser* self, string name) ; //tou
bool Parser_building_v(Parser* self) ; //tou
void Parser_attribute(Parser* self) ; //tou
array_string run_repl();/*decl*/
void Parser_return_st(Parser* self) ; //tou
Scanner* new_Scanner(string file_path) ; //tou
ScanRes scan_res(Token tok, string lit) ; //tou
string Scanner_ident_name(Scanner* self) ; //tou
string Scanner_ident_number(Scanner* self) ; //tou
bool is_name_char(char c) ; //tou
bool is_white(char c) ; //tou
bool is_nl(char c) ; //tou
void Scanner_skip_whitespace(Scanner* self) ; //tou
ScanRes Scanner_scan(Scanner* self) ; //tou
string Scanner_ident_string(Scanner* self) ; //tou
string Scanner_ident_char(Scanner* self) ; //tou
ScanRes Parser_peek(Parser* self) ; //tou
ScanRes Scanner_peek(Scanner* self) ; //tou
void Scanner_debug_tokens(Scanner* self) ; //tou
void Scanner_error(Scanner* self, string msg) ; //tou
string Parser_statements(Parser* self) ; //tou
string Parser_statements_no_curly_end(Parser* self) ; //tou
string Parser_statement(Parser* self, bool add_semi) ; //tou
void Parser_char_expr(Parser* self) ; //tou
void Parser_string_expr(Parser* self) ; //tou
void Parser_type_decl(Parser* self) ; //tou
void Parser_typedef_decl(Parser* self) ; //tou
void Parser_struct_decl(Parser* self) ; //tou
void Parser_switch_stat(Parser* self) ; //tou
void Type_add_attr(Type* self, string name, string typ, bool is_let, string attr, AccessMod access_mod) ; //tou
Var Type_find_attr(Type* self, string name) ; //tou
bool Type_has_attr(Type* self, string name) ; //tou
void Type_add_method(Type* self, Fn f) ; //tou
bool Type_has_method(Type* self, string name) ; //tou
Fn Type_find_method(Type* self, string name) ; //tou
bool Type_has_enum_val(Type* self, string name) ; //tou
string Type_str(Type* self) ; //tou
Table* new_Table(bool obfuscate) ; //tou
void Table_register_parent_with_type(Table* self, string parent, string typ) ; //tou
void Table_register_type(Table* self, string typ) ; //tou
void Table_register_type2(Table* self, Type typ) ; //tou
Type* Table_find_type(Table* self, string name) ; //tou
bool Table_known_type(Table* self, string typ) ; //tou
void Parser_register_global(Parser* self, string name, string typ) ; //tou
void Table_register_const(Table* self, string name, string typ, string mod, bool is_imp) ; //tou
Var Table_find_const(Table* self, string name) ; //tou
bool Table_known_const(Table* self, string name) ; //tou
void Table_register_fn(Table* self, Fn new_fn) ; //tou
Fn Table_find_fn(Table* self, string name) ; //tou
bool Table_known_fn(Table* self, string name) ; //tou
Var Table_find_attr(Table* self, Type* typ, string name) ; //tou
Fn Table_find_method(Table* self, Type* typ, string name) ; //tou
bool Table_type_has_attr(Table* self, Type* typ, string name) ; //tou
bool Table_type_has_method(Table* self, Type* typ, string name) ; //tou
bool Table_is_interface(Table* self, string name) ; //tou
bool Table_main_exists(Table* self) ; //tou
void Table_reg_module(Table* self, string pkg) ; //tou
void Table_add_import(Table* self, string pkg) ; //tou
bool Table_known_pkg(Table* self, string pkg) ; //tou
string Table_qualify_module(Table* self, string mod, string file_path) ; //tou
FileImportTable* new_FileImportTable(string file_path) ; //tou
bool FileImportTable_known_alias(FileImportTable* self, string alias) ; //tou
void FileImportTable_register_alias(FileImportTable* self, string mod, string alias) ; //tou
string FileImportTable_resolve_alias(FileImportTable* self, string alias) ; //tou
void Parser_register_parent_with_type(Parser* self, string parent, string strtyp) ; //tou
Type* Parser_find_type(Parser* self, string name) ; //tou
bool Parser_check_types(Parser* self, string got, string yuan, bool throw) ; //tou
bool Parser_satisfies_interface(Parser* self, string interface_name, string _typ, bool throw) ; //tou
bool is_valid_int_const(string val, string typ) ; //tou
string Table_gen_c_var_name(Table* self, string name) ; //tou
string Table_gen_c_fn_name(Table* self, Fn* f) ; //tou
string Table_gen_c_type_name_pair(Table* self, string typ, string name) ; //tou
map_int build_keys() ; //tou
Token key_to_token(string key) ; //tou
bool is_key(string key) ; //tou
string Token_str(Token self) ; //tou
bool Token_is_decl(Token self) ; //tou
bool Token_is_assign(Token self) ; //tou
bool array_Token_contains(array_Token self, Token val) ; //tou
void Parser_var_decl(Parser* self) ; //tou
void Parser_v_decl(Parser* self, string rt) ; //tou
void Parser_register_var(Parser* self, Var v) ; //tou
string Parser_var_expr(Parser* self, Var v) ; //tou
Z* new_Z(array_string args) ; //tou
string get_arg2(array_string args, string a, string dft) ; //tou
OS get_os(string target_os) ; //tou
array_string env_vflags_and_os_args() ; //tou
void Z_log(Z* self, string s) ; //tou
array_int g_ustring_runes; // global
#define os__SUCCESS 0 
#define os__ERROR_INSUFFICIENT_BUFFER 130 
#define os__FILE_SHARE_READ 1 
#define os__FILE_SHARE_WRITE 2 
#define os__FILE_SHARE_DELETE 4 
#define os__FILE_NOTIFY_CHANGE_FILE_NAME 1 
#define os__FILE_NOTIFY_CHANGE_DIR_NAME 2 
#define os__FILE_NOTIFY_CHANGE_ATTRIBUTES 4 
#define os__FILE_NOTIFY_CHANGE_SIZE 8 
#define os__FILE_NOTIFY_CHANGE_LAST_WRITE 16 
#define os__FILE_NOTIFY_CHANGE_LAST_ACCESS 32 
#define os__FILE_NOTIFY_CHANGE_CREATION 64 
#define os__FILE_NOTIFY_CHANGE_SECURITY 128 
#define os__FILE_ACTION_ADDED 1 
#define os__FILE_ACTION_REMOVED 2 
#define os__FILE_ACTION_MODIFIED 3 
#define os__FILE_ACTION_RENAMED_OLD_NAME 4 
#define os__FILE_ACTION_RENAMED_NEW_NAME 5 
int os__FILE_ATTR_READONLY;
int os__FILE_ATTR_HIDDEN;
int os__FILE_ATTR_SYSTEM;
int os__FILE_ATTR_DIRECTORY;
int os__FILE_ATTR_ARCHIVE;
int os__FILE_ATTR_DEVICE;
int os__FILE_ATTR_NORMAL;
int os__FILE_ATTR_TEMPORARY;
int os__FILE_ATTR_SPARSE_FILE;
int os__FILE_ATTR_REPARSE_POINT;
int os__FILE_ATTR_COMPRESSED;
int os__FILE_ATTR_OFFLINE;
int os__FILE_ATTR_NOT_CONTENT_INDEXED;
int os__FILE_ATTR_ENCRYPTED;
int os__FILE_ATTR_INTEGRITY_STREAM;
int os__FILE_ATTR_VIRTUAL;
int os__FILE_ATTR_NO_SCRUB_DATA;
int os__FILE_TYPE_DISK;
int os__FILE_TYPE_CHAR;
int os__FILE_TYPE_PIPE;
int os__FILE_TYPE_UNKNOWN;
int os__FILE_INVALID_FILE_ID;
#define os__O_RDONLY 1 
#define os__O_WRONLY 2 
#define os__O_RDWR 3 
#define os__O_APPEND 8 
#define os__O_CREATE 16 
#define os__O_EXCL 32 
#define os__O_SYNC 64 
#define os__O_TRUNC 128 
int os__INVALID_HANDLE_VALUE;
int os__STD_INPUT_HANDLE;
int os__STD_OUTPUT_HANDLE;
int os__STD_ERROR_HANDLE;
int os__ENABLE_ECHO_INPUT;
int os__ENABLE_EXTENDED_FLAGS;
int os__ENABLE_INSERT_MODE;
int os__ENABLE_LINE_INPUT;
int os__ENABLE_MOUSE_INPUT;
int os__ENABLE_PROCESSED_INPUT;
int os__ENABLE_QUICK_EDIT_MODE;
int os__ENABLE_WINDOW_INPUT;
int os__ENABLE_VIRTUAL_TERMINAL_INPUT;
int os__ENABLE_PROCESSED_OUTPUT;
int os__ENABLE_WRAP_AT_EOL_OUTPUT;
int os__ENABLE_VIRTUAL_TERMINAL_PROCESSING;
int os__DISABLE_NEWLINE_AUTO_RETURN;
int os__ENABLE_LVB_GRID_WORLDWIDE;
array_string os__args;
#define os__MAX_PATH 4096 
array_int time__MonthDays;
string time__Months;
string time__Days;
#define math__E 2.71828182845904523536028747135266249775724709369995957496696763 
#define math__Pi 3.14159265358979323846264338327950288419716939937510582097494459 
#define math__Phi 1.61803398874989484820458683436563811772030917980576286213544862 
#define math__Tau 6.28318530717958647692528676655900576839433879875021164194988918 
#define math__Sqrt2 1.41421356237309504880168872420969807856967187537694807317667974 
#define math__SqrtE 1.64872127070012814684865078781416357165377610071014801157507931 
#define math__SqrtPi 1.77245385090551602729816748334114518279754945612238712821380779 
#define math__SqrtTau 2.50662827463100050241576528481104525300698674060993831662992357 
#define math__SqrtPhi 1.27201964951406896425242246173749149171560804184009624861664038 
#define math__Ln2 0.693147180559945309417232121458176568075500134360255254120680009 
f32 math__Log2E;
#define math__Ln10 2.30258509299404568401799145468436420760110148862877297603332790 
f32 math__Log10E;
int math__MaxI8;
int math__MinI8;
int math__MaxI16;
int math__MinI16;
int math__MaxI32;
int math__MinI32;
int math__MaxU8;
int math__MaxU16;
int math__MaxU32;
int math__MaxU64;
string _tou_;
string _str_;
array_string NUMBER_TYPES;
array_string FLOAT_TYPES;
array_string SupportedPlatforms;
Fn* EmptyFn;
Fn* MainFn;
#define SINGLE_QUOTE '\'' 
#define AccessMod_private 0
#define AccessMod_public 1
array_string CReserved;
#define Token_eof 0
#define Token_NAME 1
#define Token_NUMBER 2
#define Token_STRING 3
#define Token_CHAR 4
#define Token_lcbr 5
#define Token_rcbr 6
#define Token_lpar 7
#define Token_rpar 8
#define Token_lsbr 9
#define Token_rsbr 10
#define Token_plus 11
#define Token_minus 12
#define Token_mul 13
#define Token_div 14
#define Token_mod 15
#define Token_xor 16
#define Token_amp 17
#define Token_pipe 18
#define Token_inc 19
#define Token_dec 20
#define Token_and 21
#define Token_oror 22
#define Token_not 23
#define Token_bit_not 24
#define Token_question 25
#define Token_comma 26
#define Token_semicolon 27
#define Token_colon 28
#define Token_hash 29
#define Token_dollar 30
#define Token_left_shift 31
#define Token_righ_shift 32
#define Token_eq 33
#define Token_ne 34
#define Token_gt 35
#define Token_lt 36
#define Token_ge 37
#define Token_le 38
#define Token_assign 39
#define Token_decl_assign 40
#define Token_plus_assign 41
#define Token_minus_assign 42
#define Token_div_assign 43
#define Token_mult_assign 44
#define Token_xor_assign 45
#define Token_mod_assign 46
#define Token_or_assign 47
#define Token_and_assign 48
#define Token_righ_shift_assign 49
#define Token_left_shift_assign 50
#define Token_arrow 51
#define Token_line_com 52
#define Token_mline_com 53
#define Token_nl 54
#define Token_dot 55
#define Token_dotdot 56
#define Token_keyword_beg 57
#define Token_key_module 58
#define Token_key_as 59
#define Token_key_import 60
#define Token_key_import_const 61
#define Token_key_global 62
#define Token_key_const 63
#define Token_key_let 64
#define Token_key_var 65
#define Token_key_goto 66
#define Token_key_if 67
#define Token_key_else 68
#define Token_key_match 69
#define Token_key_default 70
#define Token_key_switch 71
#define Token_key_case 72
#define Token_key_for 73
#define Token_key_in 74
#define Token_key_continue 75
#define Token_key_break 76
#define Token_key_type 77
#define Token_key_typedef 78
#define Token_key_true 79
#define Token_key_false 80
#define Token_key_typec 81
#define Token_key_enum 82
#define Token_key_union 83
#define Token_key_static 84
#define Token_key_struct 85
#define Token_key_interface 86
#define Token_key_class 87
#define Token_key_fn 88
#define Token_key_fnc 89
#define Token_key_return 90
#define Token_key_sizeof 91
#define Token_key_go 92
#define Token_key_embed 93
#define Token_key_pub 94
#define Token_key_pri 95
#define Token_key_atomic 96
#define Token_key_orelse 97
#define Token_keyword_end 98
array_string Token_arr;
map_int KEYWORDS;
string Version;
#define BuildMode_default_mode 0
#define BuildMode_embed_lib 1
#define BuildMode_build 2
#define OS_mac 0
#define OS_linux 1
#define OS_windows 2
#define Pass_imports 0
#define Pass_decl 1
#define Pass_main 2
Z* zz; // global
string HelpText;
string HelpText2;


array new_array2(int wei, int* a, int elm_size, string typ) { //fn
    char* ty = typ.str;
    int cap = 1;
    for (int j = 0;j < wei;j++) { 
        cap = cap * a[/*p*/j];
    }
    array arr = (/*&C.*/array){.wei = wei, .wei_val = a, .cap0 = cap, .len0 = cap, .cap = a[/*p*/0], .len = a[/*p*/0], .elm_type = ty, .elm1_size = elm_size, .data = z_malloc(cap * elm_size), .elm_size = 0, .bounds = 0, };
    int val1 = 0;
    array_int bounds = array_repeat(&val1, wei, sizeof(int) );
    (((int*)(bounds.data))[wei - 1]) = elm_size;
    for (int i = wei - 1;i > 0;i--) { 
        (((int*)(bounds.data))[i - 1]) = a[/*p*/i] * (((int*)(bounds.data))[i]);
    }
    arr.bounds = &bounds;
    return arr;
}
void* array_get0(array self, int i) { //fn
    if (i < 0 || i >= self.len) {
        z_panic(_STR("数组索引错误[0..%d] \ %d", self.len, i));
    }
    
    return self.data + i;
}
array new_array(int mylen, int cap, int elm_size) { //fn
    array arr = (/*&C.*/array){.len = mylen, .cap = cap, .elm_size = elm_size, .data = z_malloc(cap * elm_size), .cap0 = 0, .len0 = 0, .elm1_size = 0, .wei = 0, .bounds = 0, .wei_val = 0, .elm_type = 0};
    int wei = 1;
    int val2 = 0;
    array_int bounds = array_repeat(&val2, wei, sizeof(int) );
    (((int*)(bounds.data))[wei - 1]) = elm_size;
    arr.bounds = &elm_size;
    return arr;
}
array new_array1(int cap, int elm_size, string typ) { //fn
    array arr = (/*&C.*/array){.cap = cap, .elm_size = elm_size, .elm_type = typ.str, .data = z_malloc(cap * elm_size), .len = 0, .cap0 = 0, .len0 = 0, .elm1_size = 0, .wei = 0, .bounds = 0, .wei_val = 0, };
    return arr;
}
array new_array_from_c_array(int len, int cap, int elm_size, void* c_array) { //fn
    array arr = (/*&C.*/array){.len = len, .cap = cap, .elm_size = elm_size, .data = z_malloc(cap * elm_size), .cap0 = 0, .len0 = 0, .elm1_size = 0, .wei = 0, .bounds = 0, .wei_val = 0, .elm_type = 0};
    memcpy(arr.data, c_array, len * elm_size);
    return arr;
}
array new_array_from_c_array_no_alloc(int len, int cap, int elm_size, void* c_array) { //fn
    array arr = (/*&C.*/array){.len = len, .cap = cap, .elm_size = elm_size, .data = c_array, .cap0 = 0, .len0 = 0, .elm1_size = 0, .wei = 0, .bounds = 0, .wei_val = 0, .elm_type = 0};
    return arr;
}
array array_repeat(void* val, int nr_repeats, int elm_size) { //fn
    array arr = (/*&C.*/array){.len = nr_repeats, .cap = nr_repeats, .elm_size = elm_size, .data = z_malloc(nr_repeats * elm_size), .cap0 = 0, .len0 = 0, .elm1_size = 0, .wei = 0, .bounds = 0, .wei_val = 0, .elm_type = 0};
    for (int i = 0;i < nr_repeats;i++) { 
        memcpy(arr.data + i * elm_size, val, elm_size);
    }
    return arr;
}
void array_set(array* self, int idx, void* val) { //fn
    if (idx < 0 || idx >= self->len) {
        z_panic(_STR("数组索引错误[0..%d] \ %d", self->len, idx));
    }
    
    memcpy(self->data + idx * self->elm_size, val, self->elm_size);
}
void* array_get(array self, int i) { //fn
    if (i < 0 || i >= self.len) {
        z_panic(_STR("数组索引错误[0..%d] \ %d", self.len, i));
    }
    
    return self.data + i * self.elm_size;
}
bool array_baohan(array self, void* val) { //fn
    println(_STR("[%d]>>", self.len));
    char* typ = self.elm_type;
    for (int i = 0;i < self.len;i++) { 
        println(_STR("%d", i));
        void* _a = self.data + i * self.elm_size;
        if (*((char*)(_a)) == *((char*)(val))) {
            return 1;
        }
        
    }
    return 0;
}
void array_insert(array* self, int i, void* val) { //fn
    if (i >= self->len) {
        z_panic(_STR("数组插入错误,a[0..%d] idx= %d", self->len, i));
        return;
    }
    
     array_push(self, val);
    int size = self->elm_size;
    memmove(self->data + (i + 1) * size, self->data + i * size, (self->len - i) * size);
     array_set(self, i, val);
}
void array_prepend(array* self, void* val) { //fn
     array_insert(self, 0, val);
}
void array_delete(array* self, int idx) { //fn
    int size = self->elm_size;
    memmove(self->data + idx * size, self->data + (idx + 1) * size, (self->len - idx) * size);
    self->len--;
    self->cap--;
}
void* array_first(array self) { //fn
    if (self.len == 0) {
        println(c2s("空数组"));
    }
    
    return self.data + 0;
}
void* array_last(array self) { //fn
    if (self.len == 0) {
        println(c2s("空数组"));
    }
    
    return self.data + (self.len - 1) * self.elm_size;
}
array array_slice(array self, int start, int _end) { //fn
    int end = _end;
    if (start > end) {
        int tmp = start;
        start = end;
        end = start;
    }
    
    if (end >= self.len) {
        end = self.len;
    }
    
    int l = end - start;
    array res = (/*&C.*/array){.elm_size = self.elm_size, .data = self.data + start * self.elm_size, .len = l, .cap = l, .cap0 = 0, .len0 = 0, .elm1_size = 0, .wei = 0, .bounds = 0, .wei_val = 0, .elm_type = 0};
    return res;
}
array array_left(array self, int n) { //fn
    if (n >= self.len) {
        return self;
    }
    
    return  array_slice(self, 0, n);
}
array array_right(array self, int n) { //fn
    if (n >= self.len) {
        return self;
    }
    
    return  array_slice(self, n, self.len);
}
void array_push(array* self, void* val) { //fn
    if (self->len >= self->cap - 1) {
        int cap = (self->len + 1) * 2;
        if (self->cap == 0) {
            self->data = z_malloc(cap * self->elm_size);
        }
        else {
            self->data = realloc(self->data, cap * self->elm_size);
        }
        
        self->cap = cap;
    }
    
    memcpy(self->data + self->elm_size * self->len, val, self->elm_size);
    self->len++;
}
void array_push_many(array* self, void* val, int size) { //fn
    if (self->len >= self->cap - size) {
        int cap = (self->len + size) * 2;
        if (self->cap == 0) {
            self->data = z_malloc(cap * self->elm_size);
        }
        else {
            self->data = realloc(self->data, cap * self->elm_size);
        }
        
        self->cap = cap;
    }
    
    memcpy(self->data + self->elm_size * self->len, val, self->elm_size * size);
    self->len += size;
}
void array_sort_with_compare(array* self, void* compare) { //fn
    qsort(self->data, self->len, self->elm_size, compare);
}
string array_int_str(array_int self) { //fn
    string res = c2s("[");
    for (int i = 0;i < self.len;i++) { 
        int val = (((int*)(self.data))[i]);
        res = string_add(res, _STR("%d", val));
        if (i < self.len - 1) {
            res = string_add(res, c2s(", "));
        }
        
    }
    res = string_add(res, c2s("]"));
    return res;
}
string array_string_str(array_string self) { //fn
    string res = c2s("[");
    for (int i = 0;i < self.len;i++) { 
        string val = (((string*)(self.data))[i]);
        res = string_add(res, _STR("\"%.*s\"", val.len, val.str));
        if (i < self.len - 1) {
            res = string_add(res, c2s(", "));
        }
        
    }
    res = string_add(res, c2s("]"));
    return res;
}
string array_string_strln(array_string self) { //fn
    string res = c2s("");
    for (int i = 0;i < self.len;i++) { 
        string val = (((string*)(self.data))[i]);
        res = string_add(res, _STR("%.*s", val.len, val.str));
        if (i < self.len - 1) {
            res = string_add(res, c2s("\n"));
        }
        
    }
    return res;
}
void array_int_free(array_int self) { //fn
    free(self.data);
}
void array_fre(array* self) { //fn
    self->data = realloc(self->data, 0);
    self->cap = 0;
    self->len = 0;
}
string array_char_hex(array_char self) { //fn
    char* hex = z_malloc(self.len * 2 + 1);
    char* ptr = &hex[/*p*/0];
    for (int i = 0;i < self.len;i++) { 
        ptr += sprintf(ptr, "%02X", (((char*)(self.data))[i]));
    }
    return c2s(hex);
}
bool char_is_digit(char self) { //fn
    return self >= '0' && self <= '9';
}
bool char_is_letter(char self) { //fn
    return (self >= 'a' && self <= 'z') || (self >= 'A' && self <= 'Z');
}
bool char_is_white(char self) { //fang
    int i = (int)(self);
    return i == 9 || i == 10 || i == 13 || i == 32 || self == '\r';
}
string tos(char* s, int len) { //fn
    if (isnil(s)) {
        return (/*&C.*/string){.str = 0, .len = 0};
    }
    
    return (/*&C.*/string){.str = s, .len = len};
}
string c2s(char* s) { //fang
    if (isnil(s)) {
        return (/*&C.*/string){.str = 0, .len = 0};
    }
    
    return (/*&C.*/string){.str = s, .len = strlen(s)};
}
string tos_clone(char* s) { //fn
    if (isnil(s)) {
        return (/*&C.*/string){.str = 0, .len = 0};
    }
    
    string res = (/*&C.*/string){.str = s, .len = strlen(s)};
    return  string_clone(res);
}
void todo() { //fn
}
string string_clone(string self) { //fn
    string b = (/*&C.*/string){.len = self.len, .str = z_malloc(self.len + 1)};
    for (int i = 0;i < self.len;i++) { 
        b.str[i] = self.str[i];
    }
    b.str[self.len] = '\0';
    return b;
}
char* string_cstr(string self) { //fn
    string c =  string_clone(self);
    return c.str;
}
string string_replace(string self, string rep, string with) { //fn
    if (self.len == 0 || rep.len == 0) {
        return self;
    }
    
    array_int idxs = new_array_from_c_array(0, 0, sizeof(int), (int[]) {  });
    string rem = self;
    int rstart = 0;
    while (1) {
        int i =  string_index(rem, rep);
        if (i < 0) {
            break;
        }
        
        _PUSH(&idxs, (rstart + i), int, tmp1);
        i += rep.len;
        rstart += i;
        rem =  string_substr(rem, i, rem.len);
    }
    if (idxs.len == 0) {
        return self;
    }
    
    int new_len = self.len + idxs.len * (with.len - rep.len);
    char* b = z_malloc(new_len + 1);
    int idx_pos = 0;
    int cur_idx = (((int*)(idxs.data))[idx_pos]);
    int b_i = 0;
    for (int i = 0;i < self.len;i++) { 
        if (i == cur_idx) {
            for (int j = 0;j < with.len;j++) { 
                b[/*p*/b_i] = with.str[j];
                b_i++;
            }
            i += rep.len - 1;
            idx_pos++;
            if (idx_pos < idxs.len) {
                cur_idx = (((int*)(idxs.data))[idx_pos]);
            }
            
        }
        else {
            b[/*p*/b_i] = self.str[i];
            b_i++;
        }
        
    }
    b[/*p*/new_len] = '\0';
    return tos(b, new_len);
}
int string_int(string self) { //fn
    return atoi(self.str);
}
i64 string_i64(string self) { //fn
    return atoll(self.str);
}
f32 string_f32(string self) { //fn
    return atof(self.str);
}
bool string_eq(string self, string a) { //fn
    if (isnil(self.str)) {
    }
    
    if (self.len != a.len) {
        return 0;
    }
    
    for (int i = 0;i < self.len;i++) { 
        if (self.str[i] != a.str[i]) {
            return 0;
        }
        
    }
    return 1;
}
bool string_ne(string self, string a) { //fn
    return ! string_eq(self, a);
}
bool string_lt(string self, string a) { //fn
    for (int i = 0;i < self.len;i++) { 
        if (i >= a.len || self.str[i] > a.str[i]) {
            return 0;
        }
        else if (self.str[i] < a.str[i]) {
            return 1;
        }
        
    }
    if (self.len < a.len) {
        return 1;
    }
    
    return 0;
}
bool string_le(string self, string a) { //fn
    return  string_lt(self, a) ||  string_eq(self, a);
}
bool string_gt(string self, string a) { //fn
    return ! string_le(self, a);
}
bool string_ge(string self, string a) { //fn
    return ! string_lt(self, a);
}
string string_add(string self, string a) { //fn
    int new_len = self.len + a.len;
    string res = (/*&C.*/string){.len = new_len, .str = z_malloc(new_len + 1)};
    for (int j = 0;j < self.len;j++) { 
        res.str[j] = self.str[j];
    }
    for (int j = 0;j < a.len;j++) { 
        res.str[self.len + j] = a.str[j];
    }
    res.str[new_len] = '\0';
    return res;
}
array_string string_split(string self, string delim) { //fn
    array_string res = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    if (delim.len == 0) {
        _PUSH(&res, (self), string, tmp2);
        return res;
    }
    
    if (delim.len == 1) {
        return  string_split_single(self, delim.str[0]);
    }
    
    int i = 0;
    int start = 0;
    while (i < self.len) {
        bool a = self.str[i] == delim.str[0];
        int j = 1;
        while (j < delim.len && a) {
            a = a && self.str[i + j] == delim.str[j];
            j++;
        }
        bool last = i == self.len - 1;
        if (a || last) {
            if (last) {
                i++;
            }
            
            string val =  string_substr(self, start, i);
            if (val.len > 0) {
                if ( string_starts_with(val, delim)) {
                    val =  string_right(val, delim.len);
                }
                
                _PUSH(&res, ( string_trim_space(val)), string, tmp3);
            }
            
            start = i;
        }
        
        i++;
    }
    return res;
}
array_string string_split_single(string self, char delim) { //fn
    array_string res = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    if ((int)(delim) == 0) {
        _PUSH(&res, (self), string, tmp4);
        return res;
    }
    
    int i = 0;
    int start = 0;
    while (i < self.len) {
        bool a = self.str[i] == delim;
        bool b = i == self.len - 1;
        if (a || b) {
            if (i == self.len - 1) {
                i++;
            }
            
            string val =  string_substr(self, start, i);
            if (val.len > 0) {
                _PUSH(&res, ( string_trim_space(val)), string, tmp5);
            }
            
            start = i + 1;
        }
        
        i++;
    }
    return res;
}
array_string string_split_into_lines(string self) { //fn
    array_string res = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    if (self.len == 0) {
        return res;
    }
    
    int start = 0;
    for (int i = 0;i < self.len;i++) { 
        bool last = i == self.len - 1;
        if ((int)(self.str[i]) == 10 || last) {
            if (last) {
                i++;
            }
            
            string line =  string_substr(self, start, i);
            _PUSH(&res, (line), string, tmp6);
            start = i + 1;
        }
        
    }
    return res;
}
string string_left(string self, int n) { //fn
    if (n >= self.len) {
        return self;
    }
    
    return  string_substr(self, 0, n);
}
string string_right(string self, int n) { //fn
    if (n >= self.len) {
        return c2s("");
    }
    
    return  string_substr(self, n, self.len);
}
string string_substr(string self, int start, int end) { //fn
    if (start >= self.len) {
        return c2s("");
    }
    
    int len = end - start;
    string res = (/*&C.*/string){.str = self.str + start, .len = len};
    return res;
}
int string_index(string self, string p) { //fn
    if (p.len > self.len) {
        return  - 1;
    }
    
    int j = 0;
    for (int i = 0;i < self.len;i++) { 
        if (p.str[j] != self.str[i]) {
            j = 0;
        }
        
        if (p.str[j] == self.str[i]) {
            j++;
        }
        
        if (j == p.len) {
            return i - p.len + 1;
        }
        
    }
    return  - 1;
}
int string_last_index(string self, string p) { //fn
    if (p.len > self.len) {
        return  - 1;
    }
    
    int i = self.len - p.len;
    while (i >= 0) {
        int j = 0;
        while (j < p.len && self.str[i + j] == p.str[j]) {
            j++;
        }
        if (j == p.len) {
            return i;
        }
        
        i--;
    }
    return  - 1;
}
int string_index_after(string self, string p, int start) { //fn
    if (p.len > self.len) {
        return  - 1;
    }
    
    int strt = start;
    if (start < 0) {
        strt = 0;
    }
    
    if (start >= self.len) {
        return  - 1;
    }
    
    int i = strt;
    while (i < self.len) {
        int j = 0;
        while (j < p.len && self.str[i + j] == p.str[j]) {
            j++;
        }
        if (j == p.len) {
            return i;
        }
        
        i++;
    }
    return  - 1;
}
string string_all_before(string self, string dot) { //fn
    int pos =  string_index(self, dot);
    if (pos ==  - 1) {
        return self;
    }
    
    return  string_left(self, pos);
}
string string_first_before(string self, string dot) { //fn
    int pos =  string_index(self, dot);
    if (pos ==  - 1) {
        return self;
    }
    
    return  string_left(self, pos);
}
string string_first_after(string self, string dot) { //fn
    int pos =  string_index(self, dot);
    if (pos ==  - 1) {
        return self;
    }
    
    return  string_right(self, pos + dot.len - 1);
}
string string_last_before(string self, string dot) { //fn
    int pos =  string_last_index(self, dot);
    if (pos ==  - 1) {
        return self;
    }
    
    return  string_left(self, pos);
}
string string_last_after(string self, string dot) { //fn
    int pos =  string_last_index(self, dot);
    if (pos ==  - 1) {
        return self;
    }
    
    int po = pos + dot.len;
    return  string_right(self, po);
}
string string_all_after(string self, string dot) { //fn
    int pos =  string_last_index(self, dot);
    if (pos ==  - 1) {
        return self;
    }
    
    return  string_right(self, pos + dot.len);
}
bool string_contains(string self, string p) { //fn
    bool res =  string_index(self, p) > 0 - 1;
    return res;
}
bool string_starts_with(string self, string p) { //fn
    bool res =  string_index(self, p) == 0;
    return res;
}
bool string_ends_with(string self, string p) { //fn
    if (p.len > self.len) {
        return 0;
    }
    
    bool res =  string_last_index(self, p) == self.len - p.len;
    return res;
}
string string_to_lower(string self) { //fn
    char* b = z_malloc(self.len);
    for (int i = 0;i < self.len;i++) { 
        b[/*p*/i] = tolower(self.str[/*p*/i]);
    }
    return tos(b, self.len);
}
string string_to_upper(string self) { //fn
    char* b = z_malloc(self.len);
    for (int i = 0;i < self.len;i++) { 
        b[/*p*/i] = toupper(self.str[/*p*/i]);
    }
    return tos(b, self.len);
}
string string_find_between(string self, string start, string end) { //fn
    int start_pos =  string_index(self, start);
    if (start_pos ==  - 1) {
        return c2s("");
    }
    
    string val =  string_right(self, start_pos + start.len);
    int end_pos =  string_index(val, end);
    if (end_pos ==  - 1) {
        return val;
    }
    
    return  string_left(val, end_pos);
}
bool array_string_contains(array_string self, string val) { //fn
    array_string _arr_7 = self;
    for (int _i_8 = 0; _i_8 < _arr_7.len; _i_8 ++) {
        string s = (((string*) _arr_7.data)[_i_8]);
        if (string_eq(s, val)) {
            return 1;
        }
        
    }
    return 0;
}
bool array_int_contains(array_int self, int val) { //fn
    array_int tmp9 = self ;
    for (int i = 0; i < tmp9.len; i ++) {
        int s = ((int*) tmp9.data)[i];
        if (s == val) {
            return 1;
        }
        
    }
    return 0;
}
bool is_space(char c) { //fn
    return isspace(c);
}
bool char_is_space(char self) { //fn
    return is_space(self);
}
string string_trim_space(string self) { //fn
    if (string_eq(self, c2s(""))) {
        return c2s("");
    }
    
    int i = 0;
    while (i < self.len && is_space(self.str[i])) {
        i++;
    }
    string res =  string_right(self, i);
    int end = res.len - 1;
    while (end >= 0 && is_space(res.str[end])) {
        end--;
    }
    res =  string_left(res, end + 1);
    return res;
}
string string_trim(string self, char c) { //fn
    if (string_eq(self, c2s(""))) {
        return c2s("");
    }
    
    int i = 0;
    while (i < self.len && c == self.str[i]) {
        i++;
    }
    string res =  string_right(self, i);
    int end = res.len - 1;
    while (end >= 0 && c == res.str[end]) {
        end--;
    }
    res =  string_left(res, end + 1);
    return res;
}
string string_trim_left(string self, string cutset) { //fn
    int start =  string_index(self, cutset);
    if (start == 0) {
        return self;
    }
    
    return  string_right(self, start);
}
string string_trim_right(string self, string cutset) { //fn
    int pos =  string_last_index(self, cutset);
    if (pos ==  - 1) {
        return self;
    }
    
    return  string_left(self, pos);
}
int compare_strings(string* a, string* b) { //fn
    if ( string_lt(*a, *b)) {
        return  - 1;
    }
    
    if ( string_gt(*a, *b)) {
        return 1;
    }
    
    return 0;
}
int compare_strings_by_len(string* a, string* b) { //fn
    if (a->len < b->len) {
        return  - 1;
    }
    
    if (a->len > b->len) {
        return 1;
    }
    
    return 0;
}
int compare_lower_strings(string* a, string* b) { //fn
    string aa =  string_to_lower(*a);
    string bb =  string_to_lower(*b);
    return compare_strings(&aa, &bb);
}
void array_string_sort(array_string* self) { //fn
     array_sort_with_compare(self, compare_strings);
}
void array_string_sort_ignore_case(array_string* self) { //fn
     array_sort_with_compare(self, compare_lower_strings);
}
void array_string_sort_by_len(array_string* self) { //fn
     array_sort_with_compare(self, compare_strings_by_len);
}
ustring string_ustring(string self) { //fn
    ustring res = (/*&C.*/ustring){.s = self, .runes = new_array(0, self.len, sizeof(int)), .len = 0};
    for (int i = 0;i < self.len;i++) { 
        int char_len = utf8_char_len(self.str[/*p*/i]);
        _PUSH(&res.runes, (i), int, tmp10);
        i += char_len - 1;
        res.len++;
    }
    return res;
}
ustring string_ustring_tmp(string self) { //fn
    ustring res = (/*&C.*/ustring){.s = self, .runes = new_array(0, 1, sizeof(int)), .len = 0};
    res.runes = g_ustring_runes;
    res.runes.len = self.len;
    int j = 0;
    for (int i = 0;i < self.len;i++) { 
        int char_len = utf8_char_len(self.str[/*p*/i]);
        (((int*)(res.runes.data))[j]) = i;
        j++;
        i += char_len - 1;
        res.len++;
    }
    return res;
}
string ustring_substr(ustring self, int start, int end) { //fn
    start = (((int*)(self.runes.data))[start]);
    if (end >= self.runes.len) {
        end = self.s.len;
    }
    else {
        end = (((int*)(self.runes.data))[end]);
    }
    
    return  string_substr(self.s, start, end);
}
string ustring_left(ustring self, int pos) { //fn
    return  ustring_substr(self, 0, pos);
}
string ustring_right(ustring self, int pos) { //fn
    return  ustring_substr(self, pos, self.len);
}
char string_at(string self, int idx) { //fn
    if ((idx) < 0 || (idx) >= self.len) {
        z_error(_STR("字符串索引超出范围: %d \ %d", self.len, idx));
    }
    
    return self.str[/*p*/idx];
}
string ustring_at(ustring self, int idx) { //fn
    return  ustring_substr(self, idx, idx + 1);
}
void ustring_free(ustring self) { //fn
     array_int_free(self.runes);
}
int abs(int a) { //fn
    if (a >= 0) {
        return a;
    }
    
    return  - a;
}
void string_free(string self) { //fn
    free(self.str);
}
void array_string_free(array_string self) { //fn
    array_string _arr_11 = self;
    for (int _i_12 = 0; _i_12 < _arr_11.len; _i_12 ++) {
        string s = (((string*) _arr_11.data)[_i_12]);
         string_free(s);
    }
    free(self.data);
}
string array_string_join(array_string self, string del) { //fn
    if (self.len == 0) {
        return c2s("");
    }
    
    int len = 0;
    array_string tmp13 = self ;
    for (int i = 0; i < tmp13.len; i ++) {
        string val = ((string*) tmp13.data)[i];
        len += val.len + del.len;
    }
    len -= del.len;
    string res = c2s("");
    res.len = len;
    res.str = z_malloc(res.len + 1);
    int idx = 0;
    array_string tmp14 = self ;
    for (int i = 0; i < tmp14.len; i ++) {
        string val = ((string*) tmp14.data)[i];
        for (int j = 0;j < val.len;j++) { 
            char c = val.str[j];
            res.str[/*p*/idx] = val.str[/*p*/j];
            idx++;
        }
        if (i != self.len - 1) {
            for (int k = 0;k < del.len;k++) { 
                res.str[/*p*/idx] = del.str[/*p*/k];
                idx++;
            }
        }
        
    }
    res.str[/*p*/res.len] = '\0';
    return res;
}
string array_string_join_lines(array_string self) { //fn
    return  array_string_join(self, c2s("\n"));
}
string string_reverse(string self) { //fn
    string res = (/*&C.*/string){.len = self.len, .str = z_malloc(self.len)};
    for (int i = self.len - 1;i >= 0;i--) { 
        res.str[self.len - i - 1] = self.str[i];
    }
    return res;
}
string string_limit(string self, int max) { //fn
    ustring u =  string_ustring(self);
    if (u.len <= max) {
        return self;
    }
    
    return  ustring_substr(u, 0, max);
}
array_char string_bytes(string self) { //fang
    if (self.len == 0) {
        return new_array_from_c_array(0, 0, sizeof(char), (char[]) {  });
    }
    
    char val15 = (char)(0);
    array_char buf = array_repeat(&val15, self.len, sizeof(char) );
    memcpy(buf.data, self.str, self.len);
    return buf;
}
void z_exit(int code) { //fang
    exit(code);
}
bool isnil(void* v) { //fang
    return v == 0;
}
void z_panic(string s) { //fang
    println(_STR("Z 惶恐: %.*s", s.len, s.str));
    exit(1);
}
void println(string s) { //fang
    if (isnil(s.str)) {
        z_panic(c2s("println(NIL)"));
    }
    
    printf("%.*s\n", s.len, s.str);
}
void z_print(string s) { //fang
    printf("%.*s", s.len, s.str);
}
char* z_malloc(int n) { //fang
    if (n < 0) {
        z_panic(c2s("malloc(<0)"));
    }
    
    char* ptr = malloc(n);
    if (isnil(ptr)) {
        z_panic(_STR("malloc(%d) 分配内存失败", n));
    }
    
    return ptr;
}
char* z_calloc(int n) { //fang
    if (n < 0) {
        z_panic(c2s("calloc(<0)"));
    }
    
    return calloc(n, 1);
}
void z_free(void* ptr) { //fang
    free(ptr);
}
int _strlen(char* s) { //fang
    return strlen(s);
}
void* memdup(void* src, int sz) { //fang
    char* mem = z_malloc(sz);
    return memcpy(mem, src, sz);
}
string double_str(double self) { //fn
    char* buf = z_malloc(sizeof(double) * 5 + 1);
    sprintf(buf, "%f", self);
    return tos(buf, _strlen(buf));
}
string f64_str(f64 self) { //fn
    char* buf = z_malloc(sizeof(double) * 5 + 1);
    sprintf(buf, "%f", self);
    return tos(buf, _strlen(buf));
}
string f32_str(f32 self) { //fn
    char* buf = z_malloc(sizeof(double) * 5 + 1);
    sprintf(buf, "%f", self);
    return tos(buf, _strlen(buf));
}
string ptr_str(void* ptr) { //fn
    char* buf = z_malloc(sizeof(double) * 5 + 1);
    sprintf(buf, "%p", ptr);
    return tos(buf, _strlen(buf));
}
string int_str(int self) { //fn
    int n = self;
    if (n == 0) {
        return c2s("0");
    }
    
    int max = 16;
    char* buf = z_malloc(max);
    bool is_neg = 0;
    if (n < 0) {
        n =  - n;
        is_neg = 1;
    }
    
    int len = 0;
    while (n > 0) {
        int d = n % 10;
        buf[/*p*/max - len - 1] = d + (int)('0');
        len++;
        n = n / 10;
    }
    if (is_neg) {
        buf[/*p*/max - len - 1] = '-';
        len++;
    }
    
    return tos(buf + max - len, len);
}
string u8_str(u8 self) { //fn
    u8 n = self;
    if (n == (u8)(0)) {
        return c2s("0");
    }
    
    int max = 5;
    char* buf = z_malloc(max);
    int len = 0;
    bool is_neg = 0;
    if (n < (u8)(0)) {
        n =  - n;
        is_neg = 1;
    }
    
    while (n > (u8)(0)) {
        u8 d = n % (u8)(10);
        buf[/*p*/max - len - 1] = d + (u8)('0');
        len++;
        n = n / (u8)(10);
    }
    if (is_neg) {
        buf[/*p*/max - len - 1] = '-';
        len++;
    }
    
    return tos(buf + max - len, len);
}
string i64_str(i64 self) { //fn
    i64 n = self;
    if (n == (i64)(0)) {
        return c2s("0");
    }
    
    int max = 32;
    char* buf = z_malloc(max);
    int len = 0;
    bool is_neg = 0;
    if (n < (i64)(0)) {
        n =  - n;
        is_neg = 1;
    }
    
    while (n > (i64)(0)) {
        int d = (int)(n % (i64)(10));
        buf[/*p*/max - len - 1] = d + (int)('0');
        len++;
        n = n / (i64)(10);
    }
    if (is_neg) {
        buf[/*p*/max - len - 1] = '-';
        len++;
    }
    
    return tos(buf + max - len, len);
}
string bool_str(bool self) { //fn
    if (self) {
        return c2s("true");
    }
    
    return c2s("false");
}
string int_hex(int self) { //fn
    int len = (self >= 0)?( int_str(self).len + 3):(11);
    char* hex = z_malloc(len);
    int count = (int)(sprintf(hex, "0x%x", self));
    return tos(hex, count);
}
string i64_hex(i64 self) { //fn
    int len = (self >= (i64)(0))?( i64_str(self).len + 3):(19);
    char* hex = z_malloc(len);
    int count = (int)(sprintf(hex, "0x%x", self));
    return tos(hex, count);
}
bool array_char_contains(array_char self, char val) { //fn
    array_char _arr_1 = self;
    for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
        char c = (((char*) _arr_1.data)[_i_2]);
        if (c == val) {
            return 1;
        }
        
    }
    return 0;
}
string rune_str(rune self) { //fn
    int fst_byte = (int)(self) >> 8 * 3 & 0xff;
    int len = utf8_char_len(fst_byte);
    string str = (/*&C.*/string){.len = len, .str = z_malloc(len + 1)};
    for (int i = 0;i < len;i++) { 
        str.str[/*p*/i] = (int)(self) >> 8 * (3 - i) & 0xff;
    }
    str.str[len] = '\0';
    return str;
}
string char_str(char self) { //fn
    string str = (/*&C.*/string){.len = 1, .str = z_malloc(2)};
    str.str[/*p*/0] = self;
    str.str[/*p*/1] = '\0';
    return str;
}
int utf8_char_len(char b) { //fang
    return ((0xe5000000 >> ((b >> 3) & 0x1e)) & 3) + 1;
}
string utf32_to_str(u32 code) { //fang
    int icode = (int)(code);
    char* buffer = z_malloc(5);
    if (icode <= 127) {
        buffer[/*p*/0] = icode;
        return tos(buffer, 1);
    }
    
    if ((icode <= 2047)) {
        buffer[/*p*/0] = 192 | (icode >> 6);
        buffer[/*p*/1] = 128 | (icode & 63);
        return tos(buffer, 2);
    }
    
    if ((icode <= 65535)) {
        buffer[/*p*/0] = 224 | (icode >> 12);
        buffer[/*p*/1] = 128 | ((icode >> 6) & 63);
        buffer[/*p*/2] = 128 | (icode & 63);
        return tos(buffer, 3);
    }
    
    if ((icode <= 1114111)) {
        buffer[/*p*/0] = 240 | (icode >> 18);
        buffer[/*p*/1] = 128 | ((icode >> 12) & 63);
        buffer[/*p*/2] = 128 | ((icode >> 6) & 63);
        buffer[/*p*/3] = 128 | (icode & 63);
        return tos(buffer, 4);
    }
    
    return c2s("");
}
string utf32_to_str_no_malloc(u32 code, void* buf) { //fang
    int icode = (int)(code);
    char* buffer = (char*)(buf);
    if (icode <= 127) {
        buffer[/*p*/0] = icode;
        return tos(buffer, 1);
    }
    
    if ((icode <= 2047)) {
        buffer[/*p*/0] = 192 | (icode >> 6);
        buffer[/*p*/1] = 128 | (icode & 63);
        return tos(buffer, 2);
    }
    
    if ((icode <= 65535)) {
        buffer[/*p*/0] = 224 | (icode >> 12);
        buffer[/*p*/1] = 128 | ((icode >> 6) & 63);
        buffer[/*p*/2] = 128 | (icode & 63);
        return tos(buffer, 3);
    }
    
    if ((icode <= 1114111)) {
        buffer[/*p*/0] = 240 | (icode >> 18);
        buffer[/*p*/1] = 128 | ((icode >> 12) & 63);
        buffer[/*p*/2] = 128 | ((icode >> 6) & 63);
        buffer[/*p*/3] = 128 | (icode & 63);
        return tos(buffer, 4);
    }
    
    return c2s("");
}
int string_utf32_code(string self) { //fang
    if (self.len == 0) {
        return 0;
    }
    
    if (self.len == 1) {
        return (int)(self.str[0]);
    }
    
    char b = (char)((int)(self.str[0]));
    b = b << self.len;
    int res = (int)(b);
    int shift = 6 - self.len;
    for (int i = 1;i < self.len;i++) { 
        int c = (int)(self.str[i]);
        res = res << shift;
        res |= c & 63;
        shift = 6;
    }
    return res;
}
map new_map(int cap, int elm_size, char* elm) { //fang
    map res = (/*&C.*/map){.elm_type = c2s(elm), .elm_size = elm_size, .entries = new_array(0, 1, sizeof(Entry)), .size = 0, .cap = 0, };
    return res;
}
map new_map1(int cap, int elm_size, string elm) { //fang
    map res = (/*&C.*/map){.elm_type = elm, .elm_size = elm_size, .entries = new_array(0, 1, sizeof(Entry)), .size = 0, .cap = 0, };
    return res;
}
Entry map_new_entry(map* self, string key, void* val) { //fang
    Entry _new = (/*&C.*/Entry){.key = key, .val = z_malloc(self->elm_size)};
    memcpy(_new.val, val, self->elm_size);
    return _new;
}
void map_set(map* self, string key, void* val) { //fang
    Entry db =  map_new_entry(self, key, val);
    for (int i = 0;i < self->entries.len;i++) { 
        Entry entry = (((Entry*)(self->entries.data))[i]);
        if (string_eq(entry.key, key)) {
            (((Entry*)(self->entries.data))[i]) = db;
            return;
        }
        
    }
    _PUSH(&self->entries, (db), Entry, tmp1);
}
bool map_get(map self, string key, void* out) { //fang
    for (int i = 0;i < self.entries.len;i++) { 
        Entry entry = (((Entry*)(self.entries.data))[i]);
        if (string_eq(entry.key, key)) {
            memcpy(out, entry.val, self.elm_size);
            return 1;
        }
        
    }
    return 0;
}
array_string map_keys(map* self) { //fang
    array_string keys = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    for (int i = 0;i < self->entries.len;i++) { 
        Entry entry = (((Entry*)(self->entries.data))[i]);
        _PUSH(&keys, (entry.key), string, tmp2);
    }
    return keys;
}
bool map_exists(map self, string key) { //fang
    for (int i = 0;i < self.entries.len;i++) { 
        Entry entry = (((Entry*)(self.entries.data))[i]);
        if (string_eq(entry.key, key)) {
            return 1;
        }
        
    }
    return 0;
}
void map_println(map self) { //fang
    println(c2s("<<<<<<<<"));
    for (int i = 0;i < self.entries.len;i++) { 
        Entry entry = (((Entry*)(self.entries.data))[i]);
        println(_STR("%.*s => %p", entry.key.len, entry.key.str, entry.val));
    }
    println(c2s(">>>>>>>>>>"));
}
void map_free(map self) { //fang
}
string map_string_str(map_string self) { //fang
    if (self.entries.len == 0) {
        return c2s("{}");
    }
    
    string s = c2s("{\n");
    array_Entry _arr_3 = self.entries;
    for (int _i_4 = 0; _i_4 < _arr_3.len; _i_4 ++) {
        Entry entry = (((Entry*) _arr_3.data)[_i_4]);
        string val5 = c2s(""); bool ok6 = map_get(self, entry.key, &val5);
        string val = val5;
        s = string_add(s, _STR("  \"%.*s\" => \"%.*s\"\n", entry.key.len, entry.key.str, val.len, val.str));
    }
    s = string_add(s, c2s("}"));
    return s;
}
Option opt_ok(void* data, int size) { //fang
    if (size > 255) {
        z_panic(_STR("选项最大255: %d", size));
    }
    
    Option res = (/*&C.*/Option){.ok = 1, .error = c2s(""), };
    memcpy(res.data, data, size);
    return res;
}
Option z_error(string s) { //fang
    return (/*&C.*/Option){.error = s, .ok = 0};
}
void Console__win_color() { //fn
    void* ot = GetStdHandle( - 11);
    if (ot ==  - 1 || !SetConsoleMode(ot, 0x0001 | 0x0004)) {
        println(c2s("操控控制台失败"));
    }
    
}
string Console__format(string msg, string open, string close) { //fn
    #ifdef _WIN32
        Console__win_color();
    #endif
    return string_add(string_add(string_add(string_add(string_add(string_add(c2s("\x1b["), open), c2s("m")), msg), c2s("\x1b[")), close), c2s("m"));
}
string Console__black(string msg) { //fang
    return Console__format(msg, c2s("30"), c2s("39"));
}
string Console__blue(string msg) { //fn
    return Console__format(msg, c2s("34"), c2s("39"));
}
string Console__cyan(string msg) { //fn
    return Console__format(msg, c2s("36"), c2s("39"));
}
string Console__dim(string msg) { //fn
    return Console__format(msg, c2s("2"), c2s("22"));
}
string Console__green(string msg) { //fn
    return Console__format(msg, c2s("32"), c2s("39"));
}
string Console__gray(string msg) { //fn
    return Console__format(msg, c2s("90"), c2s("39"));
}
string Console__magenta(string msg) { //fn
    return Console__format(msg, c2s("35"), c2s("39"));
}
string Console__red(string msg) { //fn
    return Console__format(msg, c2s("31"), c2s("39"));
}
string Console__white(string msg) { //fn
    return Console__format(msg, c2s("37"), c2s("39"));
}
string Console__yellow(string msg) { //fn
    return Console__format(msg, c2s("33"), c2s("39"));
}
string Console__hidden(string msg) { //fn
    return Console__format(msg, c2s("8"), c2s("28"));
}
string Console__inverse(string msg) { //fn
    return Console__format(msg, c2s("7"), c2s("27"));
}
string Console__reset(string msg) { //fn
    return Console__format(msg, c2s("0"), c2s("0"));
}
string Console__italic(string msg) { //fn
    return Console__format(msg, c2s("3"), c2s("23"));
}
string Console__bold(string msg) { //fn
    return Console__format(msg, c2s("1"), c2s("22"));
}
string Console__strikethrough(string msg) { //fn
    return Console__format(msg, c2s("9"), c2s("29"));
}
string Console__underline(string msg) { //fn
    return Console__format(msg, c2s("4"), c2s("24"));
}
string Console__bg_black(string msg) { //fn
    return Console__format(msg, c2s("40"), c2s("49"));
}
string Console__bg_blue(string msg) { //fn
    return Console__format(msg, c2s("44"), c2s("49"));
}
string Console__bg_cyan(string msg) { //fn
    return Console__format(msg, c2s("46"), c2s("49"));
}
string Console__bg_green(string msg) { //fn
    return Console__format(msg, c2s("42"), c2s("49"));
}
string Console__bg_magenta(string msg) { //fn
    return Console__format(msg, c2s("45"), c2s("49"));
}
string Console__bg_red(string msg) { //fn
    return Console__format(msg, c2s("41"), c2s("49"));
}
string Console__bg_white(string msg) { //fn
    return Console__format(msg, c2s("47"), c2s("49"));
}
string Console__bg_yellow(string msg) { //fn
    return Console__format(msg, c2s("43"), c2s("49"));
}
void Console__set_cursor_position(int x, int y) { //fn
    z_print(_STR("\x1b[%d;%d;H", y, x));
}
void Console__move(int n, string direction) { //fn
    z_print(_STR("\x1b[%d%.*s", n, direction.len, direction.str));
}
void Console__cursor_up(int n) { //fn
    Console__move(n, c2s("A"));
}
void Console__cursor_down(int n) { //fn
    Console__move(n, c2s("B"));
}
void Console__cursor_forward(int n) { //fn
    Console__move(n, c2s("C"));
}
void Console__cursor_back(int n) { //fn
    Console__move(n, c2s("D"));
}
void Console__erase_display(string t) { //fn
    z_print(string_add(string_add(c2s("\x1b["), t), c2s("J")));
}
void Console__erase_toend() { //fn
    Console__erase_display(c2s("0"));
}
void Console__erase_tobeg() { //fn
    Console__erase_display(c2s("1"));
}
void Console__erase_clear() { //fn
    Console__erase_display(c2s("2"));
}
void Console__erase_del_clear() { //fn
    Console__erase_display(c2s("3"));
}
void Console__erase_line(string t) { //fn
    z_print(string_add(string_add(c2s("\x1b["), t), c2s("K")));
}
void Console__erase_line_toend() { //fn
    Console__erase_line(c2s("0"));
}
void Console__erase_line_tobeg() { //fn
    Console__erase_line(c2s("1"));
}
void Console__erase_line_clear() { //fn
    Console__erase_line(c2s("2"));
}
void Console__show_cursor() { //fn
    z_print(c2s("\x1b[?25h"));
}
void Console__hide_cursor() { //fn
    z_print(c2s("\x1b[?25l"));
}
#ifdef _WIN32
    
    
#endif
void os__todo_remove() { //fn
}
array_string os__init_os_args(int argc, char** argv) { //fn
    array_string args = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    for (int i = 0;i < argc;i++) { 
        _PUSH(&args, (c2s(argv[/*p*/i])), string, tmp1);
    }
    return args;
}
array_string os__parse_windows_cmd_line(char* cmd) { //fn
    string s = c2s(cmd);
    return  string_split(s, c2s(" "));
}
void os__File_write(os__File self, string s) { //fn
    string str =  string_clone(s);
    fputs( string_cstr(str), self.cfile);
}
void os__File_write_bytes(os__File self, void* data, int size) { //fn
    fwrite(data, 1, size, self.cfile);
}
void os__File_write_bytes_at(os__File self, void* data, int size, int pos) { //fn
    fseek(self.cfile, pos, SEEK_SET);
    fwrite(data, 1, size, self.cfile);
    fseek(self.cfile, 0, SEEK_END);
}
void os__File_writeln(os__File self, string s) { //fang
    fputs( string_cstr(s), self.cfile);
    fputs("\n", self.cfile);
}
void os__File_flush(os__File self) { //fn
    fflush(self.cfile);
}
void os__File_close(os__File self) { //fn
    fclose(self.cfile);
}
Option_os__File os__open(string path) { //fn
    char* cpath =  string_cstr(path);
    os__File file = (/*&C.*/os__File){.cfile = fopen(cpath, "rb")};
    if (isnil(file.cfile)) {
        z_panic(_STR("无法打开文件 \"%.*s\"", path.len, path.str));
    }
    
    os__File _data_2 = (os__File)(file);
    return opt_ok(&_data_2, sizeof(os__File));;
}
Option_os__File os__create(string path) { //fn
    char* cpath =  string_cstr(path);
    os__File file = (/*&C.*/os__File){.cfile = fopen(cpath, "wb")};
    if (isnil(file.cfile)) {
        return z_error(_STR("无法创建文件 \"%.*s\"", path.len, path.str));
    }
    
    os__File _data_3 = (os__File)(file);
    return opt_ok(&_data_3, sizeof(os__File));;
}
Option_os__File os__open_append(string path) { //fn
    char* cpath =  string_cstr(path);
    os__File file = (/*&C.*/os__File){.cfile = fopen(cpath, "ab")};
    if (isnil(file.cfile)) {
        return z_error(_STR("无法创建文件 \"%.*s\"", path.len, path.str));
    }
    
    os__File _data_4 = (os__File)(file);
    return opt_ok(&_data_4, sizeof(os__File));;
}
void os__write_file(string path, string text) { //fn
    Option_os__File _opt_5= os__create(path);
    if (!_opt_5.ok) {
        string err = _opt_5.error;
        return;
    }
    os__File f = *(os__File*) _opt_5.data;
     os__File_write(f, text);
     os__File_close(f);
}
Option_string os__read_file(string path) { //fn
    string res = c2s("");
    char* cpath =  string_cstr(path);
    void* fp = fopen(cpath, "rb");
    if (isnil(fp)) {
        return z_error(_STR("os 读取文件失败 \"%.*s\"", path.len, path.str));
    }
    
    fseek(fp, 0, SEEK_END) ;
    int fsize = ftell(fp);
    rewind(fp);
    char* str = z_malloc(fsize + 1);
    fread(str, fsize, 1, fp);
    fclose(fp);
    str[/*p*/fsize] = 0;
    if (str[/*p*/0] == 0xEF && str[/*p*/1] == 0xBB && str[/*p*/2] == 0xBF) {
        int offset = 3;
        res = tos(&str[/*p*/offset], strlen(str) - offset);
    }
    else {
        res = tos(str, fsize);
    }
    
    string _data_6 = (string)(res);
    return opt_ok(&_data_6, sizeof(string));;
}
string os__read_file2(string path) { //fn
    string res = c2s("");
    FILE *f = fopen(path.str, "r");
    if (!f) return tos("", 0);
    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    rewind(f);
    char *string = malloc(fsize + 1);
    fread(string, fsize, 1, f);
    fclose(f);
    string[fsize] = 0;
    res = tos(string, fsize);
    return res;
}
array_string os__read_lines(string path) { //fn
    array_string res = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    char ch[1000] = { };
    char* cpath =  string_cstr(path);
    void* fp = fopen(cpath, "rb");
    if (isnil(fp)) {
        return res;
    }
    
    while (fgets(ch, 1000, fp) != 0) {
        string val = c2s("");
        ch[strlen(ch) - 1] = '\0';
        #ifdef _WIN32
            if (ch[strlen(ch) - 2] == 13) {
                ch[strlen(ch) - 2] = '\0';
            }
            
        #endif
        _PUSH(&res, (tos_clone(ch)), string, tmp7);
    }
    fclose(fp);
    return res;
}
array_ustring os__read_ulines(string path) { //fn
    array_string lines = os__read_lines(path);
    array_ustring ulines = new_array_from_c_array(0, 0, sizeof(ustring), (ustring[]) {  });
    array_string _arr_8 = lines;
    for (int _i_9 = 0; _i_9 < _arr_8.len; _i_9 ++) {
        string myline = (((string*) _arr_8.data)[_i_9]);
        _PUSH(&ulines, ( string_ustring(myline)), ustring, tmp10);
    }
    return ulines;
}
int os__file_size(string path) { //fn
    struct stat s = (struct /*C.*/stat){.st_size = 0, .st_mode = 0, .st_mtime = 0};
    stat(path.str, &s);
    return s.st_size;
}
void os__mv(string old, string _new) { //fn
    rename( string_cstr(old),  string_cstr(_new));
}
bool os__file_exists(string path) { //fn
    #ifdef _WIN32
        return _access(path.str, 0) !=  - 1;
    #endif
    return access(path.str, 0) !=  - 1;
}
bool os__dir_exists(string path) { //fn
    #ifdef _WIN32
        int attr = (int)(GetFileAttributes( string_cstr(path)));
        if (attr ==  - 1) {
            return 0;
        }
        
        if ((attr & 16) != 0) {
            return 1;
        }
        
        return 0;
        #else
        void* dir = opendir( string_cstr(path));
        bool res = !isnil(dir);
        if (res) {
            closedir(dir);
        }
        
        return res;
    #endif
}
void os__mkdir(string path) { //fn
    #ifdef _WIN32
        path =  string_replace(path, c2s("/"), c2s("\\"));
        CreateDirectory( string_cstr(path), 0);
        #else
        mkdir( string_cstr(path), 511);
    #endif
}
void os__rm(string path) { //fn
    remove( string_cstr(path));
}
void os__print_c_errno() { //fn
}
string os__ext(string path) { //fn
    int pos =  string_last_index(path, c2s("."));
    if (pos ==  - 1) {
        return c2s("");
    }
    
    return  string_right(path, pos);
}
string os__dir(string path) { //fn
    int pos =  - 1;
    #ifdef _WIN32
        pos =  string_last_index(path, c2s("\\"));
        #else
        pos =  string_last_index(path, c2s("/"));
    #endif
    if (pos ==  - 1) {
        return c2s(".");
    }
    
    return  string_left(path, pos);
}
string os__basedir(string path) { //fn
    int pos =  string_last_index(path, c2s("/"));
    if (pos ==  - 1) {
        return path;
    }
    
    return  string_left(path, pos + 1);
}
string os__path_sans_ext(string path) { //fn
    int pos =  string_last_index(path, c2s("."));
    if (pos ==  - 1) {
        return path;
    }
    
    return  string_left(path, pos);
}
string os__filename(string path) { //fn
    return  string_all_after(path, c2s("/"));
}
string os__get_line() { //fn
    string str = os__get_raw_line();
    if (string_at(str, str.len - 1) == '\n') {
        return  string_substr(str, 0, str.len - 1);
    }
    
    return str;
}
string os__get_raw_line() { //fn
    #ifdef _WIN32
        int max = 256;
        char* buf = z_malloc(max);
        void* h_input = GetStdHandle(os__STD_INPUT_HANDLE);
        if (h_input ==  - 1) {
            z_panic(c2s("get_raw_line() 错误: 控制台输入处理"));
        }
        
        int nr_chars = 0;
        ReadConsole(h_input, buf, max, &nr_chars, 0);
        if (nr_chars == 0) {
            return c2s("");
        }
        
        return tos(buf, nr_chars);
        #else
        u64 max = (u64)(256);
        char* buf = z_malloc((int)(max));
        int nr_chars = getline(&buf, &max, stdin);
        if (nr_chars == 0) {
            return c2s("");
        }
        
        return tos(buf, nr_chars);
    #endif
}
string os__user_os() { //fn
    #ifdef __linux__
        return c2s("linux");
    #endif
    #ifdef __APPLE__
        return c2s("mac");
    #endif
    #ifdef _WIN32
        return c2s("windows");
    #endif
    return c2s("未知用户os");
}
Option_string os__hostname() { //fn
    char hname[256] = { };
    void* res = gethostname(&hname, 256);
    if (res != 0) {
        return z_error(c2s("返回PC主机名错误"));
    }
    
    string _data_11 = (string)(tos_clone(hname));
    return opt_ok(&_data_11, sizeof(string));;
}
string os__home_dir() { //fn
    string home = os__getenv(c2s("HOME"));
    #ifdef _WIN32
        home = os__getenv(c2s("HOMEDRIVE"));
        if (home.len == 0) {
            home = os__getenv(c2s("SYSTEMDRIVE"));
        }
        
        string homepath = os__getenv(c2s("HOMEPATH"));
        if (homepath.len == 0) {
            homepath = string_add(c2s("\\Users\\"), os__getenv(c2s("USERNAME")));
        }
        
        home = string_add(home, homepath);
    #endif
    home = string_add(home, c2s("/"));
    return home;
}
string os__executable() { //fn
    char* result = z_malloc(os__MAX_PATH);
    #ifdef _WIN32
        int ret = (int)(GetModuleFileName(0, result, os__MAX_PATH));
        return tos(result, ret);
    #endif
    #ifdef __linux__
        int count = (int)(readlink("/proc/self/exe", result, os__MAX_PATH));
        if (count < 0) {
            z_panic(c2s("读取exe目录错误"));
        }
        
        return tos(result, count);
    #endif
    #ifdef __APPLE__
        void* pid = getpid();
        void* ret = proc_pidpath(pid, result, os__MAX_PATH);
        if (ret <= 0) {
            println(c2s("os.executable() failed"));
            return c2s(".");
        }
        
        return c2s(result);
    #endif
    return c2s(".");
}
bool os__is_dir(string path) { //fn
    #ifdef _WIN32
        int val = (int)(GetFileAttributes( string_cstr(path)));
        return val & FILE_ATTRIBUTE_DIRECTORY > 0;
        #else
        struct stat statbuf = (struct /*C.*/stat){.st_size = 0, .st_mode = 0, .st_mtime = 0};
        char* cstr =  string_cstr(path);
        if (stat(cstr, &statbuf) != 0) {
            return 0;
        }
        
        return statbuf.st_mode & S_IFMT == S_IFDIR;
    #endif
}
void os__chdir(string path) { //fn
    #ifdef _WIN32
        _chdir( string_cstr(path));
        #else
        chdir( string_cstr(path));
    #endif
}
string os__getwd() { //fn
    char* mulu = z_malloc(512);
    #ifdef _WIN32
        if (_getcwd(mulu, 512) == 0) {
            return c2s("");
        }
        
        #else
        if (getcwd(mulu, 512) == 0) {
            return c2s("");
        }
        
    #endif
    return c2s(mulu);
}
array_string os__ls(string path) { //fn
    #ifdef _WIN32
        os__win32finddata find_file_data = (/*&C.*/os__win32finddata){.dwFileAttributes = 0, .nFileSizeHigh = 0, .nFileSizeLow = 0, .dwReserved0 = 0, .dwReserved1 = 0, .dwFileType = 0, .dwCreatorType = 0, .wFinderFlags = 0};
        array_string dir_files = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
        if (!os__dir_exists(path)) {
            println(_STR("ls() 不存在 \"%.*s\"", path.len, path.str));
            return dir_files;
        }
        
        string path_files = _STR("%.*s\\*", path.len, path.str);
        void* h_find_files = FindFirstFile( string_cstr(path_files), &find_file_data);
        string first_filename = tos(&find_file_data.cFileName, strlen(find_file_data.cFileName));
        if (string_ne(first_filename, c2s(".")) && string_ne(first_filename, c2s(".."))) {
            _PUSH(&dir_files, (first_filename), string, tmp12);
        }
        
        while (FindNextFile(h_find_files, &find_file_data)) {
            string filename = tos(&find_file_data.cFileName, strlen(find_file_data.cFileName));
            if (string_ne(filename, c2s(".")) && string_ne(filename, c2s(".."))) {
                _PUSH(&dir_files, ( string_clone(filename)), string, tmp13);
            }
            
        }
        FindClose(h_find_files);
        return dir_files;
        #else
        array_string res = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
        void* dir = opendir( string_cstr(path));
        if (isnil(dir)) {
            println(_STR("ls() 不存在 \"%.*s\"", path.len, path.str));
            os__print_c_errno();
            return res;
        }
        
        struct dirent* nt = 0;
        while (1) {
            nt = readdir(dir);
            if (isnil(nt)) {
                break;
            }
            
            string name = tos_clone(nt->d_name);
            if (string_ne(name, c2s(".")) && string_ne(name, c2s("..")) && string_ne(name, c2s(""))) {
                _PUSH(&res, (name), string, tmp14);
            }
            
        }
        closedir(dir);
        return res;
    #endif
}
int os__system(string cmd) { //fn
    void* ret = system( string_cstr(cmd));
    if (ret ==  - 1) {
        os__print_c_errno();
    }
    
    return ret;
}
os__FILE* os__popen(string path) { //fn
    char* cpath =  string_cstr(path);
    #ifdef _WIN32
        return _popen(cpath, "r");
        #else
        return popen(cpath, "r");
    #endif
}
string os__exec(string cmd) { //fn
    cmd = _STR("%.*s 2>&1", cmd.len, cmd.str);
    os__FILE* f = os__popen(cmd);
    if (isnil(f)) {
        println(_STR("popen %.*s 失败", cmd.len, cmd.str));
        return c2s("");
    }
    
    char buf[1000] = { };
    string res = c2s("");
    while (fgets(buf, 1000, f) != 0) {
        res = string_add(res, tos(buf, strlen(buf)));
    }
    return  string_trim_space(res);
}
void os__clear() { //fn
    printf("\x1b[2J");
    printf("\x1b[H");
}
string os__getenv(string key) { //fn
    char* s = getenv( string_cstr(key));
    if (isnil(s)) {
        return c2s("");
    }
    
    return c2s(s);
}
int os__setenv(string name, string value, bool overwrite) { //fn
    #ifdef _WIN32
        string format = _STR("%.*s=%.*s", name.len, name.str, value.len, value.str);
        if (overwrite) {
            return _putenv( string_cstr(format));
        }
        
        return  - 1;
        #else
        return setenv( string_cstr(name),  string_cstr(value), overwrite);
    #endif
}
int os__unsetenv(string name) { //fn
    #ifdef _WIN32
        string format = _STR("%.*s=", name.len, name.str);
        return _putenv( string_cstr(format));
        #else
        return unsetenv( string_cstr(name));
    #endif
}
void os__signal(int signum, void* handler) { //fn
    signal(signum, handler);
}
int os__fork() { //fn
    #ifndef _WIN32
        void* pid = fork();
        return pid;
    #endif
}
int os__wait() { //fn
    #ifndef _WIN32
        void* pid = wait(0);
        return pid;
    #endif
}
int os__file_last_mod_unix(string path) { //fn
    struct stat attr = (struct /*C.*/stat){.st_size = 0, .st_mode = 0, .st_mtime = 0};
    stat(path.str, &attr);
    return attr.st_mtime;
}
void os__print_backtrace() { //fn
}
void time__remove_me_when_c_bug_is_fixed() { //fn
}
time__Time time__now() { //fn
    void* t = time(0);
    struct tm* now = 0;
    now = localtime(&t);
    return time__convert_ctime(*now);
}
time__Time time__random() { //fn
    return (/*&C.*/time__Time){.year = rand__next(2) + 201, .month = rand__next(12) + 1, .day = rand__next(30) + 1, .hour = rand__next(24), .minute = rand__next(60), .second = rand__next(60), .uni = 0};
}
time__Time time__unix(int u) { //fn
    struct tm* t = 0;
    t = localtime(&u);
    return time__convert_ctime(*t);
}
time__Time time__convert_ctime(tm t) { //fn
    return (/*&C.*/time__Time){.year = t.tm_year + 1900, .month = t.tm_mon + 1, .day = t.tm_mday, .hour = t.tm_hour, .minute = t.tm_min, .second = t.tm_sec, .uni = mktime(&t)};
}
string time__Time_format_ss(time__Time self) { //fn
    return _STR("%d-%02d-%02d %02d:%02d:%02d", self.year, self.month, self.day, self.hour, self.minute, self.second);
}
string time__Time_format(time__Time self) { //fn
    return _STR("%d-%02d-%02d %02d:%02d", self.year, self.month, self.day, self.hour, self.minute);
}
string time__Time_smonth(time__Time self) { //fn
    int i = self.month - 1;
    return  string_substr(time__Months, i * 3, (i + 1) * 3);
}
string time__Time_hhmm(time__Time self) { //fn
    return _STR("%02d:%02d", self.hour, self.minute);
}
string time__Time_hhmm12(time__Time self) { //fn
    string am = c2s("am");
    int hour = self.hour;
    if (self.hour > 11) {
        am = c2s("pm");
    }
    
    if (self.hour > 12) {
        hour = hour - 12;
    }
    
    if (self.hour == 0) {
        hour = 12;
    }
    
    return _STR("%d:%02d %.*s", hour, self.minute, am.len, am.str);
}
string time__Time_hhmmss(time__Time self) { //fn
    return _STR("%02d:%02d:%02d", self.hour, self.minute, self.second);
}
string time__Time_ymmdd(time__Time self) { //fn
    return _STR("%d-%02d-%02d", self.year, self.month, self.day);
}
string time__Time_md(time__Time self) { //fn
    string s = _STR("%.*s %d", time__Time_smonth(self).len, time__Time_smonth(self).str, self.day);
    return s;
}
string time__Time_clean(time__Time self) { //fn
    time__Time nowe = time__now();
    if (self.month == nowe.month && self.year == nowe.year && self.day == nowe.day) {
        return  time__Time_hhmm(self);
    }
    
    if (self.year == nowe.year) {
        return _STR("%.*s %d %.*s", time__Time_smonth(self).len, time__Time_smonth(self).str, self.day, time__Time_hhmm(self).len, time__Time_hhmm(self).str);
    }
    
    return  time__Time_format(self);
}
string time__Time_clean12(time__Time self) { //fn
    time__Time nowe = time__now();
    if (self.month == nowe.month && self.year == nowe.year && self.day == nowe.day) {
        return  time__Time_hhmm12(self);
    }
    
    if (self.year == nowe.year) {
        return _STR("%.*s %d %.*s", time__Time_smonth(self).len, time__Time_smonth(self).str, self.day, time__Time_hhmm12(self).len, time__Time_hhmm12(self).str);
    }
    
    return  time__Time_format(self);
}
time__Time time__parse(string s) { //fn
    int pos =  string_index(s, c2s(" "));
    if (pos <= 0) {
        println(c2s("bad time format"));
        return time__now();
    }
    
    string symd =  string_left(s, pos);
    array_string ymd =  string_split(symd, c2s("-"));
    if (ymd.len != 3) {
        println(c2s("bad time format"));
        return time__now();
    }
    
    string shms =  string_right(s, pos);
    array_string hms =  string_split(shms, c2s(":"));
    string hour = ( *(string*) array_get(hms,0) );
    string minute = ( *(string*) array_get(hms,1) );
    string second = ( *(string*) array_get(hms,2) );
    return time__new_time((/*&C.*/time__Time){.year =  string_int(( *(string*) array_get(ymd,0) )), .month =  string_int(( *(string*) array_get(ymd,1) )), .day =  string_int(( *(string*) array_get(ymd,2) )), .hour =  string_int(hour), .minute =  string_int(minute), .second =  string_int(second), .uni = 0});
}
time__Time time__new_time(time__Time t) { //fn
    return (time__Time){.uni =  time__Time_calc_unix(&t), .year = t.year, .month = t.month, .day = t.day, .hour = t.hour, .minute = t.minute, .second = t.second, };
}
int time__Time_calc_unix(time__Time* self) { //fn
    if (self->uni != 0) {
        return self->uni;
    }
    
    struct tm tt = (struct /*C.*/tm){.tm_sec = self->second, .tm_min = self->minute, .tm_hour = self->hour, .tm_mday = self->day, .tm_mon = self->month - 1, .tm_year = self->year - 1900};
    return mktime(&tt);
}
time__Time time__Time_add_seconds(time__Time self, int seconds) { //fn
    return time__unix(self.uni + seconds);
}
int time__since(time__Time t) { //fn
    return 0;
}
string time__Time_relative(time__Time self) { //fn
    time__Time now = time__now();
    int secs = now.uni - self.uni;
    if (secs <= 30) {
        return c2s("now");
    }
    
    if (secs < 60) {
        return c2s("1m");
    }
    
    if (secs < 3600) {
        return _STR("%dm", secs / 60);
    }
    
    if (secs < 3600 * 24) {
        return _STR("%dh", secs / 3600);
    }
    
    if (secs < 3600 * 24 * 5) {
        return _STR("%dd", secs / 3600 / 24);
    }
    
    if (secs > 3600 * 24 * 10000) {
        return c2s("");
    }
    
    return  time__Time_md(self);
}
int time__day_of_week(int y, int m, int d) { //fn
    return 0;
}
int time__Time_day_of_week(time__Time self) { //fn
    return time__day_of_week(self.year, self.month, self.day);
}
string time__Time_weekday_str(time__Time self) { //fn
    int i =  time__Time_day_of_week(self) - 1;
    return  string_substr(time__Days, i * 3, (i + 1) * 3);
}
i64 time__ticks() { //fn
    #ifdef _WIN32
        return GetTickCount();
    #endif
    struct timeval ts = (struct /*C.*/timeval){.tv_sec = 0, .tv_usec = 0};
    gettimeofday(&ts, 0);
    return ts.tv_sec * 1000 + (ts.tv_usec / 1000);
}
void time__sleep(int seconds) { //fn
    #ifdef _WIN32
        _sleep(seconds * 1000);
        #else
        sleep(seconds);
    #endif
}
void time__usleep(int n) { //fn
    #ifdef _WIN32
        #else
        usleep(n);
    #endif
}
void time__sleep_ms(int n) { //fn
    #ifdef _WIN32
        Sleep(n);
        #else
        usleep(n * 1000);
    #endif
}
bool time__is_leap_year(int year) { //fn
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}
Option_int time__days_in_month(int month, int year) { //fn
    if (month > 12 || month < 1) {
        return z_error(_STR("Invalid month: %d", month));
    }
    
    int extra = (month == 2 && time__is_leap_year(year))?(1):(0);
    int res = ( *(int*) array_get(time__MonthDays,month - 1) ) + extra;
    int _data_1 = (int)(res);
    return opt_ok(&_data_1, sizeof(int));;
}
strings__Builder strings__new_builder(int initial_size) { //fn
    return (/*&C.*/strings__Builder){.buf = new_array(0, initial_size, sizeof(char)), .len = 0};
}
void strings__Builder_write(strings__Builder* self, string s) { //fn
     array_push_many(&self->buf, s.str, s.len);
    self->len += s.len;
}
void strings__Builder_writeln(strings__Builder* self, string s) { //fn
     array_push_many(&self->buf, s.str, s.len);
    _PUSH(&self->buf, ('\n'), char, tmp1);
    self->len += s.len + 1;
}
string strings__Builder_str(strings__Builder self) { //fn
    return tos(self.buf.data, self.len);
}
void strings__Builder_cut(strings__Builder self, int n) { //fn
    self.len -= n;
}
void strings__Builder_free(strings__Builder* self) { //fn
    free(self->buf.data);
}
string strings__repeat(char c, int n) { //fn
    if (n <= 0) {
        return c2s("");
    }
    
    char* arr = z_malloc(n + 1);
    for (int i = 0;i < n;i++) { 
        arr[/*p*/i] = c;
    }
    arr[/*p*/n] = '\0';
    return tos(arr, n);
}
string strings__repeat2(string c, int n) { //fn
    if (n <= 0) {
        return c2s("");
    }
    
    string s = c2s("");
    for (int i = 0;i < n;i++) { 
        s = string_add(s, c);
    }
    return s;
}
void rand__seed(int s) { //fn
    srand(s);
}
int rand__next(int max) { //fn
    return rand() % max;
}
f64 math__abs(f64 a) { //fn
    if (a < 0) {
        return  - a;
    }
    
    return a;
}
f64 math__acos(f64 a) { //fn
    return acos(a);
}
f64 math__asin(f64 a) { //fn
    return asin(a);
}
f64 math__atan(f64 a) { //fn
    return atan(a);
}
f64 math__atan2(f64 a, f64 b) { //fn
    return atan2(a, b);
}
f64 math__cbrt(f64 a) { //fn
    return cbrt(a);
}
int math__ceil(f64 a) { //fn
    return ceil(a);
}
f64 math__cos(f64 a) { //fn
    return cos(a);
}
f64 math__cosh(f64 a) { //fn
    return cosh(a);
}
f64 math__degrees(f64 radians) { //fn
    return radians * (180.0 / math__Pi);
}
f64 math__exp(f64 a) { //fn
    return exp(a);
}
array_int math__digits(int n, int base) { //fn
    int sign = 1;
    if (n < 0) {
        sign =  - 1;
        n =  - n;
    }
    
    array_int res = new_array_from_c_array(0, 0, sizeof(int), (int[]) {  });
    while (n != 0) {
        _PUSH(&res, ((n % base) * sign), int, tmp1);
        n /= base;
    }
    return res;
}
f64 math__erf(f64 a) { //fn
    return erf(a);
}
f64 math__erfc(f64 a) { //fn
    return erfc(a);
}
f64 math__exp2(f64 a) { //fn
    return exp2(a);
}
int math__recursive_product(int n, int* current_number_ptr) { //fn
    int m = n / 2;
    if ((m == 0)) {
        return *current_number_ptr += 2;
    }
    
    if ((n == 2)) {
        return (*current_number_ptr += 2) * (*current_number_ptr += 2);
    }
    
    return math__recursive_product((n - m), &*current_number_ptr) * math__recursive_product(m, &*current_number_ptr);
}
i64 math__factorial(int n) { //fn
    if (n < 0) {
        z_panic(c2s("factorial: Cannot find factorial of negative number"));
    }
    
    if (n < 2) {
        return (i64)(1);
    }
    
    int r = 1;
    int p = 1;
    int current_number = 1;
    int h = 0;
    int shift = 0;
    int high = 1;
    int len = high;
    int log2n = (int)(math__floor(math__log2(n)));
    for (;h != n;) { 
        shift += h;
        h = n >> log2n;
        log2n -= 1;
        len = high;
        high = (h - 1) | 1;
        len = (high - len) / 2;
        if ((len > 0)) {
            p *= math__recursive_product(len, &current_number);
            r *= p;
        }
        
    }
    return (i64)((r << shift));
}
f64 math__floor(f64 a) { //fn
    return floor(a);
}
f64 math__fmod(f64 a, f64 b) { //fn
    return fmod(a, b);
}
f64 math__gamma(f64 a) { //fn
    return tgamma(a);
}
i64 math__gcd(i64 a, i64 b) { //fn
    if (a < 0) {
        a =  - a;
    }
    
    if (b < 0) {
        b =  - b;
    }
    
    while (b != 0) {
        a %= b;
        if (a == 0) {
            return b;
        }
        
        b %= a;
    }
    return a;
}
i64 math__lcm(i64 a, i64 b) { //fn
    if (a == 0) {
        return a;
    }
    
    i64 res = a * (b / math__gcd(b, a));
    if (res < 0) {
        return  - res;
    }
    
    return res;
}
f64 math__log(f64 a) { //fn
    return log(a);
}
f64 math__log2(f64 a) { //fn
    return log2(a);
}
f64 math__log10(f64 a) { //fn
    return log10(a);
}
f64 math__log_gamma(f64 a) { //fn
    return lgamma(a);
}
f64 math__log_n(f64 a, f64 b) { //fn
    return log(a) / log(b);
}
f64 math__max(f64 a, f64 b) { //fn
    if (a > b) {
        return a;
    }
    
    return b;
}
f64 math__min(f64 a, f64 b) { //fn
    if (a < b) {
        return a;
    }
    
    return b;
}
f64 math__pow(f64 a, f64 b) { //fn
    return pow(a, b);
}
f64 math__radians(f64 degrees) { //fn
    return degrees * (math__Pi / 180.0);
}
f64 math__round(f64 f) { //fn
    return round(f);
}
f64 math__sin(f64 a) { //fn
    return sin(a);
}
f64 math__sinh(f64 a) { //fn
    return sinh(a);
}
f64 math__sqrt(f64 a) { //fn
    return sqrt(a);
}
f64 math__tan(f64 a) { //fn
    return tan(a);
}
f64 math__tanh(f64 a) { //fn
    return tanh(a);
}
f64 math__trunc(f64 a) { //fn
    return trunc(a);
}
string Parser_array_init(Parser* self) { //fang
     Parser_log2(self, c2s("cyan"), c2s("["));
     Parser_check(self, Token_lsbr);
    string typ = c2s("");
    int i = 0;
    int pos =  GenC_biaoqian(self->genc);
    self->decl_var.type1 = c2s("array");
    if (self->tok == Token_rsbr) {
         Parser_next(self);
         Parser_log2(self, c2s("cyan"), c2s("]"));
        if (self->tok == Token_NAME) {
            Type* t =  Table_find_type(self->table, self->lit);
            if (string_eq(t->name, c2s(""))) {
                println(c2s("数组未知返回类型"));
            }
            
            typ =  Parser_check_name(self);
            self->decl_var.type2 = typ;
        }
        else {
             Parser_error(self, c2s("数组没有类型"));
        }
        
        goto l1;
    }
    
    bool is_integer = self->tok == Token_NUMBER;
    string lit = self->lit;
    while (self->tok != Token_rsbr) {
        string val_typ =  Parser_bool_expression(self);
        if (i == 0) {
            typ = val_typ;
            self->decl_var.type2 = typ;
            if (is_integer && self->tok == Token_rsbr) {
                self->decl_var.type1 = c2s("CArray");
                 Parser_check(self, Token_rsbr);
                string num = c2s("");
                while (self->tok == Token_lsbr) {
                     Parser_next(self);
                    num = string_add(num, _STR("[%.*s]", self->lit.len, self->lit.str));
                     Parser_check(self, Token_NUMBER);
                     Parser_check(self, Token_rsbr);
                }
                self->decl_var.arr_ss = _STR("[%.*s]%.*s", lit.len, lit.str, num.len, num.str);
                if (self->tok != Token_NAME) {
                     Parser_error(self, c2s("数组没有类型"));
                }
                
                string rt =  Parser_check_name(self);
                self->decl_var.type2 = rt;
                if ( Table_known_type(self->table, rt)) {
                    self->genc->cur_line = c2s("");
                     Parser_gen(self, c2s("{ }"));
                    return _STR("CArray_%.*s", rt.len, rt.str);
                }
                else {
                     Parser_error(self, _STR("数组未知返回类型 %.*s", rt.len, rt.str));
                }
                
            }
            
            if (self->tok == Token_semicolon) {
                 Parser_check(self, Token_semicolon);
                string vl =  string_right(self->genc->cur_line, pos);
                self->genc->cur_line =  string_left(self->genc->cur_line, pos);
                string val =  Parser_get_add_digit(self, c2s("val"));
                _PUSH(&self->genc->lines, (_STR("%.*s%.*s %.*s = %.*s;", self->genc->fmt_indent.len, self->genc->fmt_indent.str, typ.len, typ.str, val.len, val.str, vl.len, vl.str)), string, tmp1);
                 Parser_gen(self, _STR("array_repeat(&%.*s, ", val.len, val.str));
                 Parser_check_types(self,  Parser_bool_expression(self), c2s("int"), 1);
                 Parser_gen(self, _STR(", sizeof(%.*s) )", typ.len, typ.str));
                 Parser_check(self, Token_rsbr);
                return _STR("array_%.*s", typ.len, typ.str);
            }
            
        }
        
        if (string_ne(val_typ, typ)) {
            if (! Parser_check_types(self, val_typ, typ, 0)) {
                 Parser_error(self, _STR("数组 element 类型 %.*s  目前 %.*s", typ.len, typ.str, val_typ.len, val_typ.str));
            }
            
        }
        
        if (self->tok != Token_rsbr && self->tok == Token_comma) {
             Parser_log2(self, c2s("green"), c2s(", "));
             Parser_gen(self, c2s(", "));
             Parser_check(self, Token_comma);
        }
        
        i++;
    }
     Parser_log2(self, c2s("cyan"), c2s("]"));
     Parser_check(self, Token_rsbr);
    l1:
    bool no_alloc = self->tok == Token_not;
    if (no_alloc) {
         Parser_next(self);
    }
    
    bool is_fixed_size = self->tok == Token_not;
    if (is_fixed_size) {
         Parser_next(self);
         Parser_gen(self, c2s(" }"));
        if (!self->run == Pass_main) {
            if (self->inside_const) {
                 GenC_cha_ru(self->genc, pos, c2s("{ "));
            }
            else {
                 GenC_cha_ru(self->genc, pos, _STR("(%.*s[]) { ", typ.len, typ.str));
            }
            
        }
        
        return _STR("[%d]%.*s", i, typ.len, typ.str);
    }
    
    string new_arr = c2s("new_array_from_c_array");
    if (no_alloc) {
        new_arr = string_add(new_arr, c2s("_no_alloc"));
    }
    
     Parser_gen(self, c2s(" })"));
    if (self->run == Pass_main) {
         GenC_cha_ru(self->genc, pos, _STR("%.*s(%d, %d, sizeof(%.*s), (%.*s[]) { ", new_arr.len, new_arr.str, i, i, typ.len, typ.str, typ.len, typ.str));
    }
    
    self->decl_var.parent = c2s("array");
    typ = _STR("array_%.*s", typ.len, typ.str);
     Parser_register_array(self, typ);
    return typ;
}
void Parser_register_array(Parser* self, string typ) { //fang
    if ( string_contains(typ, c2s("*"))) {
        println(_STR(" 数组类型 %.*s 不能用 *", typ.len, typ.str));
        return;
    }
    
    if (! Table_known_type(self->table, typ)) {
         Parser_register_parent_with_type(self, c2s("array"), typ);
        _PUSH(&self->genc->typedefs, (_STR("typedef array %.*s;", typ.len, typ.str)), string, tmp2);
    }
    
}
string Parser_arr_init(Parser* self) { //fang
     Parser_log2(self, c2s("cyan"), c2s("["));
     Parser_check(self, Token_lsbr);
    string typ = c2s("");
    int arr_pos =  GenC_biaoqian(self->genc);
    int i = 0;
    int pos = self->genc->cur_line.len;
    if (self->tok == Token_rsbr) {
         Parser_log2(self, c2s("cyan"), c2s("]"));
         Parser_next(self);
         Parser_check(self, Token_assign);
        if (self->tok == Token_lcbr) {
             Parser_log2(self, c2s("cyan"), c2s("{"));
             Parser_next(self);
            while (self->tok != Token_rcbr) {
                string val_typ =  Parser_bool_expression(self);
                typ = val_typ;
                if (string_ne(val_typ, typ)) {
                    if (! Parser_check_types(self, val_typ, typ, 0)) {
                         Parser_error(self, _STR("数组 element 类型 %.*s 目前 %.*s", typ.len, typ.str, val_typ.len, val_typ.str));
                    }
                    
                }
                
                if (self->tok != Token_rsbr && self->tok == Token_comma) {
                     Parser_log2(self, c2s("green"), c2s(", "));
                     Parser_gen(self, c2s(", "));
                     Parser_check(self, Token_comma);
                }
                
                i++;
            }
             Parser_log2(self, c2s("cyan"), c2s("}"));
             Parser_check(self, Token_rcbr);
        }
        else if (self->tok == Token_NAME) {
            Type* t =  Table_find_type(self->table, self->lit);
            if (string_eq(t->name, c2s(""))) {
                println(c2s("数组未知返回类型"));
            }
            
            typ =  Parser_check_name(self);
        }
        
        string new_arr = c2s("new_array_from_c_array");
         Parser_gen(self, c2s(" })"));
        if (self->run != Pass_decl) {
             GenC_cha_ru(self->genc, arr_pos, _STR("%.*s(%d, %d, sizeof(%.*s), (%.*s[]) { ", new_arr.len, new_arr.str, i, i, typ.len, typ.str, typ.len, typ.str));
        }
        
        typ = _STR("array_%.*s", typ.len, typ.str);
         Parser_register_array(self, typ);
        return typ;
    }
    
    bool is_integer = self->tok == Token_NUMBER;
    string lit = self->lit;
    if (is_integer &&  Parser_peek(self).tok == Token_rsbr) {
         Parser_next(self);
         Parser_check(self, Token_rsbr);
         Parser_check(self, Token_assign);
        if (self->tok == Token_question) {
             Parser_check(self, Token_question);
             GenC_start_tmp(self->genc);
            string val_typ =  Parser_bool_expression(self);
            string val =  GenC_end_tmp(self->genc);
            string tmp =  Parser_get_tmp(self);
            _PUSH(&self->genc->lines, (_STR("%.*s%.*s %.*s = %.*s;", self->genc->fmt_indent.len, self->genc->fmt_indent.str, val_typ.len, val_typ.str, tmp.len, tmp.str, val.len, val.str)), string, tmp3);
             Parser_gen(self, _STR("array_repeat(&%.*s, %.*s, sizeof(%.*s) )", tmp.len, tmp.str, lit.len, lit.str, val_typ.len, val_typ.str));
            return _STR("array_%.*s", val_typ.len, val_typ.str);
        }
        
        string rt =  Parser_check_name(self);
         Parser_log2(self, c2s("cyan"), _STR("%.*s ] = %.*s ", lit.len, lit.str, rt.len, rt.str));
        if ( Table_known_type(self->table, rt)) {
            self->genc->cur_line = c2s("");
            self->_arr = _STR("[%.*s]", lit.len, lit.str);
             Parser_gen(self, c2s("{ }"));
            return _STR("CArray_%.*s", rt.len, rt.str);
        }
        else {
             Parser_error(self, _STR("数组未知返回类型 %.*s", rt.len, rt.str));
        }
        
    }
    
}
void Parser_assign_stat(Parser* self, Var v, int ph, bool is_arr) { //fang
     Parser_log(self, _STR("assign_stat() name=%.*s tok=", v.name.len, v.name.str));
    Token tok = self->tok;
    if (v.is_let && !v.is_arg && !v.is_global) {
         Parser_error(self, _STR("%.*s 是 常量", v.name.len, v.name.str));
    }
    
    bool is_str = string_eq(v.type, c2s("string"));
    /*match*/
    if ((tok == Token_assign)) {/* case 0*/
        if (!is_arr) {
             Parser_gen(self, c2s(" = "));
        }
        
        if (is_arr && self->neibu_bao) {
             Parser_gen(self, c2s(" = "));
        }
        
    }
    else if ((tok == Token_plus_assign)) {/* case 1*/
        if (is_str) {
             Parser_gen(self, _STR(" = string_add(%.*s, ", v.name.len, v.name.str));
        }
        else {
             Parser_gen(self, c2s(" += "));
        }
        
    }
    else  { //else 2
         Parser_gen(self, string_add(string_add(c2s(" "), self->lit), c2s(" ")));
    }
     Parser_next(self);
    int pos = self->genc->cur_line.len;
    string expr_type =  Parser_bool_expression(self);
    if ( string_starts_with(self->assigned_type, c2s("Option_")) && string_eq(expr_type,  string_right(self->assigned_type, c2s("Option_").len))) {
        string expr =  string_right(self->genc->cur_line, pos);
        string left =  string_left(self->genc->cur_line, pos);
        self->genc->cur_line = string_add(left, _STR("opt_ok(%.*s, sizeof(%.*s))", expr.len, expr.str, expr_type.len, expr_type.str));
    }
    else if (!self->neibu_bao && ! Parser_check_types(self, expr_type, self->assigned_type, 0)) {
        self->scanner->line_nr--;
         Parser_error(self, _STR("无法将类型 %.*s 赋值给 %.*s 类型变量", expr_type.len, expr_type.str, self->assigned_type.len, self->assigned_type.str));
    }
    
    if (is_str && tok == Token_plus_assign) {
         Parser_gen(self, c2s(")"));
    }
    
    self->assigned_type = c2s("");
    if (!v.is_used) {
         Fn_mark_var_used(self->cur_fn, v);
    }
    
}
string Parser_assoc(Parser* self) { //fang
     Parser_next(self);
    string v =  Parser_check_name(self);
     Parser_log2(self, c2s("cyan"), _STR("{%.*s", v.len, v.str));
    if (! Fn_known_var(self->cur_fn, v)) {
         Parser_error(self, _STR("assoc:鏈煡鍙橀噺 %.*s", v.len, v.str));
    }
    
    Var cfv =  Fn_find_var(self->cur_fn, v);
    string typ = cfv.type;
     Parser_check(self, Token_pipe);
     Parser_gen(self, _STR("(%.*s){", typ.len, typ.str));
    array_string attributes = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    while (self->tok != Token_rcbr) {
        string attr =  Parser_check_name(self);
        _PUSH(&attributes, (attr), string, tmp1);
         Parser_gen(self, _STR(".%.*s = ", attr.len, attr.str));
         Parser_check(self, Token_colon);
         Parser_bool_expression(self);
         Parser_gen(self, c2s(", "));
        if (self->tok != Token_rcbr) {
             Parser_check(self, Token_comma);
        }
        
    }
    Type* lx =  Table_find_type(self->table, typ);
    array_Var _arr_2 = lx->attributes;
    for (int _i_3 = 0; _i_3 < _arr_2.len; _i_3 ++) {
        Var l = (((Var*) _arr_2.data)[_i_3]);
        string attr = l.name;
        if (_IN(string, attr, attributes)) {
            continue;
        }
        
         Parser_gen(self, _STR(".%.*s = %.*s.%.*s, ", attr.len, attr.str, v.len, v.str, attr.len, attr.str));
    }
     Parser_check(self, Token_rcbr);
     Parser_gen(self, c2s("}"));
    return typ;
}
string Parser_bool_expression(Parser* self) { //fang
    self->z_log = string_add(self->z_log, c2s("<bool_expr>"));
    Token tok = self->tok;
    string typ =  Parser_bterm(self);
    while (self->tok == Token_and || self->tok == Token_oror) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s ", self->lit.len, self->lit.str));
         Parser_gen(self, _STR(" %.*s ", self->lit.len, self->lit.str));
         Parser_next(self);
         Parser_check_types(self,  Parser_bterm(self), typ, 1);
    }
    if (string_eq(typ, c2s(""))) {
        println(c2s("当前行:"));
        println(self->genc->cur_line);
        println( Token_str(tok));
         Parser_error(self, c2s("expr() 返回空类型"));
    }
    
    return typ;
}
string Parser_bterm(Parser* self) { //fang
    int ph =  GenC_biaoqian(self->genc);
    string typ =  Parser_expression(self);
    self->expected_type = typ;
    bool is_str = string_eq(typ, c2s("string"));
    Token tok = self->tok;
    if (_IN(Token, tok, new_array_from_c_array(6, 6, sizeof(Token), (Token[]) { Token_eq, Token_gt, Token_lt, Token_le, Token_ge, Token_ne }))) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s ", self->lit.len, self->lit.str));
        if (is_str) {
             Parser_gen(self, c2s(", "));
        }
        else {
             Parser_gen(self, _STR(" %.*s ", self->lit.len, self->lit.str));
        }
        
         Parser_next(self);
         Parser_check_types(self,  Parser_expression(self), typ, 1);
        if (is_str) {
             Parser_gen(self, c2s(")"));
            /*match*/
            if ((tok == Token_eq)) {/* case 0*/
                 GenC_cha_ru(self->genc, ph, c2s("string_eq("));
            }
            else if ((tok == Token_ne)) {/* case 1*/
                 GenC_cha_ru(self->genc, ph, c2s("string_ne("));
            }
            else if ((tok == Token_le)) {/* case 2*/
                 GenC_cha_ru(self->genc, ph, c2s("string_le("));
            }
            else if ((tok == Token_ge)) {/* case 3*/
                 GenC_cha_ru(self->genc, ph, c2s("string_ge("));
            }
            else if ((tok == Token_gt)) {/* case 4*/
                 GenC_cha_ru(self->genc, ph, c2s("string_gt("));
            }
            else if ((tok == Token_lt)) {/* case 5*/
                 GenC_cha_ru(self->genc, ph, c2s("string_lt("));
            }
        }
        
        typ = c2s("bool");
    }
    
    return typ;
}
void Z_cc(Z* self) { //fang
    array_string a = new_array_from_c_array(2, 2, sizeof(string), (string[]) { self->pref->c_options, c2s("-w") });
    string flags =  array_string_join(self->table->flags, c2s(" "));
    if (self->pref->is_so) {
        _PUSH(&a, (c2s("-shared -fPIC ")), string, tmp1);
        self->out_name = string_add(self->out_name, c2s(".so"));
    }
    
    if (self->pref->is_prod) {
        _PUSH(&a, (c2s("-O2")), string, tmp2);
    }
    else {
        _PUSH(&a, (c2s("-g")), string, tmp3);
    }
    
    string libs = c2s("");
    if (self->pref->build_mode == BuildMode_build) {
        _PUSH(&a, (c2s("-c")), string, tmp4);
    }
    else if (self->pref->build_mode == BuildMode_embed_lib) {
    }
    else if (self->pref->build_mode == BuildMode_default_mode) {
        libs = c2s("mokuai/neizhi.o");
        if (!os__file_exists(libs)) {
            println(c2s("未找到内置 builtin.o"));
            z_exit(1);
        }
        
        array_string _arr_5 = self->table->imports;
        for (int _i_6 = 0; _i_6 < _arr_5.len; _i_6 ++) {
            string kuai = (((string*) _arr_5.data)[_i_6]);
            if (string_eq(kuai, c2s("webview"))) {
                continue;
            }
            
            libs = string_add(libs, _STR("mokuai/%.*s.o", kuai.len, kuai.str));
        }
    }
    
    if (self->pref->sanitize) {
        _PUSH(&a, (c2s("-fsanitize=leak")), string, tmp7);
    }
    
    _PUSH(&a, (_STR("-o %.*s", self->out_name.len, self->out_name.str)), string, tmp8);
    _PUSH(&a, (_STR("\"%.*s\"", self->out_name_c.len, self->out_name_c.str)), string, tmp9);
    _PUSH(&a, (flags), string, tmp10);
    _PUSH(&a, (libs), string, tmp11);
    string args =  array_string_join(a, c2s(" "));
    string cmd = _STR("cc %.*s", args.len, args.str);
    #ifdef _WIN32
        string wd = os__getwd();
    #endif
    if (self->pref->show_c_cmd || self->pref->is_verbose) {
        println(_STR("\n==========\n%.*s\n=========\n", cmd.len, cmd.str));
    }
    
    string res = os__exec(cmd);
    if ( string_contains(res, c2s("error: "))) {
        println(res);
        z_panic(c2s("c语言错误"));
    }
    
    if (0) {
        os__rm(_STR("%.*s", self->out_name_c.len, self->out_name_c.str));
    }
    
}
GenC* new_cgen(string out_name_c) { //fang
    string path = out_name_c;
    Option_os__File _opt_1= os__create(path);
    if (!_opt_1.ok) {
        string err = _opt_1.error;
        println(_STR("创建输出文件失败 | failed to create %.*s", path.len, path.str));
        return ALLOC_INIT(GenC, {.nogen = 0, .tmp_line = c2s(""), .cur_line = c2s(""), .prev_line = c2s(""), .is_tmp = 0, .fn_main = c2s(""), .stash = c2s(""), .fmt_indent = c2s(""), .out_path = c2s(""), .typedefs = new_array(0, 1, sizeof(string)), .type_aliases = new_array(0, 1, sizeof(string)), .includes = new_array(0, 1, sizeof(string)), .types = new_array(0, 1, sizeof(string)), .thread_args = new_array(0, 1, sizeof(string)), .thread_fns = new_array(0, 1, sizeof(string)), .consts = new_array(0, 1, sizeof(string)), .fns = new_array(0, 1, sizeof(string)), .so_fns = new_array(0, 1, sizeof(string)), .consts_init = new_array(0, 1, sizeof(string)), .lines = new_array(0, 1, sizeof(string)), .is_user = 0});
    }
    os__File out = *(os__File*) _opt_1.data;
    GenC* gen = ALLOC_INIT(GenC, {.out_path = path, .out = out, .lines = new_array(0, 1000, sizeof(string)), .nogen = 0, .tmp_line = c2s(""), .cur_line = c2s(""), .prev_line = c2s(""), .is_tmp = 0, .fn_main = c2s(""), .stash = c2s(""), .fmt_indent = c2s(""), .typedefs = new_array(0, 1, sizeof(string)), .type_aliases = new_array(0, 1, sizeof(string)), .includes = new_array(0, 1, sizeof(string)), .types = new_array(0, 1, sizeof(string)), .thread_args = new_array(0, 1, sizeof(string)), .thread_fns = new_array(0, 1, sizeof(string)), .consts = new_array(0, 1, sizeof(string)), .fns = new_array(0, 1, sizeof(string)), .so_fns = new_array(0, 1, sizeof(string)), .consts_init = new_array(0, 1, sizeof(string)), .is_user = 0});
    return gen;
}
void GenC_save(GenC* self) { //fang
    string s =  array_string_join(self->lines, c2s("\n"));
     os__File_writeln(self->out, s);
     os__File_close(self->out);
}
void GenC_genln(GenC* self, string s) { //fang
    if (self->nogen || self->run == Pass_decl) {
        return;
    }
    
    if (self->is_tmp) {
        self->tmp_line = _STR("%.*s %.*s\n", self->tmp_line.len, self->tmp_line.str, s.len, s.str);
        return;
    }
    
    self->cur_line = _STR("%.*s%.*s%.*s", self->fmt_indent.len, self->fmt_indent.str, self->cur_line.len, self->cur_line.str, s.len, s.str);
    if (string_ne(self->cur_line, c2s(""))) {
        _PUSH(&self->lines, (self->cur_line), string, tmp2);
        self->prev_line = self->cur_line;
        self->cur_line = c2s("");
    }
    
}
void GenC_gen(GenC* self, string s) { //fang
    if (self->nogen || self->run == Pass_decl) {
        return;
    }
    
    if (self->is_tmp) {
        self->tmp_line = _STR("%.*s%.*s", self->tmp_line.len, self->tmp_line.str, s.len, s.str);
    }
    else {
        self->cur_line = _STR("%.*s%.*s", self->cur_line.len, self->cur_line.str, s.len, s.str);
    }
    
}
void GenC_start_tmp(GenC* self) { //fang
    if (self->is_tmp) {
        println(self->tmp_line);
        println(_STR("start_tmp 已经开始 cur_line=\"%.*s\"", self->cur_line.len, self->cur_line.str));
        z_exit(1);
    }
    
    self->tmp_line = c2s("");
    self->is_tmp = 1;
}
string GenC_end_tmp(GenC* self) { //fang
    self->is_tmp = 0;
    string res = self->tmp_line;
    self->tmp_line = c2s("");
    return res;
}
int GenC_biaoqian(GenC* self) { //fang
    if (self->is_tmp) {
        return self->tmp_line.len;
    }
    
    return self->cur_line.len;
}
void GenC_cha_ru(GenC* self, int pos, string val) { //fang
    if (self->nogen) {
        return;
    }
    
    if (self->is_tmp) {
        string left =  string_left(self->tmp_line, pos);
        string right =  string_right(self->tmp_line, pos);
        self->tmp_line = _STR("%.*s%.*s%.*s", left.len, left.str, val.len, val.str, right.len, right.str);
        return;
    }
    
    string left =  string_left(self->cur_line, pos);
    string right =  string_right(self->cur_line, pos);
    self->cur_line = _STR("%.*s%.*s%.*s", left.len, left.str, val.len, val.str, right.len, right.str);
}
int GenC_biaoqian2(GenC* self) { //fang
    if (self->is_tmp) {
        println(c2s("tmp in addp2"));
        z_exit(1);
    }
    
    _PUSH(&self->lines, (c2s("")), string, tmp3);
    return self->lines.len - 1;
}
void GenC_cha_ru2(GenC* self, int pos, string val) { //fang
    if (self->nogen) {
        return;
    }
    
    string val4 = val;
    array_set(&self->lines,pos, &val4);
}
void GenC_insert_before(GenC* self, string val) { //fang
     array_insert(&self->lines, self->lines.len - 1, &val);
}
void GenC_register_thread_fn(GenC* self, string wrapper_name, string wrapper_text, string struct_text) { //fang
    array_string _arr_5 = self->thread_args;
    for (int _i_6 = 0; _i_6 < _arr_5.len; _i_6 ++) {
        string arg = (((string*) _arr_5.data)[_i_6]);
        if ( string_contains(arg, wrapper_name)) {
            return;
        }
        
    }
    _PUSH(&self->thread_args, (struct_text), string, tmp7);
    _PUSH(&self->thread_args, (wrapper_text), string, tmp8);
}
string Z_prof_counters(Z* self) { //fn
    array_string res = new_array(0, 1, sizeof(string));
    array_Type _arr_9 = self->table->types;
    for (int _i_10 = 0; _i_10 < _arr_9.len; _i_10 ++) {
        Type typ = (((Type*) _arr_9.data)[_i_10]);
        array_Fn _arr_11 = typ.methods;
        for (int _i_12 = 0; _i_12 < _arr_11.len; _i_12 ++) {
            Fn f = (((Fn*) _arr_11.data)[_i_12]);
            _PUSH(&res, (_STR("double %.*s_time;", Table_gen_c_fn_name(self->table, &f).len, Table_gen_c_fn_name(self->table, &f).str)), string, tmp13);
        }
    }
    return  array_string_join(res, c2s(";\n"));
}
string Parser_print_prof_counters(Parser* self) { //fang
    array_string res = new_array(0, 1, sizeof(string));
    array_Type _arr_14 = self->table->types;
    for (int _i_15 = 0; _i_15 < _arr_14.len; _i_15 ++) {
        Type typ = (((Type*) _arr_14.data)[_i_15]);
        array_Fn _arr_16 = typ.methods;
        for (int _i_17 = 0; _i_17 < _arr_16.len; _i_17 ++) {
            Fn f = (((Fn*) _arr_16.data)[_i_17]);
            string counter = _STR("%.*s_time", Table_gen_c_fn_name(self->table, &f).len, Table_gen_c_fn_name(self->table, &f).str);
            _PUSH(&res, (_STR("if (%.*s) printf(\"%%%%f : %.*s \\n\", %.*s);", counter.len, counter.str, Table_gen_c_fn_name(self->table, &f).len, Table_gen_c_fn_name(self->table, &f).str, counter.len, counter.str)), string, tmp18);
        }
    }
    return  array_string_join(res, c2s(";\n"));
}
void Parser_gen_type(Parser* self, string s) { //fang
    if (self->run != Pass_decl) {
        return;
    }
    
    _PUSH(&self->genc->types, (s), string, tmp19);
}
void Parser_gen_typedef(Parser* self, string s) { //fang
    if (self->run != Pass_decl) {
        return;
    }
    
    _PUSH(&self->genc->typedefs, (s), string, tmp20);
}
void Parser_gen_type_alias(Parser* self, string s) { //fang
    if (self->run != Pass_decl) {
        return;
    }
    
    _PUSH(&self->genc->type_aliases, (s), string, tmp21);
}
void build_thirdparty_obj_file(string flag) { //fang
    string obj_path =  string_all_after(flag, c2s(" "));
    if (os__file_exists(obj_path)) {
        return;
    }
    
    println(_STR("%.*s 没找到, 构建TA...", obj_path.len, obj_path.str));
    string parent =  string_trim_space( string_last_before(obj_path, c2s("/")));
    array_string files = os__ls(parent);
    string cfiles = c2s("");
    array_string _arr_22 = files;
    for (int _i_23 = 0; _i_23 < _arr_22.len; _i_23 ++) {
        string file = (((string*) _arr_22.data)[_i_23]);
        if ( string_ends_with(file, c2s(".c"))) {
            cfiles = string_add(cfiles, string_add(string_add(string_add(parent, c2s("/")), file), c2s(" ")));
        }
        
    }
    string cc = (string_eq(os__user_os(), c2s("windows")))?(c2s("gcc")):(c2s("cc"));
    string res = os__exec(_STR("%.*s -fPIC -c -o %.*s %.*s", cc.len, cc.str, obj_path.len, obj_path.str, cfiles.len, cfiles.str));
    println(res);
}
void Parser_class_decl(Parser* self) { //fang
    self->z_log = c2s("----->>-----\n");
     Parser_log2(self, c2s("cyan"), c2s("class "));
     Parser_next(self);
    string class_name =  Parser_check_name(self);
    string orig_name = class_name;
    bool is_c = 0;
    if (string_eq(class_name, c2s("C")) && self->tok == Token_dot) {
        is_c = 1;
         Parser_check(self, Token_dot);
        if (self->tok == Token_lcbr) {
            class_name = c2s("C_Fn");
            goto cc;
        }
        
        class_name =  Parser_check_name(self);
        orig_name = class_name;
    }
    else if (!self->neibu_bao && string_ne(self->mod, c2s("main"))) {
        class_name = _STR("%.*s__%.*s", self->mod.len, self->mod.str, class_name.len, class_name.str);
    }
    
     Parser_log2(self, c2s("cyan"), _STR("%.*s ", class_name.len, class_name.str));
    if (self->run == Pass_decl &&  Table_known_type(self->table, class_name)) {
         Parser_error(self, _STR("重复声明 类 \"%.*s\"", class_name.len, class_name.str));
    }
    
    Type* typ =  Table_find_type(self->table, class_name);
    bool is_ph = 0;
    if (typ->is_JiMing) {
        is_ph = 1;
        typ->is_JiMing = 0;
        is_struct:
        1; /*表达式语句*/
    }
    else {
        typ = ALLOC_INIT(Type, {.name = class_name, .orig_name = orig_name, .mod = self->mod, .is_struct = 1, .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .parent = c2s(""), .is_c = 0, .is_interface = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), .is_JiMing = 0});
    }
    
    if (is_c && self->tok != Token_lcbr) {
         Table_register_type2(self->table, *typ);
        return;
    }
    
    if (!is_c) {
         Parser_gen_typedef(self, _STR("typedef struct %.*s %.*s;", class_name.len, class_name.str, class_name.len, class_name.str));
         Parser_gen_type(self, _STR("struct %.*s {", class_name.len, class_name.str));
    }
    
    cc:
     Parser_log2(self, c2s("cyan"), c2s("{\n"));
     Parser_check(self, Token_lcbr);
     Parser_fmt_0(self);
    array_string attributes = new_array(0, 1, sizeof(string));
    string attr_type = c2s("");
    string attr_name = c2s("");
    AccessMod access_mod = AccessMod_public;
    bool is_let = 0;
    while (self->tok != Token_rcbr) {
        if (self->tok == Token_key_pri) {
             Parser_next(self);
             Parser_check(self, Token_colon);
            access_mod = AccessMod_private;
        }
        
        if (self->tok == Token_key_let) {
             Parser_next(self);
             Parser_check(self, Token_colon);
            is_let = 1;
        }
        
        if (self->tok != Token_NAME && self->tok != Token_lsbr && self->tok != Token_mul) {
             Parser_log2(self, c2s("red"), _STR("%.*s", self->lit.len, self->lit.str));
             Parser_error(self, c2s("不是有效类型"));
        }
        
        attr_type =  Parser_get_type(self);
        if (self->tok == Token_mul) {
            attr_type = string_add(attr_type, c2s("*"));
             Parser_next(self);
        }
        
        n:
        int _nl = self->scanner->line_nr;
        attr_name =  Parser_check_name(self);
        if (self->scanner->line_nr == _nl && self->tok == Token_lsbr) {
            int i = 0;
             Parser_next(self);
            if (i == 0 && self->tok == Token_rsbr) {
                attr_type = string_add(c2s("array_"), attr_type);
            }
            else {
                string ar = self->lit;
                 Parser_check(self, Token_NUMBER);
            }
            
             Parser_check(self, Token_rsbr);
        }
        
        self->z_log = string_add(string_add(string_add(self->z_log, c2s("     ")), attr_name), c2s("\n"));
        if (self->tok == Token_lpar) {
            self->z_log = string_add(string_add(string_add(self->z_log, c2s("     ")), attr_name), c2s("(\n"));
            goto lf;
        }
        
        if (_IN(string, attr_name, attributes)) {
            println(_STR("重复属性 %.*s", attr_name.len, attr_name.str));
            continue;
        }
        
        _PUSH(&attributes, (attr_name), string, tmp1);
        if (!is_c) {
             Parser_gen_type(self, string_add(string_add(c2s("    "),  Table_gen_c_type_name_pair(self->table, attr_type, (string_add(attr_name, self->_arr_ss)))), c2s(";")));
            self->_arr_ss = c2s("");
        }
        
        string attri = c2s("");
         Type_add_attr(typ, attr_name, attr_type, is_let, attri, access_mod);
        if (self->tok == Token_comma) {
             Parser_next(self);
            goto n;
        }
        
    }
    lf:
    if (!is_c) {
         Parser_gen_type(self, c2s("}; "));
    }
    
    if (!is_ph && self->run == Pass_decl && string_ne(class_name, c2s("C_Fn"))) {
         Table_register_type2(self->table, *typ);
    }
    
    if (self->tok == Token_lpar) {
         Parser_f_decl(self, class_name, attr_type, attr_name, 1);
        while (self->tok != Token_rcbr) {
            attr_type =  Parser_get_type(self);
            if (self->tok == Token_mul) {
                attr_type = string_add(attr_type, c2s("*"));
                 Parser_next(self);
            }
            
            attr_name =  Parser_check_name(self);
            self->z_log = string_add(string_add(self->z_log, attr_name), c2s("(\n"));
             Parser_f_decl(self, class_name, attr_type, attr_name, 1);
        }
    }
    
     Parser_log2(self, c2s("cyan"), c2s("}\n"));
     Parser_check(self, Token_rcbr);
     Parser_fmt_0(self);
}
void Parser_f_decl(Parser* self, string class_name, string attr_type, string attr_name, bool p) { //fang
    bool _pri =  array_string_contains(self->attrs, c2s("private"));
    Fn* f = new_Fn(self->mod, _pri);
    self->returns = 0;
    if (string_eq(attr_name, c2s("new")) || string_eq(class_name, c2s("")) || string_eq(class_name, c2s("C_Fn"))) {
        goto l2;
    }
    
    f->is_method = 1;
    f->_class = class_name;
    f->orig_class =  string_all_after(class_name, c2s("_"));
    if (string_eq(attr_name, f->orig_class)) {
        goto l2;
    }
    
    string _type = class_name;
    if (p) {
        _type = string_add(class_name, c2s("*"));
    }
    
    Var this = (/*&C.*/Var){.name = c2s("self"), .type = _type, .is_self = 1, .is_arg = 1, .ref = 0, .ptr = p, .line_nr = self->scanner->line_nr, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .parent = c2s(""), .value = 0, .counts = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    _PUSH(&f->args, (this), Var, tmp2);
     Fn_register_var(f, this);
    l2:
    f->ret_type = attr_type;
    f->name = attr_name;
    if (string_eq(f->name, c2s("new"))) {
        f->name = string_add(c2s("new_"), class_name);
        f->_class = c2s("");
        f->is_method = 0;
    }
    
     Parser_f_args(self, f);
    if (string_eq(class_name, c2s("C_Fn"))) {
         Table_register_fn(self->table, *f);
        return;
    }
    
    string str_fn_name =  Table_gen_c_fn_name(self->table, f);
    string str_fn_args =  Fn_str_args(f, self->table);
    if (string_eq(f->name, c2s("main")) && !f->is_method) {
        attr_type = c2s("int");
        str_fn_args = c2s("int argc, char** argv");
    }
    
    self->cur_fn = f;
    if (f->is_method) {
        Type* _t =  Table_find_type(self->table, class_name);
        if (!_t) {
            println(_STR("class名错误 %.*s", class_name.len, class_name.str));
        }
        
        if (self->run == Pass_decl && string_eq(_t->name, c2s(""))) {
             Table_register_type2(self->table, (/*&C.*/Type){.name =  string_replace(class_name, c2s("*"), c2s("")), .mod = self->mod, .is_JiMing = 1, .orig_name = c2s(""), .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .parent = c2s(""), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), });
        }
        
         Type_add_method(_t, *f);
    }
    else {
         Table_register_fn(self->table, *f);
    }
    
    if (self->run == Pass_main) {
         Parser_genln(self, _STR("%.*s %.*s(%.*s) { //fang", attr_type.len, attr_type.str, str_fn_name.len, str_fn_name.str, str_fn_args.len, str_fn_args.str));
    }
    
     Parser_log2(self, c2s("cyan"), c2s("{\n"));
     Parser_check(self, Token_lcbr);
    if (self->run == Pass_decl) {
        if (string_ne(f->name, c2s("main"))) {
            string fn_decl = _STR("%.*s %.*s(%.*s) ; //tou", attr_type.len, attr_type.str, str_fn_name.len, str_fn_name.str, str_fn_args.len, str_fn_args.str);
            _PUSH(&self->genc->fns, (fn_decl), string, tmp3);
        }
        
        self->z_log = string_add(self->z_log, c2s("-- 跳过主体 --"));
        int i = 1;
        while (1) {
            if (self->tok == Token_lcbr) {
                i++;
            }
            
            if (self->tok == Token_rcbr) {
                i--;
            }
            
            if (i == 0) {
                 Parser_check(self, Token_rcbr);
                break;
            }
            
            if (self->tok == Token_eof && i != 0) {
                 Parser_error(self, _STR("函数 %.*s 没有结束", f->name.len, f->name.str));
            }
            
             Parser_next(self);
        }
        return;
    }
    
    if (string_eq(f->name, c2s("main")) || string_eq(f->name, c2s("WinMain"))) {
         Parser_genln(self, c2s("init_consts();"));
        if ( array_string_contains(self->table->imports, c2s("os"))) {
            if (string_eq(f->name, c2s("main"))) {
                 Parser_genln(self, c2s("os__args = os__init_os_args(argc, argv);"));
            }
            else if (string_eq(f->name, c2s("WinMain"))) {
                 Parser_genln(self, c2s("os__args = os__parse_windows_cmd_line(pCmdLine);"));
            }
            
        }
        
    }
    
     Parser_statements_no_curly_end(self);
    if (string_ne(attr_type, c2s("void")) && !self->returns && string_ne(f->name, c2s("main")) && string_ne(f->name, c2s("WinMain"))) {
         Parser_error(self, _STR("%.*s 没有返回 \"%.*s\"", f->name.len, f->name.str, attr_type.len, attr_type.str));
    }
    
     Parser_genln(self, c2s("}"));
}
void Parser_f_args(Parser* self, Fn* f) { //fang
     Parser_check(self, Token_lpar);
    bool only_types = ( Table_known_type(self->table, self->lit) &&  Parser_peek(self).tok == Token_comma) ||  Parser_peek(self).tok == Token_rpar;
    if (only_types) {
        while (self->tok != Token_rpar) {
            string C_typ =  Parser_get_type(self);
            if (self->tok == Token_mul) {
                C_typ = string_add(C_typ, c2s("*"));
                 Parser_next(self);
            }
            
            if (self->tok == Token_comma) {
                 Parser_next(self);
            }
            
        }
    }
    
    while (self->tok != Token_rpar) {
        string typ =  Parser_get_type(self);
        bool is_mul = self->tok == Token_mul;
        if (is_mul) {
            typ = string_add(typ, c2s("*"));
             Parser_next(self);
        }
        
        if (self->run == Pass_main && ! Table_known_type(self->table, typ)) {
             Parser_error(self, _STR("函数参数未知类型 %.*s", typ.len, typ.str));
        }
        
        array_string names = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
        while (self->tok == Token_NAME &&  Parser_peek(self).tok == Token_comma) {
            self->z_log = string_add(self->z_log, _STR("%.*s , ", self->lit.len, self->lit.str));
            _PUSH(&names, ( Parser_check_name(self)), string, tmp4);
             Parser_check(self, Token_comma);
        }
        if (self->tok == Token_NAME &&  Parser_peek(self).tok == Token_rpar) {
            self->z_log = string_add(self->z_log, _STR("%.*s ) ", self->lit.len, self->lit.str));
            _PUSH(&names, ( Parser_check_name(self)), string, tmp5);
        }
        
        array_string _arr_6 = names;
        for (int _i_7 = 0; _i_7 < _arr_6.len; _i_7 ++) {
            string n = (((string*) _arr_6.data)[_i_7]);
            Var v = (/*&C.*/Var){.name = n, .type = typ, .is_arg = 1, .ptr = is_mul, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .parent = c2s(""), .value = 0, .counts = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
             Fn_register_var(f, v);
            _PUSH(&f->args, (v), Var, tmp8);
        }
        if (self->tok == Token_dotdot) {
            _PUSH(&f->args, ((/*&C.*/Var){.name = c2s(".."), .type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")}), Var, tmp9);
             Parser_next(self);
        }
        
    }
     Parser_check(self, Token_rpar);
}
Fn* new_Fn(string pkg, bool private) { //fang
        Var val10 = (/*&C.*/Var){.type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    return ALLOC_INIT(Fn, {.pkg = pkg, .local_vars = array_repeat(&val10, 50, sizeof(Var) ), .is_private = private, ._class = c2s(""), .orig_class = c2s(""), .name = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_method = 0, .is_interface = 0, .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0});
}
Fn* Fn_Fn(string pkg, bool private) { //fang
        Var val11 = (/*&C.*/Var){.type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    return ALLOC_INIT(Fn, {.pkg = pkg, .local_vars = array_repeat(&val11, 50, sizeof(Var) ), .is_private = private, ._class = c2s(""), .orig_class = c2s(""), .name = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_method = 0, .is_interface = 0, .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0});
}
Var Fn_find_var(Fn* self, string name) { //fang
    int _arr_12 = 0;
    for (int _i_13 = _arr_12; _i_13 < self->var_idx; _i_13++) {
        int i = _i_13;
        if (string_eq(( *(Var*) array_get(self->local_vars,i) ).name, name)) {
            return ( *(Var*) array_get(self->local_vars,i) );
        }
        
        if (string_eq(name, c2s("self")) && ( *(Var*) array_get(self->local_vars,i) ).is_self) {
            return ( *(Var*) array_get(self->local_vars,i) );
        }
        
    }
    return (/*&C.*/Var){.type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
}
bool Fn_known_var(Fn* self, string name) { //fang
    Var v =  Fn_find_var(self, name);
    return v.name.len > 0;
}
void Fn_register_var(Fn* self, Var v) { //fang
    Var new_var = (Var){.scope_level = self->scope_level, .type = v.type, .type1 = v.type1, .type2 = v.type2, .name = v.name, .arr_ss = v.arr_ss, .is_let = v.is_let, .is_const = v.is_const, .is_import_const = v.is_import_const, .is_global = v.is_global, .is_array = v.is_array, .is_self = v.is_self, .is_arg = v.is_arg, .parent = v.parent, .value = v.value, .counts = v.counts, .ptr = v.ptr, .ref = v.ref, .mod = v.mod, .args = v.args, .access_mod = v.access_mod, .attr = v.attr, .attr2 = v.attr2, .parent_fn = v.parent_fn, .line_nr = v.line_nr, .is_used = v.is_used, .z_cur_fn = v.z_cur_fn, };
    if (self->var_idx >= self->local_vars.len) {
        _PUSH(&self->local_vars, (new_var), Var, tmp14);
    }
    else {
        Var val15 = new_var;
        array_set(&self->local_vars,self->var_idx, &val15);
    }
    
    self->var_idx++;
}
void Fn_clear_vars(Fn* self) { //fang
    self->var_idx = 0;
    self->local_vars = new_array_from_c_array(0, 0, sizeof(Var), (Var[]) {  });
}
void Fn_open_scope(Fn* self) { //fang
    self->scope_level++;
}
void Fn_close_scope(Fn* self) { //fang
    int i = self->var_idx - 1;
    for (;i >= 0;i--) { 
        Var v = ( *(Var*) array_get(self->local_vars,i) );
        if (v.scope_level != self->scope_level) {
            break;
        }
        
    }
    self->var_idx = i + 1;
    self->scope_level--;
}
string Fn_str(Fn* self) { //fang
    Table t = (/*&C.*/Table){.types = new_array(0, 1, sizeof(Type)), .consts = new_array(0, 1, sizeof(Var)), .fns = new_map(1, sizeof(Fn), "Fn"), .obf_ids = new_map(1, sizeof(int), "int"), .imports = new_array(0, 1, sizeof(string)), .flags = new_array(0, 1, sizeof(string)), .fn_cnt = 0, .obfuscate = 0};
    string str_fn_args =  Fn_str_args(self, &t);
    return _STR("%.*s %.*s(%.*s)", self->ret_type.len, self->ret_type.str, self->name.len, self->name.str, str_fn_args.len, str_fn_args.str);
}
void Fn_mark_var_used(Fn* self, Var v) { //fang
    array_Var tmp16 = self->local_vars ;
    for (int i = 0; i < tmp16.len; i ++) {
        Var vv = ((Var*) tmp16.data)[i];
        if (string_eq(vv.name, v.name)) {
            ( *(Var*) array_get(self->local_vars,i) ).is_used = 1;
        }
        
    }
}
string Parser_struct_init(Parser* self, bool is_c_struct_init) { //fang
    string typ =  Parser_get_type(self);
    self->decl_var.type2 = typ;
    bool ptr =  string_contains(typ, c2s("*"));
     Parser_check(self, Token_lcbr);
     Parser_log2(self, c2s("cyan"), _STR("%.*s {", typ.len, typ.str));
    if (ptr) {
        if (self->tok == Token_not) {
             Parser_next(self);
             Parser_gen(self, c2s("0"));
             Parser_check(self, Token_rcbr);
            return typ;
        }
        
        string no_star =  string_replace(typ, c2s("*"), c2s(""));
         Parser_gen(self, _STR("ALLOC_INIT(%.*s, {", no_star.len, no_star.str));
    }
    else {
        if (is_c_struct_init) {
             Parser_gen(self, _STR("(struct /*C.*/%.*s){", typ.len, typ.str));
        }
        else {
             Parser_gen(self, _STR("(/*&C.*/%.*s){", typ.len, typ.str));
        }
        
    }
    
    array_string inited_attributes = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    Token peek =  Parser_peek(self).tok;
    if (peek == Token_colon || self->tok == Token_rcbr) {
        Type* t =  Table_find_type(self->table, typ);
        while (self->tok != Token_rcbr) {
            string ta =  Parser_check_name(self);
            if (! Type_has_attr(t, ta)) {
                 Parser_error(self, _STR("struct初始化: `%.*s` 没有字段 `%.*s`", t->name.len, t->name.str, ta.len, ta.str));
            }
            
            Var attr =  Type_find_attr(t, ta);
            _PUSH(&inited_attributes, (ta), string, tmp1);
             Parser_gen(self, _STR(".%.*s = ", ta.len, ta.str));
             Parser_check(self, Token_colon);
             Parser_check_types(self,  Parser_bool_expression(self), attr.type, 1);
            if (self->tok == Token_comma) {
                 Parser_next(self);
            }
            
            if (self->tok != Token_rcbr) {
                 Parser_gen(self, c2s(", "));
            }
            
        }
        if (t->attributes.len != inited_attributes.len && inited_attributes.len > 0) {
             Parser_gen(self, c2s(", "));
        }
        
        array_Var tmp2 = t->attributes ;
        for (int i = 0; i < tmp2.len; i ++) {
            Var attr = ((Var*) tmp2.data)[i];
            if ( array_string_contains(inited_attributes, attr.name)) {
                continue;
            }
            
            string attr_typ = attr.type;
            if (!self->neibu_bao &&  string_ends_with(attr_typ, c2s("*")) &&  string_contains(attr_typ, c2s("Cfg"))) {
                 Parser_error(self, _STR("指针(pointer)属性必须初始化: %.*s.%.*s", typ.len, typ.str, attr.name.len, attr.name.str));
            }
            
            string def_val = default_type(attr_typ);
            if (string_ne(def_val, c2s("")) && string_ne(def_val, c2s("{}"))) {
                 Parser_gen(self, _STR(".%.*s = %.*s", attr.name.len, attr.name.str, def_val.len, def_val.str));
                if (i != t->attributes.len - 1) {
                     Parser_gen(self, c2s(", "));
                }
                
            }
            
        }
    }
    else {
        Type* T =  Table_find_type(self->table, typ);
        if (T->attributes.len == 0 && string_ne(T->parent, c2s(""))) {
            T =  Table_find_type(self->table, T->parent);
        }
        
        array_Var tmp3 = T->attributes ;
        for (int i = 0; i < tmp3.len; i ++) {
            Var attr = ((Var*) tmp3.data)[i];
            string expr_typ =  Parser_bool_expression(self);
            if (! Parser_check_types(self, expr_typ, attr.type, 0)) {
                 Parser_error(self, _STR("属性值 #%d %.*s %.*s , 当前值类型 `%.*s` ", i + 1, attr.type.len, attr.type.str, attr.name.len, attr.name.str, expr_typ.len, expr_typ.str));
            }
            
            if (i < T->attributes.len - 1) {
                if (self->tok != Token_comma) {
                     Parser_error(self, _STR("%.*s 初始化值不够(%d) %d ", typ.len, typ.str, T->attributes.len, i + 1));
                }
                
                 Parser_gen(self, c2s(", "));
                 Parser_next(self);
            }
            
        }
        if (self->tok == Token_comma) {
             Parser_next(self);
        }
        
        if (self->tok != Token_rcbr) {
             Parser_error(self, _STR("赋值超出 %.*s 长度 %d ", typ.len, typ.str, T->attributes.len));
        }
        
    }
    
     Parser_log2(self, c2s("cyan"), c2s("}"));
     Parser_gen(self, c2s("}"));
    if (ptr) {
         Parser_gen(self, c2s(")"));
    }
    
     Parser_check(self, Token_rcbr);
    return typ;
}
void Z_compile(Z* self) { //fang
    GenC* genc = self->genc;
     GenC_genln(genc, c2s("// 由Z语言生成"));
     Z_add_user_z_files(self);
    if (self->pref->is_verbose) {
        println(c2s("all .z files:"));
        println(array_string_str(self->files));
    }
    
    println(c2s("[声名]"));
    array_string _arr_1 = self->files;
    for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
        string file = (((string*) _arr_1.data)[_i_2]);
        Parser o =  Z_new_parser(self, file, Pass_decl);
         Parser_parse(&o);
    }
    genc->run = Pass_main;
    if (self->pref->is_play) {
         GenC_genln(genc, c2s("#define ZPLAY (1) "));
    }
    
     GenC_genln(genc, _tou_);
    bool imports_json =  array_string_contains(self->table->imports, c2s("json"));
    if (imports_json && self->pref->build_mode == BuildMode_embed_lib || (self->pref->build_mode == BuildMode_build &&  string_contains(self->out_name, c2s("json.o")))) {
    }
    
    if (self->pref->build_mode == BuildMode_default_mode) {
        if (imports_json) {
             GenC_genln(genc, c2s("#include \"cJSON.h\""));
        }
        
    }
    
    if (self->pref->build_mode == BuildMode_embed_lib || self->pref->build_mode == BuildMode_default_mode) {
         GenC_genln(genc, c2s("int g_test_ok = 1; "));
        if ( array_string_contains(self->table->imports, c2s("json"))) {
             GenC_genln(genc, c2s("#define js_get(object, key) cJSON_GetObjectItemCaseSensitive((object), (key))"));
        }
        
    }
    
    if ( array_string_contains(os__args, c2s("-debug_alloc"))) {
         GenC_genln(genc, c2s("#define DEBUG_ALLOC 1"));
    }
    
    int defs_pos = genc->lines.len - 1;
    println(c2s("[主体]"));
    array_string _arr_3 = self->files;
    for (int _i_4 = 0; _i_4 < _arr_3.len; _i_4 ++) {
        string file = (((string*) _arr_3.data)[_i_4]);
        Parser o =  Z_new_parser(self, file, Pass_main);
         Parser_parse(&o);
        if (!self->pref->nofmt && ! string_contains(file, c2s("/zlib/"))) {
        }
        
    }
     Z_log(self, c2s("Done parsing."));
    strings__Builder d = strings__new_builder(10000);
     strings__Builder_writeln(&d,  array_string_join_lines(genc->includes));
     strings__Builder_writeln(&d,  array_string_join_lines(genc->typedefs));
     strings__Builder_writeln(&d,  array_string_join_lines(genc->types));
     strings__Builder_writeln(&d, c2s("\nstring _STR(const char*, ...);\n"));
     strings__Builder_writeln(&d, c2s("\nstring _STR_TMP(const char*, ...);\n"));
     strings__Builder_writeln(&d,  array_string_join_lines(genc->fns));
     strings__Builder_writeln(&d,  array_string_join_lines(genc->consts));
     strings__Builder_writeln(&d,  array_string_join_lines(genc->thread_args));
    if (self->pref->is_prof) {
         strings__Builder_writeln(&d, c2s("; // Prof counters:"));
         strings__Builder_writeln(&d,  Z_prof_counters(self));
    }
    
    string dd =  strings__Builder_str(d);
     array_set(&genc->lines, defs_pos, &dd);
    if (self->pref->build_mode == BuildMode_default_mode || self->pref->build_mode == BuildMode_embed_lib) {
         GenC_genln(genc, _STR("void init_consts() { g_str_buf = malloc(1000); %.*s }", array_string_join_lines(genc->consts_init).len, array_string_join_lines(genc->consts_init).str));
         GenC_genln(genc, _str_);
    }
    
    if (self->pref->build_mode != BuildMode_build) {
        if (! Table_main_exists(self->table) && !self->pref->is_test) {
            if (self->pref->is_script) {
                 GenC_genln(genc, _STR("int main() { init_consts(); %.*s; return 0; }", genc->fn_main.len, genc->fn_main.str));
            }
            else {
                println(c2s("主模块未声明 main 函数"));
                z_exit(1);
            }
            
        }
        else if (self->pref->is_test) {
             GenC_genln(genc, c2s("int main() { init_consts();"));
            map_Fn tmp5 = self->table->fns ;
            for (int l = 0; l < tmp5.entries.len; l++) {
                Entry en = ((Entry*) tmp5.entries.data)[l];
                string key = en.key;
                Fn f = {}; map_get(tmp5, key, & f);
                if ( string_starts_with(f.name, c2s("test_"))) {
                     GenC_genln(genc, _STR("%.*s();", f.name.len, f.name.str));
                }
                
            }
             GenC_genln(genc, c2s("return g_test_ok == 0; }"));
        }
        
    }
    
    if (self->pref->is_live) {
        string file = self->dir;
        string file_base =  string_replace(self->dir, c2s(".z"), c2s(""));
        string so_name = string_add(file_base, c2s(".so"));
        os__system(_STR("z -o %.*s -shared %.*s", file_base.len, file_base.str, file.len, file.str));
         GenC_genln(genc, c2s("\n#include <dlfcn.h>\nvoid* live_lib; \nint load_so(char* path) {\n	char cpath[1024];\n	sprintf(cpath,\"./%s\", path);\n	//printf(\"load_so %s\\n\", cpath); \n	if (live_lib) dlclose(live_lib); \n	live_lib = dlopen(cpath, RTLD_LAZY);\n	if (!live_lib) {\n		puts(\"打开失败\"); \n		exit(1); \n		return 0;\n	} \n"));
        array_string _arr_6 = genc->so_fns;
        for (int _i_7 = 0; _i_7 < _arr_6.len; _i_7 ++) {
            string so_fn = (((string*) _arr_6.data)[_i_7]);
             GenC_genln(genc, _STR("%.*s = dlsym(live_lib, \"%.*s\");  ", so_fn.len, so_fn.str, so_fn.len, so_fn.str));
        }
         GenC_genln(genc, c2s("return 1; }"));
         GenC_genln(genc, _STR("\n \nvoid reload_so() {\n	int last = os__file_last_mod_unix(c2s(\"%.*s\"));\n	while (1) {\n		int now = os__file_last_mod_unix(c2s(\"%.*s\")); \n		if (now != last) {\n			//z -o bounce -shared bounce.z \n			os__system(c2s(\"z -o %.*s -shared %.*s\")); \n			last = now; \n			load_so(\"%.*s\"); \n		}\n		time__sleep_ms(400); \n	}\n}", file.len, file.str, file.len, file.str, file_base.len, file_base.str, file.len, file.str, so_name.len, so_name.str));
    }
    
    if (self->pref->is_so) {
         GenC_genln(genc, c2s(" int load_so(char* path) { return 0; }"));
    }
    
     GenC_genln(genc, c2s("/* 编译器开发: 张兵 */"));
     GenC_save(genc);
    if (self->pref->is_verbose) {
         Z_log(self, c2s("flags="));
        println(array_string_str(self->table->flags));
    }
    
    if (!self->pref->z_c) {
         Z_cc(self);
    }
    
    if (self->pref->is_test || self->pref->is_run) {
        if (1 || self->pref->is_verbose) {
            println(_STR("============ 运行 %.*s ============", self->out_name.len, self->out_name.str));
        }
        
        string cmd = ( string_starts_with(self->out_name, c2s("/")))?(self->out_name):(string_add(c2s("./"), self->out_name));
        #ifdef _WIN32
            cmd = self->out_name;
        #endif
        if (os__args.len > 3) {
            cmd = string_add(cmd, string_add(c2s(" "),  array_string_join( array_right(os__args, 3), c2s(" "))));
        }
        
        int ret = os__system(cmd);
        if (ret != 0) {
            if (!self->pref->is_test) {
                string s = os__exec(cmd);
                println(s);
                println(c2s("编译运行失败"));
            }
            
            z_exit(1);
        }
        
    }
    
}
bool is_compile_time_const(string s) { //fang
    s =  string_trim_space(s);
    if (string_eq(s, c2s(""))) {
        return 0;
    }
    
    if ( string_contains(s, c2s("\'"))) {
        return 1;
    }
    
    string _arr_1 = s;
    for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
        char c = (((char*) _arr_1.str)[_i_2]);
        if (!((c >= '0' && c <= '9') || c == '.')) {
            return 0;
        }
        
    }
    return 1;
}
void Parser_const_decl(Parser* self) { //fang
    bool is_import = self->tok == Token_key_import;
    if (is_import) {
         Parser_next(self);
    }
    
     Parser_check(self, Token_key_const);
    bool k = 0;
    if (self->tok != Token_lpar) {
        k = 1;
        goto l1;
    }
    
     Parser_check(self, Token_lpar);
    while (self->tok == Token_NAME) {
        l1:
        string name =  Parser_check_name(self);
        if (is_import) {
             Table_register_const(self->table, name, c2s("int"), self->mod, 1);
            goto imp;
        }
        
        if (self->tok != Token_assign) {
             Table_register_const(self->table, name, c2s("int"), self->mod, 1);
            goto imp;
        }
        
        if (!self->neibu_bao && string_ne(self->mod, c2s("main"))) {
            name = string_add(string_add(self->mod, c2s("__")), name);
        }
        
         Parser_check(self, Token_assign);
        string typ =  Parser_expression(self);
        if (self->run == Pass_decl) {
            if ( Table_known_const(self->table, name)) {
                 Parser_error(self, _STR("常量%.*s以声明", name.len, name.str));
            }
            
             Table_register_const(self->table, name, typ, self->mod, 0);
        }
        
        if (self->run == Pass_main) {
            if (is_compile_time_const(self->genc->cur_line)) {
                _PUSH(&self->genc->consts, (_STR("#define %.*s %.*s ", name.len, name.str, self->genc->cur_line.len, self->genc->cur_line.str)), string, tmp3);
                self->genc->cur_line = c2s("");
                continue;
            }
            
            if ( string_starts_with(typ, c2s("[")) ||  string_starts_with(typ, c2s("CArray_"))) {
                _PUSH(&self->genc->consts, (string_add( Table_gen_c_type_name_pair(self->table, typ, string_add(name, self->_arr_ss)), _STR(" = %.*s; ", self->genc->cur_line.len, self->genc->cur_line.str))), string, tmp4);
            }
            else {
                _PUSH(&self->genc->consts, (string_add( Table_gen_c_type_name_pair(self->table, typ, name), c2s(";"))), string, tmp5);
                _PUSH(&self->genc->consts_init, (_STR("%.*s = %.*s; ", name.len, name.str, self->genc->cur_line.len, self->genc->cur_line.str)), string, tmp6);
            }
            
            self->genc->cur_line = c2s("");
        }
        
        imp:
        if (k) {
            goto l2;
        }
        
    }
     Parser_check(self, Token_rpar);
    l2:
}
string Parser_dot(Parser* self, string str_typ, int method_ph) { //fang
     Parser_log2(self, c2s("cyan"), c2s("."));
     Parser_check(self, Token_dot);
    string attr_name = self->lit;
     Parser_log(self, _STR("dot() attr_name=%.*s typ=%.*s", attr_name.len, attr_name.str, str_typ.len, str_typ.str));
    Type* typ =  Parser_find_type(self, str_typ);
    if (typ->name.len == 0) {
         Parser_error(self, _STR("dot(): 未找到类型 `%.*s`", str_typ.len, str_typ.str));
    }
    
    bool has_attr =  Table_type_has_attr(self->table, typ, attr_name);
    bool has_method =  Table_type_has_method(self->table, typ, attr_name);
    if (!typ->is_c && !has_attr && !has_method && self->run == Pass_main) {
        self->z_log = string_add(self->z_log, Console__red(_STR("%.*s ", attr_name.len, attr_name.str)));
        println(c2s("==============================================="));
        println(_STR("错误 点连接\n类型: %.*s", str_typ.len, str_typ.str));
        println(c2s("==============================================="));
        if ( string_starts_with(typ->name, c2s("Option_"))) {
            string opt_type =  string_right(typ->name, 7);
             Parser_error(self, _STR("未处理选项类型: %.*s", opt_type.len, opt_type.str));
        }
        
        println(c2s("-----属性 | attr -----"));
        array_Var _arr_1 = typ->attributes;
        for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
            Var attr = (((Var*) _arr_1.data)[_i_2]);
            println(attr.name);
        }
        println(c2s("\n-----方法 | methods -----"));
        array_Fn _arr_3 = typ->methods;
        for (int _i_4 = 0; _i_4 < _arr_3.len; _i_4 ++) {
            Fn attr = (((Fn*) _arr_3.data)[_i_4]);
            println(attr.name);
        }
        println(c2s("==============================================="));
        println(_STR("类型: %.*s", str_typ.len, str_typ.str));
        println(c2s("==============================================="));
         Parser_error(self, _STR("type \"{%.*s}\"  不含 属性 或 方法 \"%.*s\"", typ->name.len, typ->name.str, Console__red(attr_name).len, Console__red(attr_name).str));
    }
    
    string dot = c2s(".");
    if ( string_contains(str_typ, c2s("*"))) {
        dot = c2s("->");
    }
    
    if (has_attr) {
        Var attr =  Table_find_attr(self->table, typ, attr_name);
         Parser_gen(self, string_add(dot, attr_name));
         Parser_next(self);
         Parser_log2(self, c2s("cyan"), _STR("%.*s ", attr_name.len, attr_name.str));
        return attr.type;
    }
    
    Fn method =  Table_find_method(self->table, typ, attr_name);
     Parser_fn_call(self, method, method_ph, c2s(""), str_typ);
    if (string_eq(method.ret_type, c2s("array")) &&  string_starts_with(typ->name, c2s("array_"))) {
        return typ->name;
    }
    
    if (string_eq(method.ret_type, c2s("void*")) &&  string_starts_with(typ->name, c2s("array_"))) {
        return  string_right(typ->name, 6);
    }
    
    return method.ret_type;
}
void Parser_enum_decl(Parser* self) { //fang
     Parser_next(self);
    string enum_type =  Parser_check_name(self);
    string orig_name = enum_type;
    if (!self->neibu_bao && string_ne(self->mod, c2s("main"))) {
        enum_type = _STR("%.*s__%.*s", self->mod.len, self->mod.str, enum_type.len, enum_type.str);
    }
    
    if (self->run == Pass_decl) {
        _PUSH(&self->genc->typedefs, (_STR("typedef int %.*s;", enum_type.len, enum_type.str)), string, tmp1);
    }
    
    bool _arr_ = 0;
    string arr_typ = c2s("");
    if (self->tok == Token_colon) {
         Parser_next(self);
        arr_typ =  Parser_check_name(self);
        _arr_ = 1;
         GenC_start_tmp(self->genc);
         Parser_gen(self, _STR("(%.*s[]){", arr_typ.len, arr_typ.str));
    }
    
     Parser_check(self, Token_lcbr);
    int i = 0;
    array_string attributes = new_array(0, 1, sizeof(string));
    while (self->tok == Token_NAME) {
        string attr =  Parser_check_name(self);
        if (_IN(string, attr, attributes)) {
             Parser_error(self, _STR("enum重复属性 %.*s", attr.len, attr.str));
        }
        
        _PUSH(&attributes, (attr), string, tmp2);
        if (_arr_) {
            if (self->tok == Token_assign) {
                 Parser_next(self);
                 Parser_bool_expression(self);
                if (self->tok != Token_rcbr) {
                     Parser_gen(self, c2s(", "));
                }
                
            }
            else {
                string mo = default_type(arr_typ);
                 Parser_gen(self, mo);
                if (self->tok != Token_rcbr) {
                     Parser_gen(self, c2s(", "));
                }
                
            }
            
        }
        
        if (self->run == Pass_main) {
            _PUSH(&self->genc->consts, (_STR("#define %.*s_%.*s %d", enum_type.len, enum_type.str, attr.len, attr.str, i)), string, tmp3);
        }
        
        if (self->tok == Token_comma) {
             Parser_next(self);
        }
        
        i++;
    }
    if (_arr_) {
         Parser_gen(self, c2s("}"));
        string arr =  GenC_end_tmp(self->genc);
        if (self->run == Pass_decl) {
             Table_register_const(self->table, _STR("%.*s_arr", enum_type.len, enum_type.str), _STR("array_%.*s", arr_typ.len, arr_typ.str), self->mod, 0);
        }
        
        if (self->run == Pass_main) {
            _PUSH(&self->genc->consts, (string_add( Table_gen_c_type_name_pair(self->table, _STR("array_%.*s", arr_typ.len, arr_typ.str), _STR("%.*s_arr", enum_type.len, enum_type.str)), c2s(";"))), string, tmp4);
            _PUSH(&self->genc->consts_init, (_STR("%.*s_arr = new_array_from_c_array(%d+1,%d+1 , sizeof(%.*s),%.*s); ", enum_type.len, enum_type.str, i, i, arr_typ.len, arr_typ.str, arr.len, arr.str)), string, tmp5);
        }
        
    }
    
     Table_register_type2(self->table, *ALLOC_INIT(Type, {.name = enum_type, .orig_name = orig_name, .enum_vals = attributes, .parent = c2s("int"), .mod = self->mod, .is_enum = 1, .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_JiMing = 0}));
     Parser_check(self, Token_rcbr);
}
void Parser_error(Parser* self, string s) { //fang
    self->scanner->err_line = self->line_pos;
    string log = Console__blue(self->z_log);
    s = string_add(s, _STR("\n::\n%.*s", log.len, log.str));
     Scanner_error(self->scanner,  string_replace(s, c2s("__"), c2s(".")));
}
void Parser_log2(Parser* self, string color, string msg) { //fang
    /*match*/
    if (string_eq(color, c2s("red"))) {/* case 0*/
        msg = Console__red(msg);
    }
    else if (string_eq(color, c2s("blue"))) {/* case 1*/
        msg = Console__blue(msg);
    }
    else if (string_eq(color, c2s("cyan"))) {/* case 2*/
        msg = Console__cyan(msg);
    }
    else if (string_eq(color, c2s("yellow"))) {/* case 3*/
        msg = Console__yellow(msg);
    }
    self->z_log = _STR("%.*s%.*s", self->z_log.len, self->z_log.str, msg.len, msg.str);
}
string Parser_expression(Parser* self) { //fang
    int ph =  GenC_biaoqian(self->genc);
    string typ =  Parser_term(self);
    bool is_str = string_eq(typ, c2s("string"));
    if (self->tok == Token_left_shift) {
         Parser_log2(self, c2s("cyan"), c2s(" << "));
        if ( string_contains(typ, c2s("array_"))) {
            string tmp =  Parser_get_tmp(self);
            string tmp_typ =  string_right(typ, 6);
             Parser_check(self, Token_left_shift);
             Parser_gen(self, c2s(", ("));
            if (self->expr_var.is_let) {
                 Parser_error(self, _STR("%.*s 是常量 不能 << 操作)", self->expr_var.name.len, self->expr_var.name.str));
            }
            
            string expr_type =  Parser_expression(self);
            bool push_array = string_eq(typ, expr_type);
            if (push_array) {
                 GenC_cha_ru(self->genc, ph, c2s("_PUSH_MANY(&"));
                 Parser_gen(self, _STR("), %.*s, %.*s)", typ.len, typ.str, tmp.len, tmp.str));
            }
            else {
                 Parser_check_types(self, expr_type, tmp_typ, 1);
                string push_call = ( string_contains(typ, c2s("*")))?(c2s("_PUSH(")):(c2s("_PUSH(&"));
                 GenC_cha_ru(self->genc, ph, push_call);
                 Parser_gen(self, _STR("), %.*s, %.*s)", tmp_typ.len, tmp_typ.str, tmp.len, tmp.str));
            }
            
            return c2s("void");
        }
        else {
             Parser_next(self);
             Parser_gen(self, c2s(" << "));
             Parser_check_types(self,  Parser_expression(self), typ, 1);
            return c2s("int");
        }
        
    }
    
    if (self->tok == Token_righ_shift) {
        self->z_log = string_add(self->z_log, c2s(" >> "));
         Parser_next(self);
         Parser_gen(self, c2s(" >> "));
         Parser_check_types(self,  Parser_expression(self), typ, 1);
        return c2s("int");
    }
    
    if (self->tok == Token_key_in) {
         Parser_log2(self, c2s("cyan"), c2s(" in "));
         Parser_check(self, Token_key_in);
         Parser_gen(self, c2s(", "));
        self->expected_type = typ;
        string arr_typ =  Parser_expression(self);
        if (! string_starts_with(arr_typ, c2s("array_"))) {
             Parser_error(self, c2s("in 必须是 array"));
        }
        
        Type* T =  Table_find_type(self->table, arr_typ);
        if (! Type_has_method(T, c2s("contains"))) {
             Parser_error(self, _STR("%.*s 没有方法 `contains`", arr_typ.len, arr_typ.str));
        }
        
         Parser_check_types(self, typ,  string_right(arr_typ, 6), 1);
        typ =  string_replace(typ, c2s("*"), c2s(""));
         GenC_cha_ru(self->genc, ph, _STR("_IN(%.*s, ", typ.len, typ.str));
         Parser_gen(self, c2s(")"));
        return c2s("bool");
    }
    
    if (self->tok == Token_dot) {
         Parser_log2(self, c2s("cyan"), c2s(" . "));
        while (self->tok == Token_dot) {
            typ =  Parser_dot(self, typ, ph);
        }
    }
    
    while (_IN(Token, self->tok, new_array_from_c_array(5, 5, sizeof(Token), (Token[]) { Token_plus, Token_minus, Token_pipe, Token_amp, Token_xor }))) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s ", self->lit.len, self->lit.str));
        Token tok_op = self->tok;
        bool is_num = string_eq(typ, c2s("void*")) || string_eq(typ, c2s("char*")) || string_eq(typ, c2s("byte*")) || is_number_type(typ);
        if (is_num) {
             Parser_gen(self, _STR(" %.*s ", self->lit.len, self->lit.str));
        }
        else if (is_str && tok_op == Token_plus) {
             GenC_cha_ru(self->genc, ph, c2s("string_add("));
             Parser_gen(self, c2s(", "));
        }
        else {
             Parser_gen(self, c2s(", "));
        }
        
         Parser_check(self, self->tok);
         Parser_check_types(self,  Parser_term(self), typ, 1);
        if (is_str && tok_op == Token_plus) {
             Parser_gen(self, c2s(")"));
        }
        
        if (!is_str && !is_num) {
            Type* T =  Table_find_type(self->table, typ);
            if (tok_op == Token_plus) {
                if ( Type_has_method(T, c2s("plus"))) {
                     GenC_cha_ru(self->genc, ph, string_add(typ, c2s("_plus(")));
                     Parser_gen(self, c2s(")"));
                }
                else {
                     Parser_error(self, _STR("`%.*s`类型未定义 + ", typ.len, typ.str));
                }
                
            }
            else if (tok_op == Token_minus) {
                if ( Type_has_method(T, c2s("minus"))) {
                     GenC_cha_ru(self->genc, ph, _STR("%.*s_minus(", typ.len, typ.str));
                     Parser_gen(self, c2s(")"));
                }
                else {
                     Parser_error(self, _STR("`%.*s`类型未定义 -", typ.len, typ.str));
                }
                
            }
            
        }
        
    }
    if (self->is_par) {
        self->is_par = 0;
         Parser_gen(self, c2s(")"));
         Parser_check(self, Token_rpar);
    }
    
    return typ;
}
string Parser_term(Parser* self) { //fang
    int line_nr = self->scanner->line_nr;
    string typ =  Parser_unary(self);
    if (self->tok == Token_mul && line_nr != self->scanner->line_nr) {
        return typ;
    }
    
    while (self->tok == Token_mul || self->tok == Token_div || self->tok == Token_mod) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s ", self->lit.len, self->lit.str));
        Token tok = self->tok;
        bool is_div = tok == Token_div;
        bool is_mod = tok == Token_mod;
         Parser_gen(self, _STR(" %.*s ", self->lit.len, self->lit.str));
         Parser_next(self);
        if (is_div && self->tok == Token_NUMBER && string_eq(self->lit, c2s("0"))) {
             Parser_error(self, c2s("不能除以零, integer/0 "));
        }
        
        if (is_mod && (is_float_type(typ) || !is_number_type(typ))) {
             Parser_error(self, c2s("取余需要整数类型, int%int"));
        }
        
         Parser_check_types(self,  Parser_unary(self), typ, 1);
    }
    return typ;
}
string Parser_unary(Parser* self) { //fang
    string typ = c2s("");
    Token tok = self->tok;
    /*match*/
    if ((tok == Token_not)) {/* case 0*/
         Parser_gen(self, c2s("!"));
         Parser_next(self);
        typ = c2s("bool");
         Parser_bool_expression(self);
    }
    else if ((tok == Token_bit_not)) {/* case 1*/
         Parser_gen(self, c2s("~"));
         Parser_next(self);
        typ =  Parser_bool_expression(self);
    }
    else  { //else 2
        typ =  Parser_factor(self);
    }
    return typ;
}
string Parser_factor(Parser* self) { //fang
    self->z_log = string_add(self->z_log, c2s("<分解>"));
    string typ = c2s("");
    Token tok = self->tok;
    /*match*/
    if ((tok == Token_hash)) {/* case 0*/
         Parser_chash(self);
        return c2s("#");
    }
    else if ((tok == Token_minus)) {/* case 1*/
         Parser_gen(self, c2s(" - "));
         Parser_next(self);
        return  Parser_factor(self);
    }
    else if ((tok == Token_NUMBER)) {/* case 2*/
        typ = c2s("int");
        if (( string_contains(self->lit, c2s(".")) ||  string_contains(self->lit, c2s("e"))) && !(string_at(self->lit, 0) == '0' && string_at(self->lit, 1) == 'x')) {
            typ = c2s("f32");
        }
        
        if (string_ne(self->expected_type, c2s("")) && !is_valid_int_const(self->lit, self->expected_type)) {
             Parser_error(self, _STR("constant `%.*s` 溢出 `%.*s`", self->lit.len, self->lit.str, self->expected_type.len, self->expected_type.str));
        }
        
         Parser_gen(self, self->lit);
    }
    else if ((tok == Token_key_sizeof)) {/* case 3*/
         Parser_gen(self, c2s("sizeof("));
         Parser_next(self);
        if (self->tok == Token_lpar) {
             Parser_check(self, Token_lpar);
            string ty =  Parser_get_type(self);
            if (string_eq(self->lit, c2s("*"))) {
                 Parser_next(self);
                ty = string_add(ty, c2s("*"));
            }
            
             Parser_check(self, Token_rpar);
             Parser_gen(self, _STR("%.*s)", ty.len, ty.str));
        }
        
        return c2s("int");
    }
    else if ((tok == Token_amp)) {/* case 4*/
        return  Parser_name_expr(self);
    }
    else if ((tok == Token_dot)) {/* case 5*/
        return  Parser_name_expr(self);
    }
    else if ((tok == Token_mul)) {/* case 6*/
        return  Parser_name_expr(self);
    }
    else if ((tok == Token_NAME)) {/* case 7*/
        if (string_eq(self->lit, c2s("map")) &&  Parser_peek(self).tok == Token_lsbr) {
            return  Parser_map_init(self);
        }
        
        if (string_eq(self->lit, c2s("json")) &&  Parser_peek(self).tok == Token_dot) {
        }
        
        typ =  Parser_name_expr(self);
        return typ;
    }
    else if ((tok == Token_CHAR)) {/* case 8*/
         Parser_char_expr(self);
        typ = c2s("char");
        return typ;
    }
    else if ((tok == Token_STRING)) {/* case 9*/
         Parser_string_expr(self);
        typ = c2s("string");
        return typ;
    }
    else if ((tok == Token_key_false)) {/* case 10*/
        typ = c2s("bool");
         Parser_gen(self, c2s("0"));
    }
    else if ((tok == Token_key_true)) {/* case 11*/
        typ = c2s("bool");
         Parser_gen(self, c2s("1"));
    }
    else if ((tok == Token_lpar)) {/* case 12*/
         Parser_gen(self, c2s("("));
         Parser_check(self, Token_lpar);
        typ =  Parser_bool_expression(self);
        if (!self->ptr_cast) {
             Parser_check(self, Token_rpar);
        }
        
        self->ptr_cast = 0;
         Parser_gen(self, c2s(")"));
        return typ;
    }
    else if ((tok == Token_lsbr)) {/* case 13*/
        return  Parser_array_init(self);
    }
    else if ((tok == Token_lcbr)) {/* case 14*/
        return  Parser_assoc(self);
    }
    else if ((tok == Token_key_if)) {/* case 15*/
        typ =  Parser_if_st(self, 1, 0);
        return typ;
    }
    else  { //else 16
         Parser_error(self, _STR("前一个= %.*s\n未知表达式: \"%.*s\"\n下一个= %.*s", self->prev_lit.len, self->prev_lit.str, Console__red(self->lit).len, Console__red(self->lit).str, Parser_peek(self).lit.len, Parser_peek(self).lit.str));
    }
     Parser_next(self);
    return typ;
}
void Z_add_user_z_files(Z* self) { //fang
    string dir = self->dir;
     Z_log(self, _STR("add_z_files(%.*s)", dir.len, dir.str));
    array_string user_files = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    if ( string_ends_with(dir, c2s(".z"))) {
        _PUSH(&user_files, (dir), string, tmp1);
        dir =  string_first_before(dir, c2s("/"));
        println(_STR("/// : %.*s", dir.len, dir.str));
    }
    else {
        user_files =  Z_duqu_z(self, dir);
    }
    
    if (user_files.len == 0) {
        println(c2s("没有.z文件"));
        z_exit(1);
    }
    
    if (self->pref->is_verbose) {
         Z_log(self, c2s("用户文件:"));
        println(array_string_str(user_files));
    }
    
    array_string _arr_2 = user_files;
    for (int _i_3 = 0; _i_3 < _arr_2.len; _i_3 ++) {
        string file = (((string*) _arr_2.data)[_i_3]);
        Parser o =  Z_new_parser(self, file, Pass_imports);
         Parser_parse(&o);
    }
    array_string _arr_4 = self->table->imports;
    for (int _i_5 = 0; _i_5 < _arr_4.len; _i_5 ++) {
        string _pkg = (((string*) _arr_4.data)[_i_5]);
        string pkg =  Z_mokuai_chuli(self, _pkg);
        string wd = os__getwd();
        string import_path = _STR("%.*s/%.*s", wd.len, wd.str, pkg.len, pkg.str);
        if ((!os__file_exists(import_path))) {
            import_path = _STR("%.*s/mokuai/%.*s", wd.len, wd.str, pkg.len, pkg.str);
        }
        
        if ((!os__file_exists(import_path))) {
            import_path = _STR("%.*s/zlib/%.*s", self->ZYuYan_dir.len, self->ZYuYan_dir.str, pkg.len, pkg.str);
        }
        
        array_string zfiles =  Z_duqu_z(self, import_path);
        array_string _arr_6 = zfiles;
        for (int _i_7 = 0; _i_7 < _arr_6.len; _i_7 ++) {
            string file = (((string*) _arr_6.data)[_i_7]);
            Parser o =  Z_new_parser(self, file, Pass_imports);
             Parser_parse(&o);
        }
    }
    array_string _arr_8 = self->table->imports;
    for (int _i_9 = 0; _i_9 < _arr_8.len; _i_9 ++) {
        string _pkg = (((string*) _arr_8.data)[_i_9]);
        string pkg =  Z_mokuai_chuli(self, _pkg);
        string wd = os__getwd();
        string module_path = _STR("%.*s/%.*s", wd.len, wd.str, pkg.len, pkg.str);
        if ((!os__file_exists(module_path))) {
            module_path = _STR("%.*s/mokuai/%.*s", wd.len, wd.str, pkg.len, pkg.str);
        }
        
        if ((!os__file_exists(module_path))) {
            module_path = _STR("%.*s/zlib/%.*s", self->ZYuYan_dir.len, self->ZYuYan_dir.str, pkg.len, pkg.str);
        }
        
        _PUSH_MANY(&self->files, ( Z_duqu_z(self, module_path)), array_string, tmp10);
    }
    println(_STR("[用户文件]\n %.*s", array_string_strln(user_files).len, array_string_strln(user_files).str));
    _PUSH_MANY(&self->files, (user_files), array_string, tmp11);
    println(c2s("---------------"));
}
array_string Z_duqu_z(Z* self, string dir) { //fang
    array_string res = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    if (!os__file_exists(dir)) {
        z_panic(_STR("目录文件 %.*s 不存在", dir.len, dir.str));
    }
    else if (!os__dir_exists(dir)) {
        z_panic(_STR("目录 %.*s 不存在", dir.len, dir.str));
    }
    
    array_string files = os__ls(dir);
    if (self->pref->is_verbose) {
        println(_STR("读取 (\"%.*s\")", dir.len, dir.str));
    }
    
     array_string_sort(&files);
    array_string _arr_12 = files;
    for (int _i_13 = 0; _i_13 < _arr_12.len; _i_13 ++) {
        string file = (((string*) _arr_12.data)[_i_13]);
        if (! string_ends_with(file, c2s(".z")) && ! string_ends_with(file, c2s(".zh"))) {
            continue;
        }
        else if ( string_ends_with(file, c2s("_win.z")) && self->os != OS_windows) {
            continue;
        }
        else if ( string_ends_with(file, c2s("_lin.z")) && self->os != OS_linux) {
            continue;
        }
        else if ( string_ends_with(file, c2s("_mac.z")) && self->os != OS_mac) {
            continue;
        }
        else if ( string_ends_with(file, c2s("_test.z"))) {
            continue;
        }
        
        _PUSH(&res, (_STR("%.*s/%.*s", dir.len, dir.str, file.len, file.str)), string, tmp14);
    }
    return res;
}
string Z_mokuai_chuli(Z* self, string pkg) { //fang
    if ( string_contains(pkg, c2s("."))) {
        return  string_replace(pkg, c2s("."), c2s("/"));
    }
    
    return pkg;
}
string Parser_typ_to_fmt(Parser* self, string typ, int level) { //fang
    Type* t =  Table_find_type(self->table, typ);
    if (t->is_enum) {
        return c2s("%d");
    }
    
    /*switch*/
    if (string_eq(typ, c2s("string"))) {/* case 0*/
        return c2s("%.*s");
    }
    else if (string_eq(typ, c2s("ustring"))) {/* case 1*/
        return c2s("%.*s");
    }
    else if (string_eq(typ, c2s("int")) ||  string_eq(typ, c2s("char")) ||  string_eq(typ, c2s("byte")) ||  string_eq(typ, c2s("bool")) ||  string_eq(typ, c2s("u32")) ||  string_eq(typ, c2s("i32")) ||  string_eq(typ, c2s("i16")) ||  string_eq(typ, c2s("u16")) ||  string_eq(typ, c2s("i8")) ||  string_eq(typ, c2s("u8"))) {/* case 2*/
        return c2s("%d");
    }
    else if (string_eq(typ, c2s("f64")) ||  string_eq(typ, c2s("f32"))) {/* case 3*/
        return c2s("%f");
    }
    else if (string_eq(typ, c2s("i64")) ||  string_eq(typ, c2s("u64"))) {/* case 4*/
        return c2s("%lld");
    }
    else if (string_eq(typ, c2s("char*")) ||  string_eq(typ, c2s("byte*"))) {/* case 5*/
        return c2s("%s");
    }
    else if (string_eq(typ, c2s("void"))) {/* case 6*/
         Parser_error(self, c2s("void 不能插入值"));
    }
    else  { //else 7
        if ( string_ends_with(typ, c2s("*"))) {
            return c2s("%p");
        }
        
    }
    if (string_ne(t->parent, c2s("")) && level == 0) {
        return  Parser_typ_to_fmt(self, t->parent, level + 1);
    }
    
    return c2s("");
}
string format_str(string str) { //fang
    str =  string_replace(str, c2s("\""), c2s("\\\""));
    #ifdef _WIN32
        str =  string_replace(str, c2s("\r\n"), c2s("\\n"));
    #endif
    str =  string_replace(str, c2s("\n"), c2s("\\n"));
    return str;
}
void Parser_fmt_0(Parser* self) { //fang
    self->scanner->fmt_indent = 0;
    self->genc->fmt_indent = strings__repeat2(c2s("    "), self->scanner->fmt_indent);
}
void Parser_fmt_inc(Parser* self) { //fang
    self->scanner->fmt_indent++;
    self->genc->fmt_indent = strings__repeat2(c2s("    "), self->scanner->fmt_indent);
}
void Parser_fmt_dec(Parser* self) { //fang
    self->scanner->fmt_indent--;
    self->genc->fmt_indent = strings__repeat2(c2s("    "), self->scanner->fmt_indent);
}
string Scanner_get_var_name(Scanner* self, int pos) { //fang
    int pos_start = pos;
    for (;pos_start >= 0 && string_at(self->text, pos_start) != '\n' && string_at(self->text, pos_start) != ';';pos_start--) { 
    }
    pos_start++;
    return  string_substr(self->text, pos_start, pos);
}
void Scanner_cao_change(Scanner* self, string operator) { //fang
    self->text = string_add(string_add(string_add(string_add(string_add(string_add( string_substr(self->text, 0, self->pos - operator.len), c2s(" = ")),  Scanner_get_var_name(self, self->pos - operator.len)), c2s(" ")), operator), c2s(" ")),  string_substr(self->text, self->pos + 1, self->text.len));
}
int Scanner_get_opening_bracket(Scanner* self) { //fang
    int pos = self->pos;
    int parentheses = 0;
    bool inside_string = 0;
    while (pos > 0 && string_at(self->text, pos) != '\n') {
        if (string_at(self->text, pos) == ')' && !inside_string) {
            parentheses++;
        }
        
        if (string_at(self->text, pos) == '(' && !inside_string) {
            parentheses--;
        }
        
        if (string_at(self->text, pos) == '\'' && string_at(self->text, pos - 1) != '\\' && string_at(self->text, pos - 1) != '\`') {
            inside_string = !inside_string;
        }
        
        if (parentheses == 0) {
            break;
        }
        
        pos--;
    }
    return pos;
}
void Scanner_create_type_string(Scanner* self, Type T, string name) { //fang
    int line = self->line_nr;
    bool inside_string = self->inside_string;
    string newtext = c2s("\'{ ");
    int start =  Scanner_get_opening_bracket(self) + 1;
    int end = self->pos;
    array_Var tmp1 = T.attributes ;
    for (int i = 0; i < tmp1.len; i ++) {
        Var attr = ((Var*) tmp1.data)[i];
        if (i != 0) {
            newtext = string_add(newtext, c2s(", "));
        }
        
        newtext = string_add(newtext, string_add(_STR("%.*s: ", attr.name.len, attr.name.str), _STR("$%.*s.%.*s", name.len, name.str, attr.name.len, attr.name.str)));
    }
    newtext = string_add(newtext, c2s(" }\'"));
    self->text = string_add(string_add( string_substr(self->text, 0, start), newtext),  string_substr(self->text, end, self->text.len));
    self->pos = start - 2;
    self->line_nr = line;
    self->inside_string = inside_string;
}
void Parser_create_type_string(Parser* self, Type T, string name) { //fang
     Scanner_create_type_string(self->scanner, T, name);
}
bool Parser_is_sig(Parser* self) { //fang
    return (self->pref->build_mode == BuildMode_default_mode || self->pref->build_mode == BuildMode_build) && ( string_contains(self->file_path, c2s("mokuai")));
}
void Parser_fn_decl(Parser* self) { //fang
     Parser_fmt_0(self);
    self->z_log = c2s("----->>-----\n");
     Parser_log2(self, c2s("cyan"), c2s("fn "));
    bool is_live =  array_string_contains(self->attrs, c2s("live")) && !self->pref->is_so;
    if (is_live && !self->pref->is_live) {
         Parser_error(self, c2s("run \"z -live program.z\" 需要使用 [live] 函数"));
    }
    
     Parser_next(self);
    bool _pri = ( array_string_contains(self->attrs, c2s("private")));
    Fn* f = new_Fn(self->mod, _pri);
    self->returns = 0;
    string _class = c2s("");
    if (self->tok == Token_lpar) {
         Parser_next(self);
        _class =  Parser_get_type(self);
        self->z_log = string_add(string_add(string_add(self->z_log, c2s("(")), _class), c2s(" "));
        if ( string_contains(_class, c2s("*"))) {
            _class =  string_replace(_class, c2s("*"), c2s(""));
            _class = string_add(_class, c2s("*"));
        }
        
        Type* T =  Table_find_type(self->table, _class);
        if (T->is_interface) {
             Parser_error(self, _STR("%.*s 是接口|interface)", _class.len, _class.str));
        }
        
        if (self->run != Pass_decl && !self->neibu_bao && string_ne(T->mod, self->mod)) {
             Parser_error(self, _STR("无法在非本地模块(%.*s)为类(%.*s)定义方法,当前模块(%.*s)", T->mod.len, T->mod.str, _class.len, _class.str, self->mod.len, self->mod.str));
        }
        
        f->_class = _class;
        bool is_mul = self->tok == Token_mul;
        bool is_amp = self->tok == Token_amp;
        if (is_mul || is_amp) {
             Parser_next(self);
            _class = string_add(_class, c2s("*"));
        }
        
        l2:
        string _self = (self->tok == Token_rpar)?(c2s("self")):( Parser_check_name(self));
         Parser_check(self, Token_rpar);
        Var this = (/*&C.*/Var){.name = _self, .type = _class, .is_self = 1, .is_arg = 1, .ref = is_amp, .ptr = is_mul, .line_nr = self->scanner->line_nr, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .parent = c2s(""), .value = 0, .counts = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
        f->is_method = 1;
        _PUSH(&f->args, (this), Var, tmp1);
         Fn_register_var(f, this);
        self->z_log = string_add(string_add(self->z_log, _self), c2s(") "));
    }
    
    l1:
    if (self->tok == Token_lt) {
         Parser_next(self);
        string ty =  Parser_check_name(self);
        if (string_ne(ty, c2s("T"))) {
             Parser_error(self, c2s("伐型只支持T"));
        }
        
        f->name = self->gener;
         Parser_check(self, Token_gt);
    }
    
    if (self->tok == Token_plus || self->tok == Token_minus || self->tok == Token_mul) {
        f->name = string_add(f->name,  Token_str(self->tok));
         Parser_next(self);
    }
    else {
        f->name = string_add(f->name,  Parser_check_name(self));
    }
    
    if (string_eq(f->name, c2s("new"))) {
        f->name = string_add(c2s("new_"), self->z_type);
    }
    
    self->z_log = string_add(string_add(self->z_log, f->name), c2s(" ( "));
    bool is_c = string_eq(f->name, c2s("C")) && self->tok == Token_dot;
    if (is_c) {
         Parser_check(self, Token_dot);
        f->name =  Parser_check_name(self);
        f->is_c = 1;
    }
    else if (! string_contains(self->file_path, c2s("view.z"))) {
        if (self->pref->is_play && contains_capital(f->name)) {
             Parser_error(self, c2s("函数名不能用大写"));
        }
        
        if ( string_contains(f->name, c2s("__"))) {
             string_replace(f->name, c2s("__"), c2s("_"));
            println(_STR("函数 %.*s 名用单下划线", f->name.len, f->name.str));
        }
        
    }
    
    if (!is_c && !self->neibu_bao && string_ne(self->mod, c2s("main")) && !f->is_method) {
        f->name = _STR("%.*s__%.*s", self->mod.len, self->mod.str, f->name.len, f->name.str);
    }
    
    if ( Parser_first_run(self) &&  Table_known_fn(self->table, f->name) && !f->is_method) {
        Fn existing_fn =  Table_find_fn(self->table, f->name);
        if (!existing_fn.is_decl) {
             Parser_error(self, _STR("%.*s 以声明", f->name.len, f->name.str));
        }
        
    }
    
    self->z_fn_name = f->name;
     Parser_fn_args(self, f);
    self->z_log = string_add(self->z_log, c2s("<return>"));
    if (self->tok == Token_not) {
         Parser_next(self);
        f->returns_error = 1;
    }
    
    string typ = c2s("void");
    if (_IN(Token, self->tok, new_array_from_c_array(5, 5, sizeof(Token), (Token[]) { Token_NAME, Token_mul, Token_amp, Token_lsbr, Token_question }))) {
        typ =  Parser_get_type(self);
    }
    
    if ( string_starts_with(typ, c2s("Option_"))) {
        _PUSH(&self->genc->typedefs, (_STR("typedef Option %.*s;", typ.len, typ.str)), string, tmp2);
    }
    
    if (self->tok == Token_mul) {
        typ = string_add(typ, c2s("*"));
         Parser_next(self);
    }
    
    f->ret_type = typ;
    if (f->is_c) {
        self->cur_fn = f;
         Table_register_fn(self->table, *f);
        return;
    }
    
    bool is_sig =  Parser_is_sig(self);
    bool is_fn_header = !is_c && !is_sig && (self->pref->translated || self->pref->is_test) && self->tok != Token_lcbr;
    if (is_fn_header) {
        f->is_decl = 1;
    }
    
    string str_fn_name =  Table_gen_c_fn_name(self->table, f);
    string str_fn_args =  Fn_str_args(f, self->table);
    if (string_eq(f->name, c2s("main")) && !f->is_method) {
        typ = c2s("int");
        str_fn_args = c2s("int argc, char** argv");
    }
    
    self->cur_fn = f;
    if (f->is_method) {
        Type* _type =  Table_find_type(self->table, _class);
        if (self->run == Pass_decl && string_eq(_type->name, c2s(""))) {
             Table_register_type2(self->table, (/*&C.*/Type){.name =  string_replace(_class, c2s("*"), c2s("")), .mod = self->mod, .is_JiMing = 1, .orig_name = c2s(""), .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .parent = c2s(""), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), });
        }
        
         Type_add_method(_type, *f);
    }
    else {
         Table_register_fn(self->table, *f);
    }
    
    bool skip_main_in_test = string_eq(f->name, c2s("main")) && self->pref->is_test;
    if (is_sig ||  Parser_first_run(self) || is_live || is_fn_header || skip_main_in_test) {
        if (is_live &&  Parser_first_run(self) && string_eq(self->mod, c2s("main"))) {
            _PUSH(&self->genc->so_fns, (str_fn_name), string, tmp3);
            str_fn_name = _STR("(* %.*s )", str_fn_name.len, str_fn_name.str);
        }
        
        string fn_decl = _STR("%.*s %.*s(%.*s)", typ.len, typ.str, str_fn_name.len, str_fn_name.str, str_fn_args.len, str_fn_args.str);
        if (self->pref->obfuscate) {
            fn_decl = string_add(fn_decl, _STR("; // %.*s", f->name.len, f->name.str));
        }
        
        if (!is_c && string_ne(f->name, c2s("main")) &&  Parser_first_run(self)) {
            if (string_eq(f->name, c2s("darwin__nsstring")) && self->pref->build_mode == BuildMode_default_mode) {
                return;
            }
            
            _PUSH(&self->genc->fns, (string_add(fn_decl, c2s(";/*decl*/"))), string, tmp4);
        }
        
        if (!is_sig && !is_fn_header) {
            self->z_log = string_add(self->z_log, c2s("-- 跳过主体 --"));
            int i = 0;
            while (1) {
                if (string_ne(self->z_type, c2s("")) || 1) {
                    if (self->tok == Token_lcbr) {
                        i++;
                    }
                    
                    if (self->tok == Token_rcbr) {
                        i--;
                    }
                    
                    if (i == 0) {
                         Parser_check(self, Token_rcbr);
                        break;
                    }
                    
                    if (self->tok == Token_eof && i != 0) {
                         Parser_error(self, _STR("函数 %.*s 没有结束", f->name.len, f->name.str));
                    }
                    
                     Parser_next(self);
                    continue;
                }
                else if ( Token_is_decl(self->tok) && !(self->prev_tok == Token_dot && self->tok == Token_key_type)) {
                    break;
                }
                
            }
        }
        
        return;
    }
    
    if (is_fn_header) {
         Parser_genln(self, _STR("%.*s %.*s(%.*s); //header", typ.len, typ.str, str_fn_name.len, str_fn_name.str, str_fn_args.len, str_fn_args.str));
    }
    
    if (is_c || is_sig || is_fn_header) {
        return;
    }
    
    if (!is_c && !is_live && !is_sig && !is_fn_header && !skip_main_in_test) {
        if (self->pref->obfuscate) {
             Parser_genln(self, _STR("; // %.*s", f->name.len, f->name.str));
        }
        
         Parser_genln(self, _STR("%.*s %.*s(%.*s) { //fn", typ.len, typ.str, str_fn_name.len, str_fn_name.str, str_fn_args.len, str_fn_args.str));
    }
    
    if (string_eq(f->name, c2s("main")) || string_eq(f->name, c2s("WinMain"))) {
         Parser_genln(self, c2s("init_consts();"));
        if ( array_string_contains(self->table->imports, c2s("os"))) {
            if (string_eq(f->name, c2s("main"))) {
                 Parser_genln(self, c2s("os__args = os__init_os_args(argc, argv);"));
            }
            else if (string_eq(f->name, c2s("WinMain"))) {
                 Parser_genln(self, c2s("os__args = os__parse_windows_cmd_line(pCmdLine);"));
            }
            
        }
        
        if (self->pref->is_live) {
            string file_base =  string_replace(self->file_path, c2s(".z"), c2s(""));
            string so_name = string_add(file_base, c2s(".so"));
             Parser_genln(self, _STR(" \nload_so(\"%.*s\"); \npthread_t _thread_so;\npthread_create(&_thread_so , NULL, &reload_so, NULL); ", so_name.len, so_name.str));
        }
        
    }
    
     Parser_check(self, Token_lcbr);
    self->z_log = string_add(self->z_log, c2s("{\n"));
    i64 _prof_start = 0;
    if ( array_string_contains(self->attrs, c2s("byys"))) {
        _prof_start = time__ticks();
    }
    
     Parser_statements_no_curly_end(self);
    if ( array_string_contains(self->attrs, c2s("byys"))) {
        i64 _prof_end = time__ticks();
        i64 _prof = _prof_end - _prof_start;
        println(_STR("[%.*s:%.*s()  %lldms]", f->_class.len, f->_class.str, f->name.len, f->name.str, _prof));
    }
    
    if (string_ne(typ, c2s("void")) && !self->returns && string_ne(f->name, c2s("main")) && string_ne(f->name, c2s("WinMain"))) {
         Parser_error(self, _STR("%.*s 没有返回 \"%.*s\"", f->name.len, f->name.str, typ.len, typ.str));
    }
    
    if (string_ne(self->mod, c2s("main"))) {
         Parser_genln(self, c2s("}"));
        return;
    }
    
     Parser_check_unused_variables(self);
    self->cur_fn = EmptyFn;
     Parser_genln(self, c2s("}"));
}
void Parser_fn_args(Parser* self, Fn* f) { //fang
     Parser_check(self, Token_lpar);
    if (f->is_interface) {
        Var int_arg = (/*&C.*/Var){.type = f->_class, .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
        _PUSH(&f->args, (int_arg), Var, tmp5);
    }
    
    bool only_types = ( Parser_peek(self).tok == Token_comma &&  Table_known_type(self->table, self->lit)) ||  Parser_peek(self).tok == Token_rpar;
    if (only_types) {
        while (self->tok != Token_rpar) {
            string C_typ =  Parser_get_type(self);
            if (self->tok == Token_mul) {
                C_typ = string_add(C_typ, c2s("*"));
                 Parser_next(self);
            }
            
            if (self->tok == Token_comma) {
                 Parser_next(self);
            }
            
        }
    }
    
    while (self->tok != Token_rpar) {
        string typ2 =  Parser_get_type(self);
        if (self->tok == Token_amp) {
            println(_STR("函数参数&, %.*s", f->name.len, f->name.str));
        }
        
        bool is_mul = self->tok == Token_mul;
        if (is_mul) {
            typ2 = string_add(typ2, c2s("*"));
             Parser_next(self);
        }
        
        if (self->run != Pass_decl && ! Table_known_type(self->table, typ2)) {
             Parser_error(self, _STR("函数参数未知类型 %.*s", typ2.len, typ2.str));
        }
        
        array_string names = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
        while (self->tok == Token_NAME &&  Parser_peek(self).tok == Token_comma) {
            self->z_log = string_add(self->z_log, _STR("%.*s , ", self->lit.len, self->lit.str));
            _PUSH(&names, ( Parser_check_name(self)), string, tmp6);
            if (self->tok == Token_assign) {
            }
            
             Parser_check(self, Token_comma);
        }
        if (self->tok == Token_NAME &&  Parser_peek(self).tok == Token_rpar) {
            self->z_log = string_add(self->z_log, _STR("%.*s ) ", self->lit.len, self->lit.str));
            _PUSH(&names, ( Parser_check_name(self)), string, tmp7);
        }
        
        array_string _arr_8 = names;
        for (int _i_9 = 0; _i_9 < _arr_8.len; _i_9 ++) {
            string n = (((string*) _arr_8.data)[_i_9]);
            Var v = (/*&C.*/Var){.name = n, .type = typ2, .is_arg = 1, .ptr = is_mul, .line_nr = self->scanner->line_nr, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .parent = c2s(""), .value = 0, .counts = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
             Fn_register_var(f, v);
            _PUSH(&f->args, (v), Var, tmp10);
        }
        if (self->tok == Token_dotdot) {
            _PUSH(&f->args, ((/*&C.*/Var){.name = c2s(".."), .type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")}), Var, tmp11);
             Parser_next(self);
        }
        
    }
     Parser_check(self, Token_rpar);
}
void Parser_check_unused_variables(Parser* self) { //fang
    array_Var _arr_12 = self->cur_fn->local_vars;
    for (int _i_13 = 0; _i_13 < _arr_12.len; _i_13 ++) {
        Var v = (((Var*) _arr_12.data)[_i_13]);
        if (string_eq(v.name, c2s(""))) {
            break;
        }
        
        if (!v.is_used && !self->pref->is_repl && !v.is_arg && !self->pref->translated && string_ne(v.name, c2s("_"))) {
            self->scanner->line_nr = v.line_nr - 1;
            println(_STR("函数 %.*s 变量 %.*s , 未使用", v.z_cur_fn.len, v.z_cur_fn.str, v.name.len, v.name.str));
        }
        
    }
}
string Fn_typ_str(Fn self) { //fang
    strings__Builder sb = strings__new_builder(50);
     strings__Builder_write(&sb, c2s("fn ("));
    array_Var tmp14 = self.args ;
    for (int i = 0; i < tmp14.len; i ++) {
        Var arg = ((Var*) tmp14.data)[i];
         strings__Builder_write(&sb, arg.type);
        if (i < self.args.len - 1) {
             strings__Builder_write(&sb, c2s(","));
        }
        
    }
     strings__Builder_write(&sb, c2s(")"));
    if (string_ne(self.ret_type, c2s("void"))) {
         strings__Builder_write(&sb, _STR(" %.*s", self.ret_type.len, self.ret_type.str));
    }
    
    return  strings__Builder_str(sb);
}
string Fn_str_args(Fn* self, Table* table) { //fang
    string s = c2s("");
    array_Var tmp15 = self->args ;
    for (int i = 0; i < tmp15.len; i ++) {
        Var arg = ((Var*) tmp15.data)[i];
        if ( Table_is_interface(table, arg.type)) {
            s = string_add(s, _STR(" void* %.*s", arg.name.len, arg.name.str));
            Type* interface_type =  Table_find_type(table, arg.type);
            array_Fn _arr_16 = interface_type->methods;
            for (int _i_17 = 0; _i_17 < _arr_16.len; _i_17 ++) {
                Fn method = (((Fn*) _arr_16.data)[_i_17]);
                s = string_add(s, _STR(", %.*s (*%.*s_%.*s)(void*) ", method.ret_type.len, method.ret_type.str, arg.type.len, arg.type.str, method.name.len, method.name.str));
            }
        }
        else if (string_eq(arg.name, c2s(".."))) {
            s = string_add(s, c2s("..."));
        }
        else {
            string art = arg.type;
            if (arg.is_self) {
                s = string_add(s,  Table_gen_c_type_name_pair(table, art, c2s("self")));
            }
            else {
                s = string_add(s,  Table_gen_c_type_name_pair(table, art, arg.name));
            }
            
        }
        
        if (i < self->args.len - 1) {
            s = string_add(s, c2s(", "));
        }
        
    }
    return s;
}
void Parser_fn_call(Parser* self, Fn f, int method_ph, string receiver_var, string got_type) { //fang
    self->z_log = string_add(self->z_log, c2s("<call>"));
    if (f.is_private && string_ne(f.pkg, self->mod) && !f.is_c && !f.is_interface) {
        println(_STR("不能连接私有函数 %.*s:%.*s()", f._class.len, f._class.str, f.name.len, f.name.str));
    }
    
    self->calling_c = f.is_c;
    string gen_c_name =  Table_gen_c_fn_name(self->table, &f);
    if (!f.is_method || (f.is_method && string_eq(f.name, f.orig_class)) || (f.is_method && string_eq(f.name, c2s("new")))) {
         Parser_gen(self, gen_c_name);
         Parser_gen(self, c2s("("));
    }
    else {
        string method_call = _STR("%.*s(", gen_c_name.len, gen_c_name.str);
        Var this = *(Var*)  array_first(f.args);
        if (!this.ptr &&  string_contains(got_type, c2s("*"))) {
            method_call = string_add(method_call, c2s("*"));
        }
        
        if (this.ref || (this.ptr && ! string_contains(got_type, c2s("*")))) {
            method_call = string_add(method_call, c2s("&"));
        }
        
        string cast = c2s("");
        if (string_eq(f.ret_type, c2s("void*"))) {
            cast =  string_all_after(got_type, c2s("_"));
            cast = _STR("*(%.*s*) ", cast.len, cast.str);
        }
        
         GenC_cha_ru(self->genc, method_ph, _STR("%.*s %.*s", cast.len, cast.str, method_call.len, method_call.str));
    }
    
     Parser_next(self);
     Parser_fn_call_args(self, &f);
     Parser_gen(self, c2s(")"));
    self->calling_c = 0;
}
Fn* Parser_fn_call_args(Parser* self, Fn* f) { //fang
    self->z_log = string_add(self->z_log, c2s("(args)"));
     Parser_check(self, Token_lpar);
    if (f->is_c) {
        while (self->tok != Token_rpar) {
             Parser_bool_expression(self);
            if (self->tok == Token_comma) {
                 Parser_gen(self, c2s(", "));
                 Parser_check(self, Token_comma);
            }
            
        }
         Parser_check(self, Token_rpar);
        return f;
    }
    
    array_Var tmp1 = f->args ;
    for (int i = 0; i < tmp1.len; i ++) {
        Var arg = ((Var*) tmp1.data)[i];
        if (i == 0 && f->is_method && string_ne(f->name, c2s("new"))) {
            if (f->args.len > 1) {
                 Parser_gen(self, c2s(", "));
            }
            
            continue;
        }
        
        if (i == f->args.len - 1 && string_eq(arg.name, c2s(".."))) {
            break;
        }
        
        int ph =  GenC_biaoqian(self->genc);
        if (self->tok == Token_rpar) {
            string str_fn_args =  Fn_str_args(f, self->table);
             Parser_error(self, _STR("没有足够参数 in call to `%.*s (%.*s)`", f->name.len, f->name.str, str_fn_args.len, str_fn_args.str));
        }
        
        self->expected_type = arg.type;
        string typ =  Parser_bool_expression(self);
        if (i == 0 && string_eq(f->name, c2s("println")) && string_ne(typ, c2s("string")) && string_ne(typ, c2s("void"))) {
            Type* T =  Table_find_type(self->table, typ);
            string fmt =  Parser_typ_to_fmt(self, typ, 0);
            if (string_ne(fmt, c2s(""))) {
                self->genc->cur_line =  string_replace(self->genc->cur_line, c2s("println ("), string_add(string_add(c2s("printf (\""), fmt), c2s("\\n\", ")));
                continue;
            }
            
            if ( string_ends_with(typ, c2s("*"))) {
                 GenC_cha_ru(self->genc, ph, c2s("ptr_str("));
                 Parser_gen(self, c2s(")"));
                continue;
            }
            
            if (! Type_has_method(T, c2s("str"))) {
                string error_msg = (_STR("打印参数类型 %.*s 必须含方法 str()", typ.len, typ.str));
                if (T->attributes.len > 0) {
                    int index = self->genc->cur_line.len - 1;
                    while (index > 0 && string_at(self->genc->cur_line, index) != ' ') {
                        index--;
                    }
                    string name =  string_right(self->genc->cur_line, index + 1);
                    if (string_eq(name, c2s("}"))) {
                         Parser_error(self, error_msg);
                    }
                    
                    self->genc->cur_line =  string_left(self->genc->cur_line, index);
                     Parser_create_type_string(self, *T, name);
                     string_replace(self->genc->cur_line, typ, c2s(""));
                     Parser_next(self);
                    return  Parser_fn_call_args(self, f);
                }
                
                 Parser_error(self, error_msg);
            }
            
             GenC_cha_ru(self->genc, ph, _STR("%.*s_str(", typ.len, typ.str));
             Parser_gen(self, c2s(")"));
            continue;
        }
        
        string got = typ;
        string expected = arg.type;
        if (! Parser_check_types(self, got, expected, 0)) {
            string err = _STR("Fn \"%.*s\" %d 参数错误, ", f->name.len, f->name.str, i + 1);
            err = string_add(err, _STR("预期\"%.*s\" (%.*s)  得到 \"%.*s\"", arg.type.len, arg.type.str, arg.name.len, arg.name.str, typ.len, typ.str));
             Parser_error(self, err);
        }
        
        bool is_interface =  Table_is_interface(self->table, arg.type);
        if (is_interface) {
            if (! string_contains(got, c2s("*"))) {
                 GenC_cha_ru(self->genc, ph, c2s("&"));
            }
            
            Type* interface_type =  Table_find_type(self->table, arg.type);
            array_Fn _arr_2 = interface_type->methods;
            for (int _i_3 = 0; _i_3 < _arr_2.len; _i_3 ++) {
                Fn method = (((Fn*) _arr_2.data)[_i_3]);
                 Parser_gen(self, _STR(", %.*s_%.*s ", typ.len, typ.str, method.name.len, method.name.str));
            }
        }
        else {
            if (! string_contains(expected, c2s("*")) &&  string_contains(got, c2s("*"))) {
                 GenC_cha_ru(self->genc, ph, c2s("*"));
            }
            
            if ( string_contains(expected, c2s("*")) && ! string_contains(got, c2s("*"))) {
                if (!(string_eq(expected, c2s("void*")) && string_eq(got, c2s("int"))) && !((string_eq(expected, c2s("char*")) || string_eq(expected, c2s("byte*"))) && (string_eq(got, c2s("CArray_char")) || string_eq(got, c2s("CArray_byte")))) && !((string_eq(expected, c2s("char*")) || string_eq(expected, c2s("byte*"))) && string_eq(got, c2s("string")))) {
                     GenC_cha_ru(self->genc, ph, c2s("&"));
                }
                
            }
            
        }
        
        if (i < f->args.len - 1) {
            bool is_var_arg = i == f->args.len - 2 && string_eq(( *(Var*) array_get(f->args,i + 1) ).name, c2s(".."));
            if (self->tok != Token_comma && !is_var_arg) {
                 Parser_error(self, _STR("%.*s参数长 %d, 最后参数%d= %.*s", f->name.len, f->name.str, f->args.len, i, arg.name.len, arg.name.str));
            }
            
            if (self->tok == Token_comma) {
                 Parser_next(self);
                 Parser_gen(self, c2s(", "));
            }
            
        }
        
    }
    if (f->args.len > 0) {
        Var last_arg = *(Var*)  array_last(f->args);
        if (string_eq(last_arg.name, c2s(".."))) {
            while (self->tok != Token_rpar) {
                if (self->tok == Token_comma) {
                     Parser_gen(self, c2s(", "));
                     Parser_check(self, Token_comma);
                }
                
                 Parser_bool_expression(self);
            }
        }
        
    }
    
    if (self->tok == Token_comma) {
         Parser_next(self);
    }
    
     Parser_check(self, Token_rpar);
}
void Parser_for_st(Parser* self) { //fang
    self->z_log = c2s("<for>");
     Parser_check(self, Token_key_for);
    if (self->tok == Token_key_var) {
         Parser_next(self);
    }
    
    self->for_expr_cnt++;
    Token next_tok =  Parser_peek(self).tok;
     Fn_open_scope(self->cur_fn);
    if (self->tok == Token_lcbr) {
         Parser_genln(self, c2s("while (1) {"));
    }
    else if (next_tok == Token_decl_assign || next_tok == Token_assign || self->tok == Token_semicolon) {
         Parser_gen(self, c2s("for ("));
        if (next_tok == Token_decl_assign || next_tok == Token_assign) {
             Parser_var_decl(self);
        }
        else if (self->tok != Token_semicolon) {
             Parser_statement(self, 0);
        }
        
         Parser_check(self, Token_semicolon);
         Parser_gen(self, c2s(";"));
        if (self->tok != Token_semicolon) {
             Parser_bool_expression(self);
        }
        
         Parser_check(self, Token_semicolon);
         Parser_gen(self, c2s(";"));
        if (self->tok != Token_lcbr) {
             Parser_statement(self, 0);
        }
        
         Parser_genln(self, c2s(") { "));
    }
    else if ( Parser_peek(self).tok == Token_comma) {
        string i =  Parser_check_name(self);
         Parser_check(self, Token_comma);
        string val =  Parser_check_name(self);
         Parser_check(self, Token_key_in);
        string tmp =  Parser_get_tmp(self);
         GenC_start_tmp(self->genc);
        string typ =  Parser_bool_expression(self);
        bool is_arr =  string_starts_with(typ, c2s("array_"));
        bool is_map =  string_starts_with(typ, c2s("map_"));
        bool is_str = string_eq(typ, c2s("string"));
        if (!is_arr && !is_str && !is_map) {
             Parser_error(self, _STR("for i,in 支持 [arr,str,map] \ \"%.*s\" ", typ.len, typ.str));
        }
        
        string expr =  GenC_end_tmp(self->genc);
         Parser_genln(self, _STR("%.*s %.*s = %.*s ;", typ.len, typ.str, tmp.len, tmp.str, expr.len, expr.str));
        int pad = (is_arr)?(6):(4);
        string var_typ =  string_right(typ, pad);
        Var val_var = (/*&C.*/Var){.name = val, .type = var_typ, .ptr =  string_contains(typ, c2s("*")), .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
         Parser_register_var(self, val_var);
        if (is_arr || is_str) {
            Var i_var = (/*&C.*/Var){.name = i, .type = c2s("int"), .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
             Parser_register_var(self, i_var);
             Parser_genln(self, _STR("for (int %.*s = 0; %.*s < %.*s.len; %.*s ++) {", i.len, i.str, i.len, i.str, tmp.len, tmp.str, i.len, i.str));
             Parser_genln(self, _STR("    %.*s %.*s = ((%.*s*) %.*s.data)[%.*s];", var_typ.len, var_typ.str, val.len, val.str, var_typ.len, var_typ.str, tmp.len, tmp.str, i.len, i.str));
        }
        else if (is_map) {
            Var i_var = (/*&C.*/Var){.name = i, .type = c2s("string"), .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
             Parser_register_var(self, i_var);
             Parser_genln(self, _STR("for (int l = 0; l < %.*s.entries.len; l++) {", tmp.len, tmp.str));
             Parser_genln(self, _STR("    Entry en = ((Entry*) %.*s.entries.data)[l];", tmp.len, tmp.str));
             Parser_genln(self, _STR("    string %.*s = en.key;", i.len, i.str));
            string def = default_type(var_typ);
             Parser_genln(self, _STR("    %.*s %.*s = %.*s; map_get(%.*s, %.*s, & %.*s);", var_typ.len, var_typ.str, val.len, val.str, def.len, def.str, tmp.len, tmp.str, i.len, i.str, val.len, val.str));
        }
        
    }
    else if ( Parser_peek(self).tok == Token_key_in) {
        string val =  Parser_check_name(self);
         Parser_check(self, Token_key_in);
        string _arr_ =  Parser_get_add_digit(self, c2s("_arr_"));
         GenC_start_tmp(self->genc);
        string typ =  Parser_bool_expression(self);
        string _arr =  GenC_end_tmp(self->genc);
        bool is_range = self->tok == Token_dotdot;
        string range_end = c2s("");
        if (is_range) {
             Parser_check_types(self, typ, c2s("int"), 1);
             Parser_check(self, Token_dotdot);
             GenC_start_tmp(self->genc);
             Parser_check_types(self,  Parser_bool_expression(self), c2s("int"), 1);
            range_end =  GenC_end_tmp(self->genc);
        }
        
        bool is_arr =  string_contains(typ, c2s("array"));
        bool is_str = string_eq(typ, c2s("string"));
        if (!is_arr && !is_str && !is_range) {
             Parser_error(self, _STR("for in 支持 [arr,str,map] \ \"%.*s\" ", typ.len, typ.str));
        }
        
        string dot = c2s(".");
        if ( string_contains(typ, c2s("*"))) {
        }
        
         Parser_genln(self, _STR("%.*s %.*s = %.*s;", typ.len, typ.str, _arr_.len, _arr_.str, _arr.len, _arr.str));
        string var_type = c2s("");
        if (is_arr) {
            typ =  string_replace(typ, c2s("*"), c2s(""));
            var_type =  string_right(typ, 6);
        }
        else if (is_str) {
            var_type = c2s("char");
        }
        else if (is_range) {
            var_type = c2s("int");
        }
        
        Var val_var = (/*&C.*/Var){.name = val, .type = var_type, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
         Parser_register_var(self, val_var);
        string i =  Parser_get_add_digit(self, c2s("_i_"));
        if (is_range) {
             Parser_genln(self, _STR("for (int %.*s = %.*s; %.*s < %.*s; %.*s++) {", i.len, i.str, _arr_.len, _arr_.str, i.len, i.str, range_end.len, range_end.str, i.len, i.str));
        }
        else {
             Parser_genln(self, _STR("for (int %.*s = 0; %.*s < %.*s%.*slen; %.*s ++) {", i.len, i.str, i.len, i.str, _arr_.len, _arr_.str, dot.len, dot.str, i.len, i.str));
        }
        
        if (is_arr) {
             Parser_genln(self, _STR("    %.*s %.*s = (((%.*s*) %.*s%.*sdata)[%.*s]);", var_type.len, var_type.str, val.len, val.str, var_type.len, var_type.str, _arr_.len, _arr_.str, dot.len, dot.str, i.len, i.str));
        }
        else if (is_str) {
             Parser_genln(self, _STR("    %.*s %.*s = (((%.*s*) %.*s%.*sstr)[%.*s]);", var_type.len, var_type.str, val.len, val.str, var_type.len, var_type.str, _arr_.len, _arr_.str, dot.len, dot.str, i.len, i.str));
        }
        else if (is_range) {
             Parser_genln(self, _STR("    %.*s %.*s = %.*s;", var_type.len, var_type.str, val.len, val.str, i.len, i.str));
        }
        
    }
    else {
         Parser_gen(self, c2s("while ("));
         Parser_check_types(self,  Parser_bool_expression(self), c2s("bool"), 1);
         Parser_genln(self, c2s(") {"));
    }
    
     Parser_check(self, Token_lcbr);
     Parser_statements(self);
     Fn_close_scope(self->cur_fn);
    self->for_expr_cnt--;
}
string Parser_get_type(Parser* self) { //fang
    bool debug =  Parser_fileis(self, c2s("fn_test")) && 0;
    bool mul = 0;
    int muls_nr = 0;
    string typ = c2s("");
    if (!self->neibu_bao && string_eq(self->lit, c2s("map")) &&  Parser_peek(self).tok == Token_lsbr) {
         Parser_log2(self, c2s("cyan"), c2s("map_"));
         Parser_next(self);
         Parser_check(self, Token_lsbr);
        if (self->tok != Token_rsbr) {
            string key_type =  Parser_check_name(self);
            if (string_ne(key_type, c2s("string"))) {
                 Parser_error(self, c2s("maps[keys]必须是字符串"));
            }
            
        }
        
         Parser_check(self, Token_rsbr);
        string val_type =  Parser_check_name(self);
         Parser_log2(self, c2s("cyan"), _STR("%.*s ", val_type.len, val_type.str));
        typ = _STR("map_%.*s", val_type.len, val_type.str);
         Parser_register_map(self, typ);
        return typ;
    }
    
    bool is_question = self->tok == Token_question;
    if (is_question) {
         Parser_next(self);
    }
    
    if (self->tok == Token_lt) {
         Parser_next(self);
        string ty =  Parser_check_name(self);
        if (string_ne(ty, c2s("T"))) {
            println(c2s("伐型只支持T"));
        }
        
        typ = self->gener;
        goto l2;
    }
    
    bool is_arr = 0;
    bool is_ar = 0;
    if (self->tok == Token_lsbr) {
        if ( Parser_peek(self).tok != Token_rsbr &&  Parser_peek(self).tok != Token_NUMBER) {
             Parser_next(self);
            self->z_log = string_add(self->z_log, c2s("[type] "));
            typ = string_add(typ, string_add(c2s("array_"), self->lit));
            is_arr = 1;
             Parser_next(self);
            if (self->tok != Token_rsbr) {
                 Parser_error(self, _STR("[%.*s 没有结束`]`", typ.len, typ.str));
            }
            
             Parser_register_array(self, typ);
            goto l2;
        }
        
        while (self->tok == Token_lsbr) {
            is_ar = 1;
             Parser_next(self);
            if (self->tok == Token_NUMBER) {
                self->z_log = string_add(self->z_log, c2s("[][] "));
                self->_arr_ss = string_add(self->_arr_ss, _STR("[%.*s]", self->lit.len, self->lit.str));
                typ = c2s("CArray_");
                 Parser_next(self);
            }
            else {
                is_arr = 1;
                typ = string_add(typ, c2s("array_"));
            }
            
             Parser_check(self, Token_rsbr);
        }
        typ = string_add(typ, self->lit);
        if (is_arr) {
             Parser_register_array(self, typ);
        }
        
        goto l2;
    }
    
    while (self->tok == Token_mul) {
        mul = 1;
        muls_nr++;
         Parser_check(self, Token_mul);
    }
    if (self->tok == Token_amp) {
        mul = 1;
        muls_nr++;
         Parser_check(self, Token_amp);
    }
    
    typ = string_add(typ, self->lit);
    l2:
    if (string_eq(self->lit, c2s("C")) &&  Parser_peek(self).tok == Token_dot) {
         Parser_next(self);
         Parser_check(self, Token_dot);
        typ = self->lit;
    }
    else {
        if ( Parser_peek(self).tok == Token_dot) {
             Parser_next(self);
             Parser_check(self, Token_dot);
            typ = string_add(typ, _STR("__%.*s", self->lit.len, self->lit.str));
        }
        
        Type* t =  Table_find_type(self->table, typ);
        if (string_eq(t->name, c2s("")) && !self->neibu_bao) {
            if (! string_contains(typ, c2s("array_")) && ! string_contains(typ, c2s("CArray_")) && ! string_contains(typ, c2s("__")) && ! string_starts_with(typ, c2s("[")) && string_ne(self->mod, c2s("main"))) {
                typ = _STR("%.*s__%.*s", self->mod.len, self->mod.str, typ.len, typ.str);
            }
            
            t =  Table_find_type(self->table, typ);
            if (string_eq(t->name, c2s("")) && !self->run == Pass_decl && ! string_starts_with(typ, c2s("[")) && ! string_starts_with(typ, c2s("CArray_"))) {
                println(c2s("全部类型:"));
                array_Type _arr_1 = self->table->types;
                for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
                    Type l = (((Type*) _arr_1.data)[_i_2]);
                    println(l.name);
                }
                 Parser_error(self, _STR("未知类型 %.*s", typ.len, typ.str));
            }
            
        }
        
    }
    
     Parser_next(self);
    if (mul) {
        typ = string_add(typ, strings__repeat('*', muls_nr));
    }
    
    l1:
    if (self->tok == Token_question || is_question) {
        typ = _STR("Option_%.*s", typ.len, typ.str);
         Table_register_parent_with_type(self->table, c2s("Option"), typ);
        if (self->tok == Token_question) {
             Parser_next(self);
        }
        
    }
    
    if ( string_last_index(typ, c2s("__")) >  string_index(typ, c2s("__"))) {
         Parser_error(self, _STR("2 __ in gettype(): typ=\"%.*s\"", typ.len, typ.str));
    }
    
    string re_typ = typ;
    if (self->tok == Token_mul) {
        re_typ = string_add(re_typ, c2s("*"));
    }
    
     Parser_log2(self, c2s("cyan"), _STR("%.*s ", re_typ.len, re_typ.str));
    return typ;
}
void Parser_go_stat(Parser* self) { //fang
     Parser_check(self, Token_key_go);
    if ( Parser_peek(self).tok == Token_dot) {
        string var_name = self->lit;
        Var v =  Fn_find_var(self->cur_fn, var_name);
         Fn_mark_var_used(self->cur_fn, v);
         Parser_next(self);
         Parser_check(self, Token_dot);
        Type* typ =  Table_find_type(self->table, v.type);
        Fn method =  Table_find_method(self->table, typ, self->lit);
         Parser_async_fn_call(self, method, 0, var_name, v.type);
    }
    else {
        Fn f =  Table_find_fn(self->table, self->lit);
        if (string_eq(f.name, c2s("println"))) {
             Parser_error(self, c2s("go 无法根 println 一起"));
        }
        
         Parser_async_fn_call(self, f, 0, c2s(""), c2s(""));
    }
    
}
bool contains_capital(string s) { //fang
    for (int i = 0;i < s.len;i++) { 
        char c = string_at(s, i);
        if (c >= 'A' && c <= 'Z') {
            return 1;
        }
        
    }
    return 0;
}
bool is_number_type(string typ) { //fang
    return  array_string_contains(NUMBER_TYPES, typ);
}
bool is_float_type(string typ) { //fang
    return  array_string_contains(FLOAT_TYPES, typ);
}
string default_type(string typ) { //fang
    if ( string_starts_with(typ, c2s("array_"))) {
        typ =  string_right(typ, 6);
        return _STR("new_array(0, 1, sizeof(%.*s))", typ.len, typ.str);
    }
    
    if ( string_starts_with(typ, c2s("CArray_"))) {
        return c2s("{}");
    }
    
    if ( string_starts_with(typ, c2s("map_"))) {
        typ =  string_right(typ, 4);
        return _STR("new_map(1, sizeof(%.*s), \"%.*s\")", typ.len, typ.str, typ.len, typ.str);
    }
    
    if ( string_ends_with(typ, c2s("*"))) {
        return c2s("0");
    }
    
    if ( string_contains(typ, c2s("__"))) {
        return c2s("{}");
    }
    
    /*switch*/
    if (string_eq(typ, c2s("bool"))) {/* case 0*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("int"))) {/* case 1*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("f32"))) {/* case 2*/
        return c2s("0.0");
    }
    else if (string_eq(typ, c2s("f64"))) {/* case 3*/
        return c2s("0.0");
    }
    else if (string_eq(typ, c2s("i8"))) {/* case 4*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("i16"))) {/* case 5*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("i32"))) {/* case 6*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("i64"))) {/* case 7*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("u8"))) {/* case 8*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("u16"))) {/* case 9*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("u32"))) {/* case 10*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("u64"))) {/* case 11*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("char"))) {/* case 12*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("byte"))) {/* case 13*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("char*"))) {/* case 14*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("string"))) {/* case 15*/
        return c2s("c2s(\"\")");
    }
    else if (string_eq(typ, c2s("rune"))) {/* case 16*/
        return c2s("0");
    }
    else if (string_eq(typ, c2s("void*"))) {/* case 17*/
        return c2s("0");
    }
    return c2s("{}");
}
int type_size1(string typ) { //fn
    println(c2s("######"));
    println(_STR(" 0101 %d ", zz->table->obfuscate));
    array_string type_arr = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    int zj = 0;
    println(c2s("1-"));
    return zj;
}
string os_name_to_ifdef(string name) { //fang
    /*switch*/
    if (string_eq(name, c2s("windows"))) {/* case 0*/
        return c2s("_WIN32");
    }
    else if (string_eq(name, c2s("mac"))) {/* case 1*/
        return c2s("__APPLE__");
    }
    else if (string_eq(name, c2s("linux"))) {/* case 2*/
        return c2s("__linux__");
    }
    z_panic(_STR("OS名\"%.*s\"错误", name.len, name.str));
    return c2s("");
}
void Parser_comp_time(Parser* self) { //fang
     Parser_check(self, Token_dollar);
    if (self->tok == Token_key_if) {
         Parser_next(self);
        bool not = self->tok == Token_not;
        if (not) {
             Parser_check(self, Token_not);
        }
        
        string name =  Parser_check_name(self);
        if (_IN(string, name, SupportedPlatforms)) {
            string ifdef_name = os_name_to_ifdef(name);
            if (not) {
                 Parser_genln(self, _STR("#ifndef %.*s", ifdef_name.len, ifdef_name.str));
            }
            else {
                 Parser_genln(self, _STR("#ifdef %.*s", ifdef_name.len, ifdef_name.str));
            }
            
             Parser_check(self, Token_lcbr);
             Parser_statements_no_curly_end(self);
            if (!(self->tok == Token_dollar &&  Parser_peek(self).tok == Token_key_else)) {
                 Parser_genln(self, c2s("#endif"));
            }
            
        }
        else {
            println(c2s("支持平台|Supported platforms:"));
            println(array_string_str(SupportedPlatforms));
             Parser_error(self, _STR("未知平台 %.*s", name.len, name.str));
        }
        
    }
    else if (self->tok == Token_key_else) {
         Parser_next(self);
         Parser_check(self, Token_lcbr);
         Parser_genln(self, c2s("#else"));
         Parser_statements_no_curly_end(self);
         Parser_genln(self, c2s("#endif"));
    }
    else if (self->tok == Token_key_for) {
         Parser_error(self, c2s("目前不支持\$for"));
    }
    else {
         Parser_error(self, c2s("坏的运行时表达式"));
    }
    
}
void Parser_chash(Parser* self) { //fang
    string hash =  string_trim_space(self->lit);
     Parser_next(self);
    if ( string_starts_with(hash, c2s("flag "))) {
        string flag =  string_right(hash, 5);
        if ( string_contains(hash, c2s("linux")) && self->os != OS_linux) {
            return;
        }
        else if ( string_contains(hash, c2s("darwin")) && self->os != OS_mac) {
            return;
        }
        else if ( string_contains(hash, c2s("windows")) && self->os != OS_windows) {
            return;
        }
        
        if ( string_contains(flag, c2s("linux")) ||  string_contains(flag, c2s("darwin")) ||  string_contains(flag, c2s("windows"))) {
            int pos =  string_index(flag, c2s(" "));
            flag =  string_right(flag, pos);
        }
        
        bool has_zroot =  string_contains(flag, c2s("@ZROOT"));
        flag =  string_replace( string_trim_space(flag), c2s("@ZROOT"), self->zroot);
        if ( array_string_contains(self->table->flags, flag)) {
            return;
        }
        
         Parser_log(self, _STR("添加标志 \"%.*s\"", flag.len, flag.str));
        if (has_zroot &&  string_contains(flag, c2s(".o"))) {
            build_thirdparty_obj_file(flag);
        }
        
        _PUSH(&self->table->flags, (flag), string, tmp1);
        return;
    }
    
    if ( string_starts_with(hash, c2s("include"))) {
        if (self->run == Pass_decl) {
            _PUSH(&self->genc->includes, (_STR("#%.*s", hash.len, hash.str)), string, tmp2);
            return;
        }
        
    }
    else if ( string_starts_with(hash, c2s("typedef"))) {
        if (self->run == Pass_decl) {
            _PUSH(&self->genc->typedefs, (_STR("%.*s", hash.len, hash.str)), string, tmp3);
        }
        
    }
    else if ( string_contains(hash, c2s("embed"))) {
        int pos =  string_index(hash, c2s("embed")) + 5;
        string file =  string_right(hash, pos);
        if (self->pref->build_mode != BuildMode_default_mode) {
             Parser_genln(self, _STR("#include %.*s", file.len, file.str));
        }
        
    }
    else if ( string_contains(hash, c2s("define"))) {
        _PUSH(&self->genc->includes, (_STR("#%.*s", hash.len, hash.str)), string, tmp4);
    }
    else {
         Parser_gen(self, hash);
    }
    
}
string Parser_if_st(Parser* self, bool is_expr, int elif_depth) { //fang
    self->z_log = c2s("<if>");
    if (is_expr) {
        self->inside_if_expr = 1;
         Parser_gen(self, c2s("("));
    }
    else {
         Parser_gen(self, c2s("if ("));
    }
    
     Parser_next(self);
     Parser_check_types(self,  Parser_bool_expression(self), c2s("bool"), 1);
    if (is_expr) {
         Parser_gen(self, c2s(")?("));
    }
    else {
         Parser_genln(self, c2s(") {"));
    }
    
     Parser_check(self, Token_lcbr);
    string typ = c2s("");
    if (self->tok == Token_key_if && self->inside_if_expr) {
        typ =  Parser_factor(self);
         Parser_next(self);
    }
    else {
        typ =  Parser_statements(self);
    }
    
    if (self->tok == Token_key_else) {
         Parser_next(self);
        if (self->tok == Token_key_if) {
            if (is_expr) {
                 Parser_gen(self, c2s("):("));
                return  Parser_if_st(self, is_expr, elif_depth + 1);
            }
            else {
                 Parser_gen(self, c2s("else "));
                return  Parser_if_st(self, is_expr, 0);
            }
            
        }
        
        if (is_expr) {
             Parser_gen(self, c2s("):("));
        }
        else {
             Parser_genln(self, c2s("else {"));
        }
        
         Parser_check(self, Token_lcbr);
        typ =  Parser_statements(self);
        if (is_expr) {
            self->inside_if_expr = 0;
             Parser_gen(self, strings__repeat(')', elif_depth + 1));
        }
        
        return typ;
    }
    
    self->inside_if_expr = 0;
    return typ;
}
void Parser_import_stat(Parser* self) { //fang
     Parser_check(self, Token_key_import);
    bool par = 0;
    if (self->tok == Token_lpar) {
         Parser_check(self, Token_lpar);
        par = 1;
    }
    
    l1:
    if (self->tok != Token_NAME) {
         Parser_error(self, c2s("导入格式错误"));
    }
    
    string pkg = self->lit;
    string mod_alias = pkg;
    int depth = 1;
     Parser_next(self);
    while (self->tok == Token_dot || self->tok == Token_div) {
         Parser_next(self);
        string submodule =  Parser_check_name(self);
        mod_alias = submodule;
        pkg = string_add(pkg, string_add(c2s("/"), submodule));
        depth++;
        if (depth > 4) {
             Parser_error(self, _STR("模块深度 %.*s > 4", pkg.len, pkg.str));
        }
        
    }
    if (self->tok == Token_key_as &&  Parser_peek(self).tok == Token_NAME) {
         Parser_check(self, Token_key_as);
        mod_alias =  Parser_check_name(self);
    }
    
     FileImportTable_register_alias(self->import_table, pkg, mod_alias);
     Table_add_import(self->table, pkg);
    if (self->tok == Token_comma) {
         Parser_next(self);
    }
    
    if (par && self->tok == Token_rpar) {
         Parser_check(self, Token_rpar);
        return;
    }
    else if (par) {
        goto l1;
    }
    
}
string Parser_index_expr(Parser* self, string typ, int fn_ph) { //fang
    self->z_log = string_add(self->z_log, c2s("<index>"));
    Var v = self->expr_var;
    bool is_map =  string_starts_with(typ, c2s("map_"));
    bool is_str = string_eq(typ, c2s("string"));
    bool is_arr2 =  string_starts_with(typ, c2s("array_"));
    bool is_arr = is_arr2 || string_eq(typ, c2s("array"));
    bool is_ptr =  string_contains(typ, c2s("*"));
    bool is_indexer = self->tok == Token_lsbr;
    bool close_bracket = 0;
    if (is_indexer) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s %.*s[ ", typ.len, typ.str, v.name.len, v.name.str));
        bool is_fixed_arr = string_eq(v.type1, c2s("CArray"));
        if (!is_str && !is_arr && !is_map && !is_ptr && !is_fixed_arr) {
             Parser_error(self, _STR("[] 支持类型 array | string | map , 当前类型 \"%.*s\"", typ.len, typ.str));
        }
        
        if (is_fixed_arr) {
            if (string_eq(v.type1, c2s("CArray"))) {
                typ = v.type2;
            }
            
            while (self->tok == Token_lsbr) {
                 Parser_next(self);
                 Parser_gen(self, c2s("["));
                 Parser_log2(self, c2s("cyan"), c2s("["));
                 Parser_expression(self);
                 Parser_log2(self, c2s("cyan"), c2s("]"));
                 Parser_check(self, Token_rsbr);
                 Parser_gen(self, c2s("]"));
                goto l0;
            }
        }
        
         Parser_check(self, Token_lsbr);
        if (is_str) {
            typ = c2s("char");
            if (self->neibu_bao) {
                 Parser_gen(self, c2s(".str["));
                close_bracket = 1;
            }
            else {
                 Parser_gen(self, c2s(", "));
            }
            
        }
        else if (is_ptr) {
            if ( string_ends_with(typ, c2s("*"))) {
                typ =  string_left(typ, typ.len - 1);
            }
            
            if (!is_arr) {
                 Parser_gen(self, c2s("[/*p*/"));
                close_bracket = 1;
            }
            
        }
        
        if (is_map) {
            typ =  string_replace(typ, c2s("map_"), c2s(""));
            if (string_eq(typ, c2s("map"))) {
                typ = c2s("void*");
            }
            
             Parser_gen(self, c2s(", "));
        }
        
        if (is_arr) {
            if (is_arr2) {
                typ =  string_replace(typ, c2s("array_"), c2s(""));
            }
            
            if (string_eq(typ, c2s("array"))) {
                typ = c2s("void*");
            }
            
            if (self->neibu_bao) {
                 GenC_cha_ru(self->genc, fn_ph, _STR("(((%.*s*)(", typ.len, typ.str));
                 Parser_gen(self, c2s(".data))["));
                close_bracket = 1;
            }
            else {
                 Parser_gen(self, c2s(","));
            }
            
        }
        
        if (is_arr) {
            int i = 0;
            int vl = 0;
            string val = c2s("");
            bool k = 0;
            while (self->tok != Token_rsbr) {
                 GenC_start_tmp(self->genc);
                string ty =  Parser_expression(self);
                val =  GenC_end_tmp(self->genc);
                Type* T =  Table_find_type(self->table, ty);
                if (string_ne(T->parent, c2s("int"))) {
                     Parser_check_types(self, T->name, c2s("int"), 1);
                }
                
                if (i != 0) {
                }
                else {
                     Parser_gen(self, val);
                }
                
                if (self->tok == Token_rsbr &&  Parser_peek(self).tok == Token_lsbr) {
                     Parser_next(self);
                     Parser_next(self);
                }
                
                i++;
            }
        }
        else {
             Parser_expression(self);
        }
        
         Parser_check(self, Token_rsbr);
        if (close_bracket) {
             Parser_gen(self, c2s("]"));
            if (is_arr) {
                 Parser_gen(self, c2s(")"));
            }
            
        }
        
         Parser_log2(self, c2s("cyan"), c2s("]"));
    }
    
    l0:
    if ( Token_is_assign(self->tok)) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s ", self->lit.len, self->lit.str));
        if (is_indexer && is_str && !self->neibu_bao) {
             Parser_error(self, c2s("不能修改字符串索引 str[i] = n"));
        }
        
        int assign_pos = self->genc->cur_line.len;
        self->assigned_type = typ;
        self->expected_type = typ;
         Parser_assign_stat(self, v, fn_ph, is_indexer && (is_map || is_arr));
        if (is_indexer && (is_map || (is_arr && !self->neibu_bao))) {
            string val =  Parser_get_add_digit(self, c2s("val"));
            string _val =  string_right(self->genc->cur_line, assign_pos);
            self->genc->cur_line =  string_left(self->genc->cur_line, assign_pos);
            _PUSH(&self->genc->lines, (_STR("%.*s%.*s %.*s = %.*s;", self->genc->fmt_indent.len, self->genc->fmt_indent.str, typ.len, typ.str, val.len, val.str, _val.len, _val.str)), string, tmp1);
            if (is_map) {
                 GenC_cha_ru(self->genc, fn_ph, c2s("map_set(&"));
            }
            else if (is_ptr) {
                 GenC_cha_ru(self->genc, fn_ph, c2s("/*p*/array_set("));
            }
            else if (is_arr) {
                 GenC_cha_ru(self->genc, fn_ph, c2s("array_set(&"));
            }
            
             Parser_gen(self, _STR(", &%.*s)", val.len, val.str));
        }
        
        return typ;
    }
    else if ((is_map || (is_arr && !self->neibu_bao) || (is_str && !self->neibu_bao)) && is_indexer) {
        self->z_log = string_add(self->z_log, c2s("<生成>"));
        string idx =  string_right(self->genc->cur_line, fn_ph);
        self->genc->cur_line =  string_left(self->genc->cur_line, fn_ph);
        if (is_map) {
            string val =  Parser_get_add_digit(self, c2s("val"));
            string ok =  Parser_get_add_digit(self, c2s("ok"));
            string dft = default_type(typ);
            _PUSH(&self->genc->lines, (_STR("%.*s%.*s %.*s = %.*s; bool %.*s = map_get(%.*s, &%.*s);", self->genc->fmt_indent.len, self->genc->fmt_indent.str, typ.len, typ.str, val.len, val.str, dft.len, dft.str, ok.len, ok.str, idx.len, idx.str, val.len, val.str)), string, tmp2);
             Parser_gen(self, _STR("%.*s", val.len, val.str));
        }
        else if (is_arr && !self->neibu_bao) {
             Parser_gen(self, _STR("( *(%.*s*) array_get(%.*s) )", typ.len, typ.str, idx.len, idx.str));
        }
        else if (is_str && !self->neibu_bao) {
             Parser_gen(self, _STR("string_at(%.*s)", idx.len, idx.str));
        }
        
    }
    
    return typ;
}
Fn* Parser_interface_method(Parser* self, string attr_name, string receiver) { //fang
    Fn* method = ALLOC_INIT(Fn, {.name = attr_name, .is_interface = 1, .is_method = 1, ._class = receiver, .pkg = c2s(""), .orig_class = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0});
     Parser_log(self, _STR("is interface. attr=%.*s run=%d", attr_name.len, attr_name.str, self->run));
     Parser_fn_args(self, method);
    if ( Scanner_has_gone_over_line_end(self->scanner)) {
        method->ret_type = c2s("void");
    }
    else {
        method->ret_type =  Parser_get_type(self);
    }
    
    return method;
}
bool Scanner_has_gone_over_line_end(Scanner* self) { //fang
    int i = self->pos - 1;
    while (i >= 0 && !is_white(string_at(self->text, i))) {
        i--;
    }
    while (i >= 0 && is_white(string_at(self->text, i))) {
        if (is_nl(string_at(self->text, i))) {
            return 1;
        }
        
        i--;
    }
    return 0;
}
void Parser_async_fn_call(Parser* self, Fn f, int method_ph, string receiver_var, string _type) { //fang
    self->z_log = string_add(self->z_log, c2s("<async-call>"));
    string thread_name = c2s("");
    string fn_name = f.name;
    if (f.is_method) {
        _type =  string_replace(_type, c2s("*"), c2s(""));
        fn_name = _STR("%.*s_%.*s", _type.len, _type.str, f.name.len, f.name.str);
    }
    
    string arg_struct_name = _STR("thread_arg_%.*s", fn_name.len, fn_name.str);
    string tmp_struct =  Parser_get_tmp(self);
     Parser_genln(self, _STR("%.*s * %.*s = malloc(sizeof(%.*s));", arg_struct_name.len, arg_struct_name.str, tmp_struct.len, tmp_struct.str, arg_struct_name.len, arg_struct_name.str));
    string arg_struct = _STR("typedef struct  %.*s   { ", arg_struct_name.len, arg_struct_name.str);
     Parser_next(self);
     Parser_check(self, Token_lpar);
    string str_fn_args = c2s("");
    array_Var tmp1 = f.args ;
    for (int i = 0; i < tmp1.len; i ++) {
        Var arg = ((Var*) tmp1.data)[i];
        arg_struct = string_add(arg_struct, _STR("%.*s %.*s ;", arg.type.len, arg.type.str, arg.name.len, arg.name.str));
        str_fn_args = string_add(str_fn_args, _STR("arg->%.*s", arg.name.len, arg.name.str));
        if (i == 0 && f.is_method) {
             Parser_genln(self, _STR("%.*s -> %.*s =  %.*s ;", tmp_struct.len, tmp_struct.str, arg.name.len, arg.name.str, receiver_var.len, receiver_var.str));
            if (i < f.args.len - 1) {
                str_fn_args = string_add(str_fn_args, c2s(","));
            }
            
            continue;
        }
        
         Parser_genln(self, _STR("%.*s -> %.*s =  ", tmp_struct.len, tmp_struct.str, arg.name.len, arg.name.str));
         Parser_expression(self);
         Parser_genln(self, c2s(";"));
        if (i < f.args.len - 1) {
             Parser_check(self, Token_comma);
            str_fn_args = string_add(str_fn_args, c2s(","));
        }
        
    }
    arg_struct = string_add(arg_struct, _STR("} %.*s ;", arg_struct_name.len, arg_struct_name.str));
    fn_name =  Table_gen_c_fn_name(self->table, &f);
    string wrapper_name = _STR("%.*s_thread_wrapper", fn_name.len, fn_name.str);
    string wrapper_text = _STR("void* %.*s(%.*s * arg) {%.*s( /*f*/%.*s );  }", wrapper_name.len, wrapper_name.str, arg_struct_name.len, arg_struct_name.str, fn_name.len, fn_name.str, str_fn_args.len, str_fn_args.str);
     GenC_register_thread_fn(self->genc, wrapper_name, wrapper_text, arg_struct);
    int tmp_nr =  Parser_get_tmp_counter(self);
    thread_name = _STR("_thread%d", tmp_nr);
    if (self->os != OS_windows) {
         Parser_genln(self, _STR("pthread_t %.*s;", thread_name.len, thread_name.str));
    }
    
    string tmp2 =  Parser_get_tmp(self);
    string parg = c2s("NULL");
    if (f.args.len > 0) {
        parg = _STR(" %.*s", tmp_struct.len, tmp_struct.str);
    }
    
    if (self->os == OS_windows) {
         Parser_genln(self, _STR(" CreateThread(0,0, %.*s, %.*s, 0,0);", wrapper_name.len, wrapper_name.str, parg.len, parg.str));
    }
    else {
         Parser_genln(self, _STR("int %.*s = pthread_create(& %.*s, NULL, %.*s, %.*s);", tmp2.len, tmp2.str, thread_name.len, thread_name.str, wrapper_name.len, wrapper_name.str, parg.len, parg.str));
    }
    
     Parser_check(self, Token_rpar);
}
string Parser_js_decode(Parser* self) { //fang
     Parser_check(self, Token_NAME);
     Parser_check(self, Token_dot);
    string op =  Parser_check_name(self);
    if (string_eq(op, c2s("decode"))) {
         Parser_check(self, Token_lpar);
        string typ =  Parser_get_type(self);
         Parser_check(self, Token_comma);
         GenC_start_tmp(self->genc);
         Parser_check_types(self,  Parser_bool_expression(self), c2s("string"), 1);
        string expr =  GenC_end_tmp(self->genc);
         Parser_check(self, Token_rpar);
        string tmp =  Parser_get_tmp(self);
        string cjson_tmp =  Parser_get_tmp(self);
        string decl = _STR("%.*s %.*s; ", typ.len, typ.str, tmp.len, tmp.str);
        Type* T =  Table_find_type(self->table, typ);
        array_Var _arr_1 = T->attributes;
        for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
            Var attr = (((Var*) _arr_1.data)[_i_2]);
            string def_val = default_type(attr.type);
            if (string_ne(def_val, c2s(""))) {
                decl = string_add(decl, _STR("%.*s . %.*s = %.*s;\n", tmp.len, tmp.str, attr.name.len, attr.name.str, def_val.len, def_val.str));
            }
            
        }
         Parser_gen_json_for_type(self, *T);
        _PUSH(&self->genc->lines, (_STR("cJSON* %.*s = json__json_parse(%.*s);", cjson_tmp.len, cjson_tmp.str, expr.len, expr.str)), string, tmp3);
         Parser_gen(self, _STR("json__jsdecode_%.*s(%.*s, &%.*s); cJSON_Delete(%.*s);", typ.len, typ.str, cjson_tmp.len, cjson_tmp.str, tmp.len, tmp.str, cjson_tmp.len, cjson_tmp.str));
        string opt_type = _STR("Option_%.*s", typ.len, typ.str);
        _PUSH(&self->genc->typedefs, (_STR("typedef Option %.*s;", opt_type.len, opt_type.str)), string, tmp4);
         Table_register_type(self->table, opt_type);
        return opt_type;
    }
    else if (string_eq(op, c2s("encode"))) {
         Parser_check(self, Token_lpar);
         GenC_start_tmp(self->genc);
        string typ =  Parser_bool_expression(self);
        Type* T =  Table_find_type(self->table, typ);
         Parser_gen_json_for_type(self, *T);
        string expr =  GenC_end_tmp(self->genc);
         Parser_check(self, Token_rpar);
         Parser_gen(self, _STR("json__json_print(json__jsencode_%.*s(%.*s))", typ.len, typ.str, expr.len, expr.str));
        return c2s("string");
    }
    else {
         Parser_error(self, _STR("bad json op \"%.*s\"", op.len, op.str));
    }
    
    return c2s("");
}
void Parser_gen_json_for_type(Parser* self, Type typ) { //fn
    string dec = c2s("");
    string enc = c2s("");
    string t = typ.name;
    if (string_eq(t, c2s("int")) || string_eq(t, c2s("string")) || string_eq(t, c2s("bool"))) {
        return;
    }
    
    if ( Parser_first_run(self)) {
        return;
    }
    
    Fn dec_fn = (/*&C.*/Fn){.pkg = self->mod, .ret_type = _STR("Option_%.*s", typ.name.len, typ.name.str), .name = js_dec_name(t), ._class = c2s(""), .orig_class = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0};
    if ( Table_known_fn(self->table, dec_fn.name)) {
        return;
    }
    
    Var arg = (/*&C.*/Var){.type = c2s("cJSON*"), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    _PUSH(&dec_fn.args, (arg), Var, tmp5);
     Table_register_fn(self->table, dec_fn);
    Fn enc_fn = (/*&C.*/Fn){.pkg = self->mod, .ret_type = c2s("cJSON*"), .name = js_enc_name(t), ._class = c2s(""), .orig_class = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0};
    Var enc_arg = (/*&C.*/Var){.type = t, .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    _PUSH(&enc_fn.args, (enc_arg), Var, tmp6);
     Table_register_fn(self->table, enc_fn);
    dec = string_add(dec, _STR("\n//%.*s %.*s(cJSON* root) {  \nOption %.*s(cJSON* root, %.*s* res) {  \n//  %.*s res; \n  if (!root) {\n    const char *error_ptr = cJSON_GetErrorPtr();\n    if (error_ptr != NULL)	{\n      fprintf(stderr, \"Error in decode() for %.*s error_ptr=: %%%%s\\n\", error_ptr);\n//      printf(\"\\nbad js=%%%%s\\n\", js.str); \n      return v_error(c2s(error_ptr));\n    }\n  }\n", t.len, t.str, dec_fn.name.len, dec_fn.name.str, dec_fn.name.len, dec_fn.name.str, t.len, t.str, t.len, t.str, t.len, t.str));
    enc = string_add(enc, _STR("\ncJSON* %.*s(%.*s val) {  \ncJSON *o = cJSON_CreateObject();\nstring res = c2s(\"\"); \n", enc_fn.name.len, enc_fn.name.str, t.len, t.str));
    if ( string_starts_with(t, c2s("array_"))) {
        dec = string_add(dec,  Parser_decode_array(self, t));
        enc = string_add(enc,  Parser_encode_array(*&self, t));
    }
    
    array_Var _arr_7 = typ.attributes;
    for (int _i_8 = 0; _i_8 < _arr_7.len; _i_8 ++) {
        Var attr = (((Var*) _arr_7.data)[_i_8]);
        if (string_eq(attr.attr, c2s("skip"))) {
            continue;
        }
        
        Type* attr_type =  Table_find_type(self->table, attr.type);
         Parser_gen_json_for_type(self, *attr_type);
        string name = attr.name;
        string _typ =  string_replace(attr.type, c2s("*"), c2s(""));
        string enc_name = js_enc_name(_typ);
        string dec_name = js_dec_name(_typ);
        if (is_js_prim(_typ)) {
            dec = string_add(dec, _STR(" /*prim*/ res->%.*s = %.*s(js_get(root, \"%.*s\"))", name.len, name.str, dec_name.len, dec_name.str, attr.name.len, attr.name.str));
        }
        else {
            dec = string_add(dec, _STR(" /*!!*/ %.*s(js_get(root, \"%.*s\"), & (res->%.*s))", dec_name.len, dec_name.str, attr.name.len, attr.name.str, name.len, name.str));
        }
        
        dec = string_add(dec, c2s(";\n"));
        enc = string_add(enc, _STR("  cJSON_AddItemToObject(o,  \"%.*s\", %.*s(val.%.*s)); \n", name.len, name.str, enc_name.len, enc_name.str, name.len, name.str));
    }
    _PUSH(&self->genc->fns, (_STR("%.*s return opt_ok(res, sizeof(*res)); \n}", dec.len, dec.str)), string, tmp9);
    _PUSH(&self->genc->fns, (_STR("/*enc start*/ %.*s return o;}", enc.len, enc.str)), string, tmp10);
}
bool is_js_prim(string typ) { //fn
    return string_eq(typ, c2s("int")) || string_eq(typ, c2s("string")) || string_eq(typ, c2s("bool")) || string_eq(typ, c2s("f32")) || string_eq(typ, c2s("f64")) || string_eq(typ, c2s("i8")) || string_eq(typ, c2s("i16")) || string_eq(typ, c2s("i32")) || string_eq(typ, c2s("i64"));
}
string Parser_decode_array(Parser* self, string typ) { //fn
    typ =  string_replace(typ, c2s("array_"), c2s(""));
    Type* t =  Table_find_type(self->table, typ);
    string fn_name = js_dec_name(typ);
     Parser_gen_json_for_type(self, *t);
    string s = c2s("");
    if (is_js_prim(typ)) {
        s = _STR("%.*s val= %.*s(jsval); ", typ.len, typ.str, fn_name.len, fn_name.str);
    }
    else {
        s = _STR("  %.*s val; %.*s(jsval, &val); ", typ.len, typ.str, fn_name.len, fn_name.str);
    }
    
    return _STR("\n*res = new_array(0, 0, sizeof(%.*s));\nconst cJSON *jsval = NULL;\ncJSON_ArrayForEach(jsval, root)\n{\n%.*s \n  array_push(res, &val);\n}\n", typ.len, typ.str, s.len, s.str);
}
string js_enc_name(string typ) { //fn
    string name = _STR("json__jsencode_%.*s", typ.len, typ.str);
    return name;
}
string js_dec_name(string typ) { //fn
    string name = _STR("json__jsdecode_%.*s", typ.len, typ.str);
    return name;
}
string Parser_encode_array(Parser* self, string typ) { //fn
    typ =  string_replace(typ, c2s("array_"), c2s(""));
    string fn_name = js_enc_name(typ);
    return _STR("\no = cJSON_CreateArray();\nfor (int i = 0; i < val.len; i++){\n  cJSON_AddItemToArray(o, %.*s(  ((%.*s*)val.data)[i]  ));\n} \n", fn_name.len, fn_name.str, typ.len, typ.str);
}
string Parser_map_init(Parser* self) { //fang
    self->z_log = string_add(self->z_log, c2s("<map>"));
     Parser_next(self);
     Parser_check(self, Token_lsbr);
    if (self->tok != Token_rsbr) {
        string key_type =  Parser_check_name(self);
        if (string_ne(key_type, c2s("string"))) {
             Parser_error(self, c2s("map 只支持 string 键"));
        }
        
    }
    
     Parser_check(self, Token_rsbr);
    string val_type =  Parser_check_name(self);
    self->decl_var.type1 = c2s("map");
    self->decl_var.type2 = val_type;
     Parser_log2(self, c2s("cyan"), _STR("map[]%.*s", val_type.len, val_type.str));
    if (! Table_known_type(self->table, val_type)) {
         Parser_error(self, _STR("map 初始化未知类型\"%.*s\"", val_type.len, val_type.str));
    }
    
    string typ = _STR("map_%.*s", val_type.len, val_type.str);
     Parser_register_map(self, typ);
     Parser_gen(self, _STR("new_map(1, sizeof(%.*s), \"%.*s\")", val_type.len, val_type.str, val_type.len, val_type.str));
    if (self->tok == Token_lcbr) {
         Parser_check(self, Token_lcbr);
         Parser_check(self, Token_rcbr);
    }
    
    return typ;
}
void Parser_register_map(Parser* self, string typ) { //fang
    if ( string_contains(typ, c2s("*"))) {
        println(_STR("坏的 map 类型 %.*s", typ.len, typ.str));
        return;
    }
    
    if (! Table_known_type(self->table, typ)) {
         Parser_register_parent_with_type(self, c2s("map"), typ);
        _PUSH(&self->genc->typedefs, (_STR("typedef map %.*s;", typ.len, typ.str)), string, tmp1);
    }
    
}
string Parser_name_expr(Parser* self) { //fang
     Parser_log(self, _STR("\nname expr() pass=%d tok=%d lit=%.*s", self->run, self->tok, self->lit.len, self->lit.str));
    self->z_log = string_add(self->z_log, c2s("<name_expr>"));
    int hack_pos = self->scanner->pos;
    Token hack_tok = self->tok;
    string hack_lit = self->lit;
    int ph =  GenC_biaoqian(self->genc);
    bool ptr = self->tok == Token_amp;
    bool deref = self->tok == Token_mul;
    int deref_i = 0;
    int ptr_i = 0;
    if (ptr || deref) {
        while (self->tok == Token_amp || self->tok == Token_mul) {
            if (self->tok == Token_mul) {
                deref = 1;
                deref_i++;
            }
            else if (self->tok == Token_amp) {
                ptr = 1;
                ptr_i++;
            }
            
             Parser_next(self);
        }
        if (self->tok == Token_lpar) {
            self->is_par = 1;
             Parser_next(self);
        }
        
    }
    
    string name = self->lit;
    if (string_eq(self->lit, c2s("new"))) {
         Parser_next(self);
        name = string_add(c2s("new_"), self->lit);
        goto lf;
    }
    
    if (string_eq(self->lit, c2s("_"))) {
        name = c2s("self");
    }
    
    string orig_name = name;
    bool is_c = string_eq(name, c2s("C")) &&  Parser_peek(self).tok == Token_dot;
    bool is_c_struct_init = is_c && ptr;
    if (is_c) {
         Parser_next(self);
         Parser_check(self, Token_dot);
        name = self->lit;
        if (!is_c_struct_init &&  Parser_peek(self).tok == Token_lcbr) {
            is_c_struct_init = 1;
        }
        
    }
    
    if (self->tok == Token_dot) {
        Type* enum_type =  Parser_find_type(self, self->expected_type);
        if (enum_type->is_enum) {
             Parser_next(self);
            string _attr = self->lit;
             Parser_log2(self, c2s("cyan"), _STR("(%.*s).%.*s", self->expected_type.len, self->expected_type.str, _attr.len, _attr.str));
            if (! Type_has_enum_val(enum_type, _attr)) {
                 Parser_error(self, _STR("enum %.*s 不含 { %.*s } 属性", enum_type->name.len, enum_type->name.str, _attr.len, _attr.str));
            }
            
             Parser_gen(self, string_add(string_add(enum_type->name, c2s("_")), _attr));
        }
        else {
             Parser_error(self, _STR("未知枚举类型 %.*s", self->expected_type.len, self->expected_type.str));
        }
        
         Parser_next(self);
        return self->expected_type;
    }
    
    if ((string_eq(name, self->mod) ||  Table_known_pkg(self->table, name) ||  FileImportTable_known_alias(self->import_table, name)) && ! Fn_known_var(self->cur_fn, name) && !is_c) {
        string pkg = name;
        if (string_ne(name, self->mod) && ! Table_known_pkg(self->table, name)) {
            pkg =  FileImportTable_resolve_alias(self->import_table, name);
        }
        
        pkg =  string_replace(pkg, c2s("/"), c2s("_dot_"));
         Parser_next(self);
         Parser_check(self, Token_dot);
        name = self->lit;
        if (string_ne(name, c2s("main"))) {
            name = _STR("%.*s__%.*s", pkg.len, pkg.str, name.len, name.str);
        }
        
        self->z_log = string_add(self->z_log, _STR("%.*s", name.len, name.str));
    }
    else if (! Table_known_type(self->table, name) && ! Fn_known_var(self->cur_fn, name) && ! Table_known_fn(self->table, name) && ! Table_known_const(self->table, name) && !is_c) {
        if (string_ne(self->mod, c2s("main"))) {
            name = _STR("%.*s__%.*s", self->mod.len, self->mod.str, name.len, name.str);
        }
        
    }
    
    Var v =  Fn_find_var(self->cur_fn, name);
    if (v.name.len != 0) {
         Parser_log2(self, c2s("cyan"), _STR(" %.*s", name.len, name.str));
        if (deref) {
            string m = c2s("");
            for (int i = 0;i < deref_i;i++) { 
                m = string_add(m, c2s("*"));
            }
             Parser_gen(self, _STR("%.*s", m.len, m.str));
        }
        
        if (ptr) {
             Parser_gen(self, c2s("&"));
        }
        
        string typ =  Parser_var_expr(self, v);
        if (deref) {
            if (! string_contains(typ, c2s("*")) && ! string_ends_with(typ, c2s("ptr"))) {
                println(_STR("name=\"%.*s\", t=%.*s", name.len, name.str, v.type.len, v.type.str));
                 Parser_error(self, _STR("解引用必须是指针, 当前 \"%.*s\"", typ.len, typ.str));
            }
            
            typ =  string_replace(typ, c2s("ptr"), c2s(""));
            typ =  string_replace(typ, c2s("*"), c2s(""));
        }
        else if (ptr) {
            typ = string_add(typ, c2s("*"));
        }
        
        return typ;
    }
    
    if ( Table_known_type(self->table, name)) {
        if (!is_c && ( Parser_peek(self).tok == Token_lpar || (deref &&  Parser_peek(self).tok == Token_rpar))) {
            if (deref) {
                name = string_add(name, c2s("*"));
            }
            
            if (deref_i == 2) {
                 Parser_gen(self, c2s("*("));
            }
            
            string typ =  Parser_cast(self, name);
            if (deref_i == 2) {
                 Parser_gen(self, c2s(")"));
            }
            
             Parser_log2(self, c2s("cyan"), _STR("(%.*s)", name.len, name.str));
            return typ;
        }
        else if ( Parser_peek(self).tok == Token_dot) {
             Parser_log2(self, c2s("cyan"), _STR(" %.*s", name.len, name.str));
            Type* enum_type =  Table_find_type(self->table, name);
            if (!enum_type->is_enum) {
                 Parser_error(self, _STR("不是枚举类型 %.*s", name.len, name.str));
            }
            
             Parser_next(self);
             Parser_check(self, Token_dot);
            string _attr = self->lit;
             Parser_log2(self, c2s("cyan"), _STR(".%.*s", _attr.len, _attr.str));
            if (! Type_has_enum_val(enum_type, _attr) && string_ne(self->expected_type, c2s("int"))) {
                 Parser_error(self, _STR("enum %.*s 不含 { %.*s } 字段", enum_type->name.len, enum_type->name.str, _attr.len, _attr.str));
            }
            
             Parser_gen(self, string_add(string_add(enum_type->name, c2s("_")), _attr));
             Parser_next(self);
            return enum_type->name;
        }
        else if ( Parser_peek(self).tok == Token_lcbr) {
             Parser_log2(self, c2s("cyan"), c2s("{"));
            self->scanner->pos = hack_pos;
            self->tok = hack_tok;
            self->lit = hack_lit;
            if (is_c_struct_init) {
                self->decl_var.type1 = c2s("struct");
            }
            
            return  Parser_struct_init(self, is_c_struct_init);
        }
        
    }
    
    if (is_c) {
         Parser_log2(self, c2s("cyan"), c2s("C."));
        Fn f = (/*&C.*/Fn){.name = name, .is_c = 1, .pkg = c2s(""), ._class = c2s(""), .orig_class = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .returns_error = 0, .is_decl = 0};
         Parser_fn_call(self, f, 0, c2s(""), c2s(""));
        Fn cfn =  Table_find_fn(self->table, name);
        if (string_eq(cfn.name, c2s(""))) {
            return c2s("void*");
        }
        
        return cfn.ret_type;
    }
    
     Parser_log2(self, c2s("cyan"), _STR("%.*s", name.len, name.str));
    Var c =  Table_find_const(self->table, name);
    if (string_ne(c.name, c2s("")) && ptr && !c.is_global) {
         Parser_error(self, _STR("不能取 常量 %.*s 的地址", c.name.len, c.name.str));
    }
    
    if (c.name.len != 0) {
        if (deref) {
             Parser_gen(self, c2s("/*const*/ *"));
        }
        
        if (ptr) {
             Parser_gen(self, c2s("/*const*/ &"));
        }
        
        if (self->is_par) {
             Parser_gen(self, c2s("("));
        }
        
         Parser_log(self, c2s("calling var expr"));
        string typ =  Parser_var_expr(self, c);
        if (ptr) {
            typ = string_add(typ, c2s("*"));
        }
        
        return typ;
    }
    
    lf:
    Fn f =  Table_find_fn(self->table, name);
    if (string_eq(f.name, c2s(""))) {
        if (!self->run == Pass_decl) {
            if ( Table_known_pkg(self->table, orig_name) ||  FileImportTable_known_alias(self->import_table, orig_name)) {
                 Parser_error(self, _STR("模块错误: %.*s", name.len, name.str));
            }
            else {
                 Parser_error(self, Console__red(_STR("未定义orig_name: %.*s", orig_name.len, orig_name.str)));
            }
            
        }
        
         Parser_next(self);
        return c2s("void");
    }
    
    self->z_log = string_add(self->z_log, c2s("<fn>"));
    if ( Parser_peek(self).tok != Token_lpar) {
         Parser_gen(self,  Table_gen_c_fn_name(self->table, &f));
         Parser_next(self);
        return c2s("void*");
    }
    
     Parser_log(self, c2s("连接函数"));
     Parser_fn_call(self, f, 0, c2s(""), c2s(""));
    if (self->tok == Token_dot) {
        string typ = c2s("");
        while (self->tok == Token_dot) {
            println(_STR("%.*s.", name.len, name.str));
            typ =  Parser_dot(self, f.ret_type, ph);
        }
        return typ;
    }
    
     Parser_log(self, c2s("name_expr 结束"));
    return f.ret_type;
}
void Parser_log(Parser* self, string s) { //fang
    if (!self->pref->is_verbose) {
        return;
    }
    
    println(s);
}
bool Parser_first_run(Parser* self) { //fang
    return self->run == Pass_decl;
}
Parser Z_new_parser(Z* self, string path, Pass run) { //fang
     Z_log(self, _STR("new parser(\"%.*s\")", path.len, path.str));
    self->genc->run = run;
    Parser p = (/*&C.*/Parser){.file_path = path, .file_name =  string_all_after(path, c2s("/")), .scanner = new_Scanner(path), .table = self->table, .import_table = new_FileImportTable(path), .cur_fn = EmptyFn, .genc = self->genc, .is_script = (self->pref->is_script && string_eq(path, self->dir)), .pref = self->pref, .os = self->os, .run = run, .zroot = self->zroot, .res = new_array(0, 1, sizeof(ScanRes)), .res_idx = 0, .tokens = new_array(0, 1, sizeof(Token)), .token_idx = 0, .tk_pos = 0, .lit = c2s(""), .mod = c2s(""), .inside_const = 0, .assigned_type = c2s(""), .expected_type = c2s(""), ._arr_ss = c2s(""), ._arr = c2s(""), .tmp_cnt = 0, .neibu_bao = 0, .zh_lines = new_array(0, 1, sizeof(string)), .inside_if_expr = 0, .is_struct_init = 0, .if_expr_cnt = 0, .for_expr_cnt = 0, .ptr_cast = 0, .calling_c = 0, .returns = 0, .is_c_struct_init = 0, .is_par = 0, .can_chash = 0, .attr = c2s(""), .attrs = new_array(0, 1, sizeof(string)), .Generic = new_array(0, 1, sizeof(string)), .gener = c2s(""), .z_syntax = 0, .z_log = c2s(""), .z_statem = 0, .z_class = 0, .z_type = c2s(""), .z_self = c2s(""), .attr_type = c2s(""), .attr_name = c2s(""), .z_fn_name = c2s(""), .prev_tk_pos = 0, .prev_lit = c2s(""), .prev_tk_pos2 = 0, .prev_lit2 = c2s(""), .line_nr = 0, .line_pos = 0, .top_pos = 0};
     Parser_next(&p);
    return p;
}
void Parser_next(Parser* self) { //fang
    if (self->tok == Token_rcbr && string_at(self->scanner->text, self->scanner->pos - 1) != '{') {
        self->scanner->fmt_indent--;
        self->genc->fmt_indent = strings__repeat2(c2s("    "), self->scanner->fmt_indent);
    }
    
    if (self->tok == Token_lcbr && string_at(self->scanner->text, self->scanner->pos + 1) != '}') {
        self->scanner->fmt_indent++;
        self->genc->fmt_indent = strings__repeat2(c2s("    "), self->scanner->fmt_indent);
    }
    
    self->prev_tok2 = self->prev_tok;
    self->prev_lit2 = self->prev_lit;
    self->prev_tk_pos2 = self->prev_tk_pos;
    self->prev_tok = self->tok;
    self->prev_lit = self->lit;
    self->prev_tk_pos = self->tk_pos;
    ScanRes res =  Scanner_scan(self->scanner);
    self->tk_pos = self->scanner->tok_pos;
    self->tok = res.tok;
    self->lit = res.lit;
}
void Parser_parse(Parser* self) { //fang
     Parser_log(self, _STR("\nparse() run=%d file=%.*s", self->run, self->file_name.len, self->file_name.str));
    if (self->is_script || self->pref->is_test) {
        self->mod = c2s("main");
        if (self->tok == Token_key_module) {
             Parser_next(self);
            self->mod =  Parser_check_name(self);
        }
        
    }
    else {
         Parser_check(self, Token_key_module);
        self->mod =  Parser_check_name(self);
    }
    
    self->neibu_bao = string_eq(self->mod, c2s("builtin"));
    string fq_mod =  Table_qualify_module(self->table, self->mod, self->file_path);
     Table_reg_module(self->table, fq_mod);
    self->mod =  string_replace(fq_mod, c2s("/"), c2s("_dot_"));
    if (self->run == Pass_imports) {
        while (self->tok == Token_key_import &&  Parser_peek(self).tok != Token_key_const) {
             Parser_import_stat(self);
        }
        if ( array_string_contains(self->table->imports, c2s("builtin"))) {
             Parser_error(self, c2s("不能导入 内置 模块"));
        }
        
        return;
    }
    
    while (1) {
        self->line_pos = self->scanner->line_pos;
        /*match*/
        if ((self->tok == Token_key_import)) {/* case 0*/
            if ( Parser_peek(self).tok == Token_key_const) {
                 Parser_const_decl(self);
            }
            else {
                 Parser_import_stat(self);
            }
            
        }
        else if ((self->tok == Token_lsbr)) {/* case 1*/
             Parser_attribute(self);
        }
        else if ((self->tok == Token_key_enum)) {/* case 2*/
             Parser_enum_decl(self);
        }
        else if ((self->tok == Token_key_fn) ||  (self->tok == Token_key_fnc)) {/* case 3*/
             Parser_fn_decl(self);
        }
        else if ((self->tok == Token_key_type)) {/* case 4*/
             Parser_type_decl(self);
        }
        else if ((self->tok == Token_key_typedef)) {/* case 5*/
             Parser_typedef_decl(self);
        }
        else if ((self->tok == Token_key_typec) ||  (self->tok == Token_key_struct) ||  (self->tok == Token_key_interface) ||  (self->tok == Token_key_union)) {/* case 6*/
             Parser_struct_decl(self);
        }
        else if ((self->tok == Token_key_class)) {/* case 7*/
             Parser_class_decl(self);
        }
        else if ((self->tok == Token_key_const)) {/* case 8*/
             Parser_const_decl(self);
        }
        else if ((self->tok == Token_hash)) {/* case 9*/
             Parser_chash(self);
        }
        else if ((self->tok == Token_dollar)) {/* case 10*/
             Parser_comp_time(self);
        }
        else if ((self->tok == Token_key_global)) {/* case 11*/
             Parser_next(self);
            string name =  Parser_check_name(self);
            string typ =  Parser_get_type(self);
             Parser_register_global(self, name, typ);
            string g =  Table_gen_c_type_name_pair(self->table, typ, name);
            if (self->tok == Token_assign) {
                 Parser_next(self);
                g = string_add(g, c2s(" = "));
                 GenC_start_tmp(self->genc);
                 Parser_bool_expression(self);
                g = string_add(g,  GenC_end_tmp(self->genc));
            }
            
            g = string_add(g, c2s("; // global"));
            if (self->run == Pass_main) {
                _PUSH(&self->genc->consts, (g), string, tmp1);
            }
            
        }
        else if ((self->tok == Token_NAME)) {/* case 12*/
             Parser_hanshu_jiexi(self);
        }
        else if ((self->tok == Token_eof)) {/* case 13*/
             Parser_log(self, c2s("parse 结束"));
            if (self->is_script && !self->pref->is_test) {
                self->cur_fn = MainFn;
                 Parser_check_unused_variables(self);
            }
            
            if (0 && ! Parser_first_run(self) &&  Parser_fileis(self, c2s("main.z"))) {
                Option_os__File _opt_2= os__create(c2s("/var/tmp/fmt.z"));
                if (!_opt_2.ok) {
                    string err = _opt_2.error;
                    z_panic(c2s("创建 fmt.z 失败"));
                    return;
                }
                os__File out = *(os__File*) _opt_2.data;
                 os__File_writeln(out, c2s(""));
                 os__File_close(out);
            }
            
            return;
        }
        else  { //else 14
            if (self->is_script && !self->pref->is_test) {
                println(c2s("进入脚本"));
                if ( Parser_first_run(self)) {
                    if (string_eq(self->cur_fn->name, c2s(""))) {
                        self->cur_fn = MainFn;
                    }
                    
                    return;
                }
                
                if (string_eq(self->cur_fn->name, c2s(""))) {
                    self->cur_fn = MainFn;
                    if (self->pref->is_repl) {
                         Fn_clear_vars(self->cur_fn);
                    }
                    
                }
                
                int start = self->genc->lines.len;
                 Parser_statement(self, 1);
                if (string_ne(( *(string*) array_get(self->genc->lines,start - 1) ), c2s("")) && string_ne(self->genc->fn_main, c2s(""))) {
                    start--;
                }
                
                 Parser_genln(self, c2s(""));
                int end = self->genc->lines.len;
                array_string lines =  array_slice(self->genc->lines, start, end);
                self->genc->fn_main = string_add(self->genc->fn_main,  array_string_join(lines, c2s("\n")));
                self->genc->cur_line = c2s("");
                for (int i = start;i < end;i++) { 
                    string val3 = c2s("");
                    array_set(&self->genc->lines,i, &val3);
                }
            }
            else {
                 Parser_error(self, _STR("未知顶层token, %.*s", Parser_strtok(self).len, Parser_strtok(self).str));
            }
            
        }
    }
}
void Parser_hanshu_jiexi(Parser* self) { //fang
     Parser_fmt_0(self);
    self->z_log = c2s("----->>----- 函数 , 变量 ----->>-----\n");
    string rt =  Parser_get_type(self);
    string ct = c2s("");
    string n = c2s("");
    if (! Table_known_type(self->table, rt) && self->run != Pass_decl) {
        println(c2s("未知顶层 返回类型"));
    }
    else {
        if (self->tok == Token_mul) {
            rt = string_add(rt, c2s("*"));
             Parser_next(self);
        }
        
        bool p = 1;
        if ((self->tok == Token_NAME &&  Parser_peek(self).tok == Token_colon) || self->tok == Token_lsbr) {
            ct =  Parser_get_type(self);
            Type* T =  Table_find_type(self->table, ct);
            if (self->run != Pass_decl && !self->neibu_bao && string_ne(T->mod, self->mod)) {
                 Parser_error(self, _STR("无法在非本地模块(%.*s)为类(%.*s)定义方法,当前模块(%.*s)", T->mod.len, T->mod.str, ct.len, ct.str, self->mod.len, self->mod.str));
            }
            
             Parser_check(self, Token_colon);
            if (self->tok == Token_colon) {
                 Parser_next(self);
                p = 0;
            }
            
            n =  Parser_check_name(self);
             Parser_log2(self, c2s("cyan"), _STR(":%.*s", n.len, n.str));
             Parser_f_decl(self, ct, rt, n, p);
        }
        else if (self->tok == Token_NAME &&  Parser_peek(self).tok == Token_lpar) {
            n =  Parser_check_name(self);
            if (!self->neibu_bao && string_ne(self->mod, c2s("main"))) {
                n = _STR("%.*s__%.*s", self->mod.len, self->mod.str, n.len, n.str);
            }
            
            if (self->run == Pass_decl &&  Table_known_fn(self->table, n)) {
                Fn existing_fn =  Table_find_fn(self->table, n);
                if (!existing_fn.is_decl) {
                     Parser_error(self, _STR("%.*s 以声明", n.len, n.str));
                }
                
            }
            
             Parser_log2(self, c2s("cyan"), _STR("%.*s ", n.len, n.str));
             Parser_f_decl(self, c2s(""), rt, n, 0);
        }
        else {
             Parser_v_decl(self, rt);
        }
        
    }
    
    return;
}
string Parser_strtok(Parser* self) { //fang
    if (self->tok == Token_NAME) {
        return self->lit;
    }
    
    if (self->tok == Token_STRING) {
        return _STR("\"%.*s\"", self->lit.len, self->lit.str);
    }
    
    string res =  Token_str(self->tok);
    if (string_eq(res, c2s(""))) {
        int n = (int)(self->tok);
        return  int_str(n);
    }
    
    return res;
}
string Parser_check_name(Parser* self) { //fang
    if (self->tok == Token_key_type) {
         Parser_check(self, Token_key_type);
        return c2s("type");
    }
    
    string name = self->lit;
     Parser_check(self, Token_NAME);
    return name;
}
string Parser_check_string(Parser* self) { //fang
    string s = self->lit;
     Parser_check(self, Token_STRING);
    return s;
}
void Parser_check(Parser* self, Token expected) { //fang
    if (self->tok != expected) {
        self->line_pos = self->scanner->line_pos;
        string s = _STR("check()\n预期 %.*s 当前 %.*s", Console__green( Token_str(expected)).len, Console__green( Token_str(expected)).str, Console__red(self->lit).len, Console__red(self->lit).str);
         Parser_next(self);
        s = string_add(s, _STR("\n下一个= %.*s", self->lit.len, self->lit.str));
         Parser_error(self, s);
    }
    
     Parser_next(self);
}
void Parser_jiancha(Parser* self, string expe) { //fang
    if (string_ne(self->lit, expe)) {
        string s = _STR("jiancha()\n预期 %.*s 当前 %.*s", expe.len, expe.str, self->lit.len, self->lit.str);
         Parser_next(self);
        s = string_add(s, _STR("\n下一个= %.*s", self->lit.len, self->lit.str));
         Parser_error(self, s);
    }
    
     Parser_next(self);
}
void Parser_print_tok(Parser* self) { //fang
    if (self->tok == Token_NAME) {
        println(self->lit);
        return;
    }
    
    if (self->tok == Token_STRING) {
        println(_STR("\"%.*s\"", self->lit.len, self->lit.str));
        return;
    }
    
    println( Token_str(self->tok));
}
void Parser_genln(Parser* self, string s) { //fang
     GenC_genln(self->genc, s);
}
void Parser_gen(Parser* self, string s) { //fang
     GenC_gen(self->genc, s);
}
void Parser_zh_genln(Parser* self, string s) { //fang
    _PUSH(&self->zh_lines, (s), string, tmp4);
}
bool Parser_fileis(Parser* self, string s) { //fang
    return  string_contains(self->scanner->file_path, s);
}
string Parser_cast(Parser* self, string typ) { //fang
     Parser_next(self);
    int pos =  GenC_biaoqian(self->genc);
    if (self->tok == Token_rpar) {
        self->ptr_cast = 1;
         Parser_next(self);
    }
    
     Parser_check(self, Token_lpar);
    self->expected_type = typ;
    string expr_typ =  Parser_bool_expression(self);
    self->expected_type = c2s("");
     Parser_check(self, Token_rpar);
    if (string_eq(typ, c2s("string")) && (string_eq(expr_typ, c2s("char*")) || string_eq(expr_typ, c2s("byte*")))) {
         GenC_cha_ru(self->genc, pos, c2s("c2s("));
    }
    else if (string_eq(typ, c2s("string")) && string_eq(expr_typ, c2s("int"))) {
         Parser_error(self, _STR("无法赋值 `%.*s` 到 `%.*s`, 使用str()方法", expr_typ.len, expr_typ.str, typ.len, typ.str));
    }
    else {
         GenC_cha_ru(self->genc, pos, _STR("(%.*s)(", typ.len, typ.str));
    }
    
     Parser_gen(self, c2s(")"));
    return typ;
}
string Parser_get_tmp(Parser* self) { //fang
    self->tmp_cnt++;
    return _STR("tmp%d", self->tmp_cnt);
}
string Parser_get_add_digit(Parser* self, string val) { //fang
    self->tmp_cnt++;
    return _STR("%.*s%d", val.len, val.str, self->tmp_cnt);
}
int Parser_get_tmp_counter(Parser* self) { //fang
    self->tmp_cnt++;
    return self->tmp_cnt;
}
string prepend_pkg(string pkg, string name) { //fang
    return _STR("%.*s__%.*s", pkg.len, pkg.str, name.len, name.str);
}
string Parser_prepend_pkg(Parser* self, string name) { //fang
    return prepend_pkg(self->mod, name);
}
bool Parser_building_v(Parser* self) { //fang
    string cur_dir = os__getwd();
    return  string_contains(self->file_path, c2s("z/compiler")) ||  string_contains(cur_dir, c2s("z/compiler"));
}
void Parser_attribute(Parser* self) { //fang
     Parser_check(self, Token_lsbr);
    while (self->tok != Token_rsbr) {
        if (self->tok == Token_lt) {
             Parser_next(self);
            while (self->tok != Token_gt) {
                _PUSH(&self->Generic, ( Parser_check_name(self)), string, tmp5);
                if (self->tok == Token_comma) {
                     Parser_next(self);
                }
                
            }
             Parser_check(self, Token_gt);
        }
        else {
            _PUSH(&self->attrs, ( Parser_check_name(self)), string, tmp6);
            if (self->tok == Token_comma) {
                 Parser_next(self);
            }
            
        }
        
    }
     Parser_check(self, Token_rsbr);
    if (self->tok == Token_key_typec) {
         Parser_struct_decl(self);
    }
    else if (self->tok == Token_key_fnc || self->tok == Token_key_fn) {
        int pos = self->scanner->pos;
        int l_n = self->scanner->line_nr;
        int l_c = self->scanner->line_tok_nr;
        array_string _arr_7 = self->Generic;
        for (int _i_8 = 0; _i_8 < _arr_7.len; _i_8 ++) {
            string g = (((string*) _arr_7.data)[_i_8]);
            self->gener = g;
            self->scanner->pos = pos;
            self->scanner->line_nr = l_n;
            self->scanner->line_tok_nr = l_c;
             Parser_fn_decl(self);
        }
    }
    else if (self->tok == Token_NAME) {
        int pos = self->scanner->pos;
        int l_n = self->scanner->line_nr;
        int l_c = self->scanner->line_tok_nr;
        array_string _arr_9 = self->Generic;
        for (int _i_10 = 0; _i_10 < _arr_9.len; _i_10 ++) {
            string g = (((string*) _arr_9.data)[_i_10]);
            self->gener = g;
            self->scanner->pos = pos;
            self->scanner->line_nr = l_n;
            self->scanner->line_tok_nr = l_c;
             Parser_hanshu_jiexi(self);
        }
    }
    else {
         Parser_error(self, c2s("错误[attribute] 支持 typec, fn"));
    }
    
    self->attr = c2s("");
     array_fre(&self->attrs);
    self->gener = c2s("");
     array_fre(&self->Generic);
}
array_string run_repl() { //fn
    println(_STR("Z %.*s", Version.len, Version.str));
    println(c2s("使用 \"Ctrl-C\" 或 \"exit\" 退出"));
    string file = c2s(".zrepl.z");
    string temp_file = c2s(".zrepl_temp.z");
    array_string lines = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    while (1) {
        z_print(c2s(">>> "));
        string line = os__get_raw_line();
        if (string_eq( string_trim_space(line), c2s("")) &&  string_ends_with(line, c2s("\n"))) {
            continue;
        }
        
        line =  string_trim_space(line);
        if (string_eq(line, c2s("")) || string_eq(line, c2s("exit"))) {
            break;
        }
        
        if ( string_starts_with(line, c2s("print"))) {
            string source_code = string_add(string_add( array_string_join(lines, c2s("\n")), c2s("\n")), line);
            os__write_file(file, source_code);
            string s = os__exec(_STR("z run %.*s -repl", file.len, file.str));
            array_string vals =  string_split(s, c2s("\n"));
            if ( string_contains(s, c2s("panic: "))) {
                if (! string_contains(s, c2s("declared and not used"))) {
                    for (int i = 1;i < vals.len;i++) { 
                        println(( *(string*) array_get(vals,i) ));
                    }
                }
                else {
                    println(s);
                }
                
            }
            else {
                for (int i = 0;i < vals.len - 1;i++) { 
                    println(( *(string*) array_get(vals,i) ));
                }
            }
            
        }
        else {
            string temp_line = line;
            bool temp_flag = 0;
            if (!( string_contains(line, c2s(" ")) ||  string_contains(line, c2s(":")) ||  string_contains(line, c2s("=")) ||  string_contains(line, c2s(",")))) {
                temp_line = _STR("println(%.*s)", line.len, line.str);
                temp_flag = 1;
            }
            
            string temp_source_code = string_add(string_add( array_string_join(lines, c2s("\n")), c2s("\n")), temp_line);
            os__write_file(temp_file, temp_source_code);
            string s = os__exec(_STR("z run %.*s -repl", temp_file.len, temp_file.str));
            if ( string_contains(s, c2s("panic: "))) {
                if (! string_contains(s, c2s("declared and not used"))) {
                    array_string vals =  string_split(s, c2s("\n"));
                    for (int i = 1;i < vals.len;i++) { 
                        println(( *(string*) array_get(vals,i) ));
                    }
                }
                else {
                    _PUSH(&lines, (line), string, tmp1);
                }
                
            }
            else {
                _PUSH(&lines, (line), string, tmp2);
                array_string vals =  string_split(s, c2s("\n"));
                for (int i = 0;i < vals.len - 1;i++) { 
                    println(( *(string*) array_get(vals,i) ));
                }
            }
            
        }
        
    }
    os__rm(file);
    os__rm(temp_file);
    return lines;
}
void Parser_return_st(Parser* self) { //fang
     Parser_check(self, Token_key_return);
    bool fn_returns = string_ne(self->cur_fn->ret_type, c2s("void"));
    if (fn_returns) {
        if (self->tok == Token_rcbr) {
             Parser_error(self, _STR("%.*s 需要返回 %.*s", self->cur_fn->name.len, self->cur_fn->name.str, self->cur_fn->ret_type.len, self->cur_fn->ret_type.str));
        }
        else {
            self->z_log = string_add(self->z_log, c2s("<return>"));
            int ph =  GenC_biaoqian(self->genc);
            string expr_type =  Parser_bool_expression(self);
            if ( string_starts_with(self->cur_fn->ret_type, c2s("Option_")) &&  string_ends_with(self->cur_fn->ret_type, expr_type)) {
                string data =  Parser_get_add_digit(self, c2s("_data_"));
                string _ret_ =  string_right(self->genc->cur_line, ph);
                self->genc->cur_line = c2s("");
                 Parser_genln(self, _STR("%.*s %.*s = (%.*s)(%.*s);", expr_type.len, expr_type.str, data.len, data.str, expr_type.len, expr_type.str, _ret_.len, _ret_.str));
                 Parser_gen(self, _STR("return opt_ok(&%.*s, sizeof(%.*s));", data.len, data.str, expr_type.len, expr_type.str));
            }
            else {
                string _ret_ =  string_right(self->genc->cur_line, ph);
                self->genc->cur_line = _STR("return %.*s", _ret_.len, _ret_.str);
            }
            
             Parser_check_types(self, expr_type, self->cur_fn->ret_type, 1);
        }
        
    }
    else {
        if (string_eq(self->cur_fn->name, c2s("main"))) {
             Parser_gen(self, c2s("return 0"));
        }
        else {
             Parser_gen(self, c2s("return"));
        }
        
    }
    
    self->returns = 1;
}
Scanner* new_Scanner(string file_path) { //fang
    if (!os__file_exists(file_path)) {
        z_panic(_STR("scanner: \"%.*s\" 不存在", file_path.len, file_path.str));
    }
    
    Option_string _opt_1= os__read_file(file_path);
    if (!_opt_1.ok) {
    string err = _opt_1.error;
    printf("%.*s", err.len, err.str);
    exit(1);
    }
    string text = *(string*) _opt_1.data;
    Scanner* scanner = ALLOC_INIT(Scanner, {.file_path = file_path, .text = text, .pos = 0, .prev_line_pos = 0, .line_nr = 0, .line_pos = 0, .col_nr = 0, .line_tok_nr = 0, .tok_pos = 0, .inside_string = 0, .dollar_start = 0, .dollar_end = 0, .debug = 0, .line_comment = c2s(""), .started = 0, .re_nl = 0, .fmt_indent = 0, .err = 0, .err_pos = 0, .err_line = 0, .err_msg = c2s("")});
    return scanner;
}
ScanRes scan_res(Token tok, string lit) { //fang
    return (/*&C.*/ScanRes){tok, lit};
}
string Scanner_ident_name(Scanner* self) { //fang
    int start = self->pos;
    while (1) {
        self->pos++;
        if (self->pos >= self->text.len) {
            break;
        }
        
        char c = string_at(self->text, self->pos);
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_') {
            continue;
        }
        
        break;
    }
    string name =  string_substr(self->text, start, self->pos);
    self->pos--;
    return name;
}
string Scanner_ident_number(Scanner* self) { //fang
    int start = self->pos;
    bool is_hex = self->pos + 1 < self->text.len && string_at(self->text, self->pos) == '0' && string_at(self->text, self->pos + 1) == 'x';
    bool is_oct = !is_hex && string_at(self->text, self->pos) == '0';
    bool is_float = 0;
    while (1) {
        self->pos++;
        if (self->pos >= self->text.len) {
            break;
        }
        
        char c = string_at(self->text, self->pos);
        if (c == '.') {
            is_float = 1;
        }
        
        if (!is_hex && c == 'e' && self->pos + 1 < self->text.len) {
            char next = string_at(self->text, self->pos + 1);
            if (next == '+' || next == '-' ||  char_is_digit(next)) {
                continue;
            }
            
        }
        
        bool is_good_hex = is_hex && (c == 'x' || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
        if (! char_is_digit(c) && c != '.' && !is_good_hex) {
            break;
        }
        
        if (c == '.' && self->pos + 1 < self->text.len && string_at(self->text, self->pos + 1) == '.') {
            break;
        }
        
        if (is_oct && c >= '8' && !is_float) {
             Scanner_error(self, c2s("畸形八进制|octal"));
        }
        
    }
    string number =  string_substr(self->text, start, self->pos);
    self->pos--;
    return number;
}
bool is_name_char(char c) { //fang
    return c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool is_white(char c) { //fang
    int n = (int)(c);
    return n == 9 || n == 10 || n == 13 || n == 32;
}
bool is_nl(char c) { //fang
    return c == '\r' || c == '\n';
}
void Scanner_skip_whitespace(Scanner* self) { //fang
    while (self->pos < self->text.len && is_white(string_at(self->text, self->pos))) {
        if (is_nl(string_at(self->text, self->pos))) {
            if (!(string_at(self->text, self->pos) == '\n' && string_at(self->text, self->pos - 1) == '\r')) {
                self->line_nr++;
                self->line_tok_nr = 0;
                self->prev_line_pos = self->line_pos;
                self->line_pos = self->pos;
            }
            
            if (self->re_nl) {
                return;
            }
            
        }
        
        self->pos++;
    }
}
ScanRes Scanner_scan(Scanner* self) { //fang
    if (self->started) {
        self->pos++;
    }
    else {
        self->started = 1;
    }
    
    if (self->pos >= self->text.len) {
        return scan_res(Token_eof, c2s(""));
    }
    
    if (self->err) {
        int i = 0;
        while (1) {
            self->pos++;
            char c = string_at(self->text, self->pos);
            if (c == '\n') {
                i++;
                if (i == 2) {
                    break;
                }
                
            }
            
        }
        self->err_msg =  string_substr(self->text, self->err_line, self->pos);
        self->err = 0;
    }
    
    if (!self->inside_string) {
         Scanner_skip_whitespace(self);
    }
    
    if (self->re_nl && string_at(self->text, self->pos) == '\n' || self->re_nl && (string_at(self->text, self->pos) == '\n' || string_at(self->text, self->pos) == '\r')) {
        return scan_res(Token_nl, c2s("\n"));
    }
    
    self->tok_pos = self->pos;
    if (self->dollar_end) {
        self->line_tok_nr++;
        if (string_at(self->text, self->pos) == SINGLE_QUOTE) {
            self->dollar_end = 0;
            return scan_res(Token_STRING, c2s(""));
        }
        
        self->dollar_end = 0;
        return scan_res(Token_STRING,  Scanner_ident_string(self));
    }
    
     Scanner_skip_whitespace(self);
    if (self->pos >= self->text.len) {
        return scan_res(Token_eof, c2s(""));
    }
    
    self->line_tok_nr++;
    char c = string_at(self->text, self->pos);
    char nextc = '\0';
    if (self->pos + 1 < self->text.len) {
        nextc = string_at(self->text, self->pos + 1);
    }
    
    if (is_name_char(c)) {
        string name =  Scanner_ident_name(self);
        char next_char = (self->pos + 1 < self->text.len)?(string_at(self->text, self->pos + 1)):('\0');
        if (is_key(name)) {
            return scan_res(key_to_token(name), name);
        }
        
        if (self->inside_string) {
            if (next_char == SINGLE_QUOTE) {
                self->pos++;
                self->dollar_start = 0;
                self->inside_string = 0;
            }
            
        }
        
        if (self->dollar_start && next_char != '.') {
            self->dollar_end = 1;
            self->dollar_start = 0;
        }
        
        if (self->pos == 0 && next_char == ' ') {
            self->pos++;
        }
        
        return scan_res(Token_NAME, name);
    }
    else if ( char_is_digit(c) || c == '.' &&  char_is_digit(nextc)) {
        string num =  Scanner_ident_number(self);
        return scan_res(Token_NUMBER, num);
    }
    
    /*switch*/
    if ((c == '+')) {/* case 0*/
        if (nextc == '+') {
            self->pos++;
            return scan_res(Token_inc, c2s("++"));
        }
        else if (nextc == '=') {
            self->pos++;
            return scan_res(Token_plus_assign, c2s("+="));
        }
        
        return scan_res(Token_plus, c2s("+"));
    }
    else if ((c == '-')) {/* case 1*/
        if (nextc == '-') {
            self->pos++;
            return scan_res(Token_dec, c2s("--"));
        }
        else if (nextc == '=') {
            self->pos++;
            return scan_res(Token_minus_assign, c2s("-="));
        }
        
        return scan_res(Token_minus, c2s("-"));
    }
    else if ((c == '*')) {/* case 2*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_mult_assign, c2s("*="));
        }
        
        return scan_res(Token_mul, c2s("*"));
    }
    else if ((c == '^')) {/* case 3*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_xor_assign, c2s("^="));
        }
        
        return scan_res(Token_xor, c2s("^"));
    }
    else if ((c == '%')) {/* case 4*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_mod_assign, c2s("%="));
        }
        
        return scan_res(Token_mod, c2s("%"));
    }
    else if ((c == '?')) {/* case 5*/
        return scan_res(Token_question, c2s("?"));
    }
    else if ((c == SINGLE_QUOTE)) {/* case 6*/
        return scan_res(Token_STRING,  Scanner_ident_string(self));
    }
    else if ((c == '\`')) {/* case 7*/
        return scan_res(Token_CHAR,  Scanner_ident_char(self));
    }
    else if ((c == '(')) {/* case 8*/
        return scan_res(Token_lpar, c2s("("));
    }
    else if ((c == ')')) {/* case 9*/
        return scan_res(Token_rpar, c2s(")"));
    }
    else if ((c == '[')) {/* case 10*/
        return scan_res(Token_lsbr, c2s("["));
    }
    else if ((c == ']')) {/* case 11*/
        return scan_res(Token_rsbr, c2s("]"));
    }
    else if ((c == '{')) {/* case 12*/
        if (self->inside_string) {
            return  Scanner_scan(self);
        }
        
        return scan_res(Token_lcbr, c2s("{"));
    }
    else if ((c == '$')) {/* case 13*/
        return scan_res(Token_dollar, c2s("$"));
    }
    else if ((c == '}')) {/* case 14*/
        if (self->inside_string) {
            self->pos++;
            if (string_at(self->text, self->pos) == SINGLE_QUOTE) {
                self->inside_string = 0;
                return scan_res(Token_STRING, c2s(""));
            }
            
            return scan_res(Token_STRING,  Scanner_ident_string(self));
        }
        else {
            return scan_res(Token_rcbr, c2s("}"));
        }
        
    }
    else if ((c == '&')) {/* case 15*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_and_assign, c2s("&="));
        }
        
        if (nextc == '&') {
            self->pos++;
            return scan_res(Token_and, c2s("&&"));
        }
        
        return scan_res(Token_amp, c2s("&"));
    }
    else if ((c == '|')) {/* case 16*/
        if (nextc == '|') {
            self->pos++;
            return scan_res(Token_oror, c2s("||"));
        }
        
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_or_assign, c2s("|="));
        }
        
        return scan_res(Token_pipe, c2s("|"));
    }
    else if ((c == ',')) {/* case 17*/
        return scan_res(Token_comma, c2s(","));
    }
    else if ((c == '\r')) {/* case 18*/
        if (nextc == '\n') {
            self->line_nr++;
            self->line_tok_nr = 0;
            self->prev_line_pos = self->line_pos;
            self->line_pos = self->pos;
            self->pos++;
            return scan_res(Token_nl, c2s("\r"));
        }
        
    }
    else if ((c == '\n')) {/* case 19*/
        self->line_nr++;
        self->line_tok_nr = 0;
        self->prev_line_pos = self->line_pos;
        self->line_pos = self->pos;
        return scan_res(Token_nl, c2s("\n"));
    }
    else if ((c == '.')) {/* case 20*/
        if (nextc == '.') {
            self->pos++;
            return scan_res(Token_dotdot, c2s(".."));
        }
        
        return scan_res(Token_dot, c2s("."));
    }
    else if ((c == '#')) {/* case 21*/
        int start = self->pos + 1;
        while (self->pos < self->text.len && string_at(self->text, self->pos) != '\n') {
            self->pos++;
        }
        self->line_nr++;
        self->line_tok_nr = 0;
        self->prev_line_pos = self->line_pos;
        self->line_pos = self->pos;
        string hash =  string_substr(self->text, start, self->pos);
        if (self->re_nl) {
            self->pos--;
        }
        
        return scan_res(Token_hash,  string_trim_space(hash));
    }
    else if ((c == '>')) {/* case 22*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_ge, c2s(">="));
        }
        else if (nextc == '>') {
            if (self->pos + 2 < self->text.len && string_at(self->text, self->pos + 2) == '=') {
                self->pos += 2;
                return scan_res(Token_righ_shift_assign, c2s(">>="));
            }
            
            self->pos++;
            return scan_res(Token_righ_shift, c2s(">>"));
        }
        else {
            return scan_res(Token_gt, c2s(">"));
        }
        
    }
    else if ((c == '<')) {/* case 23*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_le, c2s("<="));
        }
        else if (nextc == '<') {
            if (self->pos + 2 < self->text.len && string_at(self->text, self->pos + 2) == '=') {
                self->pos += 2;
                return scan_res(Token_left_shift_assign, c2s("<<="));
            }
            
            self->pos++;
            return scan_res(Token_left_shift, c2s("<<"));
        }
        else {
            return scan_res(Token_lt, c2s("<"));
        }
        
    }
    else if ((c == '=')) {/* case 24*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_eq, c2s("=="));
        }
        else if (nextc == '>') {
            self->pos++;
            return scan_res(Token_arrow, c2s("=>"));
        }
        else {
            return scan_res(Token_assign, c2s("="));
        }
        
    }
    else if ((c == ':')) {/* case 25*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_decl_assign, c2s(":="));
        }
        else {
            return scan_res(Token_colon, c2s(":"));
        }
        
    }
    else if ((c == ';')) {/* case 26*/
        return scan_res(Token_semicolon, c2s(";"));
    }
    else if ((c == '!')) {/* case 27*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_ne, c2s("!="));
        }
        else {
            return scan_res(Token_not, c2s("!"));
        }
        
    }
    else if ((c == '~')) {/* case 28*/
        return scan_res(Token_bit_not, c2s("~"));
    }
    else if ((c == '/')) {/* case 29*/
        if (nextc == '=') {
            self->pos++;
            return scan_res(Token_div_assign, c2s("/="));
        }
        
        if (nextc == '/') {
            int start = self->pos + 1;
            while (self->pos < self->text.len && string_at(self->text, self->pos) != '\n') {
                self->pos++;
            }
            self->line_nr++;
            self->line_tok_nr = 0;
            self->prev_line_pos = self->line_pos;
            self->line_pos = self->pos;
            self->line_comment =  string_substr(self->text, start + 1, self->pos);
            self->line_comment =  string_trim_space(self->line_comment);
            if (self->re_nl) {
                self->pos--;
            }
            else {
                return  Scanner_scan(self);
            }
            
            return scan_res(Token_line_com, self->line_comment);
        }
        
        if (nextc == '*') {
            int start = self->pos;
            self->pos++;
            int nest_count = 1;
            while (nest_count > 0) {
                self->pos++;
                if (self->pos >= self->text.len) {
                    self->line_nr--;
                     Scanner_error(self, c2s("注释没有结束"));
                }
                
                if (string_at(self->text, self->pos) == '\n') {
                    self->line_nr++;
                    self->line_tok_nr = 0;
                    self->prev_line_pos = self->line_pos;
                    self->line_pos = self->pos;
                    continue;
                }
                
                if (string_at(self->text, self->pos) == '/' && string_at(self->text, self->pos + 1) == '*') {
                    nest_count++;
                    self->pos++;
                    continue;
                }
                
                if (string_at(self->text, self->pos) == '*' && string_at(self->text, self->pos + 1) == '/') {
                    nest_count--;
                    self->pos++;
                }
                
            }
            int end = self->pos + 1;
            string comm =  string_substr(self->text, start, end);
            if (self->re_nl) {
                return scan_res(Token_mline_com, comm);
            }
            
            return  Scanner_scan(self);
        }
        
        return scan_res(Token_div, c2s("/"));
    }
    #ifdef _WIN32
        if (c == '\0') {
            return scan_res(Token_eof, c2s(""));
        }
        
    #endif
    println(_STR("(char code=%d) {行: %d 列:%dtk} pos= %d, len= %d;", c, self->line_nr + 1, self->line_tok_nr, self->pos, self->text.len));
    string msg = _STR("无效字符 `%.*s`", char_str(c).len, char_str(c).str);
    self->err;
    (msg); /*表达式语句*/
    return scan_res(Token_eof, c2s(""));
}
string Scanner_ident_string(Scanner* self) { //fang
    int start = self->pos;
    self->inside_string = 0;
    char slash = '\\';
    while (1) {
        self->pos++;
        if (self->pos >= self->text.len) {
            break;
        }
        
        char c = string_at(self->text, self->pos);
        char prevc = string_at(self->text, self->pos - 1);
        if (c == SINGLE_QUOTE && (prevc != slash || (prevc == slash && string_at(self->text, self->pos - 2) == slash))) {
            break;
        }
        
        if (c == '\r') {
            self->line_nr++;
            self->line_tok_nr = 0;
            self->prev_line_pos = self->line_pos;
            self->line_pos = self->pos;
        }
        
        if (c == '0' && self->pos > 2 && string_at(self->text, self->pos - 1) == '\\') {
             Scanner_error(self, c2s("字符串不允许 0 字符"));
        }
        
        if (c == '0' && self->pos > 5 && string_at(self->text, self->pos - 1) == '0' && string_at(self->text, self->pos - 2) == 'x' && string_at(self->text, self->pos - 3) == '\\') {
             Scanner_error(self, c2s("字符串不允许 x0 字符"));
        }
        
        if (c == '{' && prevc == '$' && string_at(self->text, self->pos - 2) != slash) {
            self->inside_string = 1;
            self->pos -= 2;
            break;
        }
        
        if (( char_is_letter(c) || c == '_') && prevc == '$' && string_at(self->text, self->pos - 2) != slash) {
            self->inside_string = 1;
            self->dollar_start = 1;
            self->pos -= 2;
            break;
        }
        
    }
    string lit = c2s("");
    if (string_at(self->text, start) == SINGLE_QUOTE) {
        start++;
    }
    
    int end = self->pos;
    if (self->inside_string) {
        end++;
    }
    
    if (start > self->pos) {
    }
    else {
        lit =  string_substr(self->text, start, end);
    }
    
    return lit;
}
string Scanner_ident_char(Scanner* self) { //fang
    int start = self->pos;
    char slash = '\\';
    int len = 0;
    while (1) {
        self->pos++;
        if (self->pos >= self->text.len) {
            break;
        }
        
        if (string_at(self->text, self->pos) != slash) {
            len++;
        }
        
        bool double_slash = string_at(self->text, self->pos - 1) == slash && string_at(self->text, self->pos - 2) == slash;
        if (string_at(self->text, self->pos) == '\`' && (string_at(self->text, self->pos - 1) != slash || double_slash)) {
            if (double_slash) {
                len++;
            }
            
            break;
        }
        
    }
    len--;
    string c =  string_substr(self->text, start + 1, self->pos);
    if (len != 1) {
        ustring u =  string_ustring(c);
        if (u.len != 1) {
             Scanner_error(self, _STR("字符长度为1个, 1 \ %d)", len));
        }
        
    }
    
    return c;
}
ScanRes Parser_peek(Parser* self) { //fang
    while (1) {
        ScanRes res =  Scanner_peek(self->scanner);
        if (res.tok != Token_nl) {
            return res;
        }
        
    }
}
ScanRes Scanner_peek(Scanner* self) { //fang
    int pos = self->pos;
    int l_n = self->line_nr;
    int l_c = self->line_tok_nr;
    bool inside_string = self->inside_string;
    bool dollar_start = self->dollar_start;
    bool dollar_end = self->dollar_end;
    ScanRes res =  Scanner_scan(self);
    self->inside_string = inside_string;
    self->dollar_start = dollar_start;
    self->dollar_end = dollar_end;
    self->pos = pos;
    self->line_nr = l_n;
    self->line_tok_nr = l_c;
    return res;
}
void Scanner_debug_tokens(Scanner* self) { //fang
    self->pos = 0;
    string fname =  string_all_after(self->file_path, c2s("/"));
    println(c2s("\n===== 调试token ====="));
    println(_STR("\n--- %.*s ---", fname.len, fname.str));
    self->debug = 1;
    while (1) {
        ScanRes res =  Scanner_scan(self);
        Token tok = res.tok;
        string lit = res.lit;
        println(_STR("%d        `%.*s`", tok, lit.len, lit.str));
        if (tok == Token_eof) {
            println(c2s("===== 结束 ====="));
            break;
        }
        
    }
}
void Scanner_error(Scanner* self, string msg) { //fang
    println(_STR("\n文件: %.*s  行:%d, 列:%dtk", self->file_path.len, self->file_path.str, self->line_nr + 1, self->line_tok_nr));
    println(c2s("=== 错误行扫描 ================================"));
    self->err = 1;
     Scanner_scan(self);
    println(_STR("%.*s\n", self->err_msg.len, self->err_msg.str));
    println(c2s("=== 跟踪信息 =================================="));
    println(msg);
    println(c2s("==============================================="));
    z_exit(1);
}
string Parser_statements(Parser* self) { //fang
     Parser_log(self, c2s("语句"));
    string typ =  Parser_statements_no_curly_end(self);
    if (!self->inside_if_expr) {
         Parser_genln(self, c2s("}"));
    }
    
    return typ;
}
string Parser_statements_no_curly_end(Parser* self) { //fang
     Fn_open_scope(self->cur_fn);
    int i = 0;
    string last_st_typ = c2s("");
    while (self->tok != Token_rcbr && self->tok != Token_key_case && self->tok != Token_key_default && self->tok != Token_eof) {
        last_st_typ =  Parser_statement(self, 1);
        i++;
        if (i > 1000) {
             GenC_save(self->genc);
             Parser_error(self, _STR("%.*s > 1000条语句", self->cur_fn->name.len, self->cur_fn->name.str));
        }
        
    }
    if (self->tok != Token_key_case && self->tok != Token_key_default) {
         Parser_check(self, Token_rcbr);
    }
    else if (self->tok == Token_key_case || self->tok == Token_key_default) {
         Parser_fmt_dec(self);
    }
    
     Fn_close_scope(self->cur_fn);
    return last_st_typ;
}
string Parser_statement(Parser* self, bool add_semi) { //fang
    self->z_log = c2s("--- 语句 ---\n");
    self->genc->is_tmp = 0;
    Token tok = self->tok;
    string typ = c2s("");
    self->line_pos = self->scanner->line_pos;
    /*match*/
    if ((tok == Token_NAME)) {/* case 0*/
        if ( Parser_peek(self).tok == Token_colon) {
            string label =  Parser_check_name(self);
             Parser_genln(self, string_add(label, c2s(":")));
             Parser_check(self, Token_colon);
            return c2s("");
        }
        else if ( Parser_peek(self).tok == Token_decl_assign) {
             Parser_log(self, c2s("var decl"));
             Parser_var_decl(self);
        }
        else if (string_eq(self->lit, c2s("jsdecode"))) {
        }
        else if ( Table_known_type(self->table, self->lit) && ( Parser_peek(self).tok == Token_mul ||  Parser_peek(self).tok == Token_NAME)) {
            string rt =  Parser_get_type(self);
            if (self->tok == Token_mul) {
                rt = string_add(rt, c2s("*"));
                 Parser_next(self);
            }
            
             Parser_v_decl(self, rt);
            return c2s("");
        }
        else {
            typ =  Parser_bool_expression(self);
        }
        
    }
    else if ((tok == Token_key_goto)) {/* case 1*/
         Parser_check(self, Token_key_goto);
        string label =  Parser_check_name(self);
         Parser_genln(self, _STR("goto %.*s;", label.len, label.str));
        return c2s("");
    }
    else if ((tok == Token_hash)) {/* case 2*/
         Parser_chash(self);
         Parser_genln(self, c2s(""));
        return c2s("");
    }
    else if ((tok == Token_dollar)) {/* case 3*/
         Parser_comp_time(self);
        return c2s("");
    }
    else if ((tok == Token_key_var) ||  (tok == Token_key_let) ||  (tok == Token_key_static)) {/* case 4*/
         Parser_var_decl(self);
    }
    else if ((tok == Token_key_if)) {/* case 5*/
         Parser_if_st(self, 0, 0);
         Parser_genln(self, c2s(""));
        return c2s("");
    }
    else if ((tok == Token_key_switch) ||  (tok == Token_key_match)) {/* case 6*/
         Parser_switch_stat(self);
        return c2s("");
    }
    else if ((tok == Token_key_for)) {/* case 7*/
         Parser_for_st(self);
        return c2s("");
    }
    else if ((tok == Token_key_continue)) {/* case 8*/
        if (self->for_expr_cnt == 0) {
             Parser_error(self, c2s("for\continue"));
        }
        
         Parser_genln(self, c2s("continue;"));
         Parser_check(self, Token_key_continue);
        return c2s("");
    }
    else if ((tok == Token_key_break)) {/* case 9*/
        if (self->for_expr_cnt == 0) {
             Parser_error(self, c2s("for\break"));
        }
        
         Parser_genln(self, c2s("break;"));
         Parser_check(self, Token_key_break);
        return c2s("");
    }
    else if ((tok == Token_key_return)) {/* case 10*/
         Parser_return_st(self);
    }
    else if ((tok == Token_lcbr)) {/* case 11*/
         Parser_check(self, Token_lcbr);
         Parser_genln(self, c2s("/*{块}*/{"));
         Parser_statements(self);
        return c2s("");
    }
    else if ((tok == Token_key_go)) {/* case 12*/
         Parser_go_stat(self);
    }
    else  { //else 13
        typ =  Parser_expression(self);
        if (self->inside_if_expr) {
        }
        else {
             Parser_genln(self, c2s("; /*表达式语句*/"));
        }
        
        return typ;
    }
    if (self->inside_if_expr && self->tok != Token_rcbr) {
         Parser_gen(self, c2s(", "));
    }
    
    if (add_semi && !self->inside_if_expr) {
         Parser_genln(self, c2s(";"));
    }
    
    return typ;
}
void Parser_char_expr(Parser* self) { //fang
     Parser_gen(self, _STR("\'%.*s\'", self->lit.len, self->lit.str));
     Parser_next(self);
}
void Parser_string_expr(Parser* self) { //fang
    self->z_log = string_add(self->z_log, c2s("<string>"));
    string str = self->lit;
    if ( Parser_peek(self).tok != Token_dollar) {
        string f = format_str(str);
        if (self->calling_c) {
             Parser_gen(self, _STR("\"%.*s\"", f.len, f.str));
        }
        else {
             Parser_gen(self, _STR("c2s(\"%.*s\")", f.len, f.str));
        }
        
         Parser_next(self);
        return;
    }
    
    string args = c2s("\"");
    string format = c2s("\"");
    while (self->tok == Token_STRING) {
        self->lit =  string_replace(self->lit, c2s("%"), c2s("%%"));
        format = string_add(format, format_str(self->lit));
         Parser_next(self);
        if (self->tok != Token_dollar) {
            continue;
        }
        
         Parser_next(self);
         GenC_start_tmp(self->genc);
        string typ =  Parser_bool_expression(self);
        string val =  GenC_end_tmp(self->genc);
        val =  string_trim_space(val);
        args = string_add(args, _STR(", %.*s", val.len, val.str));
        if (string_eq(typ, c2s("string"))) {
            args = string_add(args, _STR(".len, %.*s.str", val.len, val.str));
        }
        
        if (string_eq(typ, c2s("ustring"))) {
            args = string_add(args, _STR(".len, %.*s.s.str", val.len, val.str));
        }
        
        bool custom = self->tok == Token_colon;
        if (custom) {
            format = string_add(format, c2s("%"));
             Parser_next(self);
            if (self->tok == Token_dot) {
                format = string_add(format, c2s("."));
                 Parser_next(self);
            }
            
            format = string_add(format, self->lit);
             Parser_next(self);
            format = string_add(format, self->lit);
             Parser_next(self);
        }
        else {
            string f =  Parser_typ_to_fmt(self, typ, 0);
            if (string_eq(f, c2s(""))) {
                 Parser_error(self, _STR("不能格式化 \"%.*s\" ", typ.len, typ.str));
            }
            
            format = string_add(format, f);
        }
        
    }
    if (self->genc->nogen) {
        return;
    }
    
    string cur_line =  string_trim_space(self->genc->cur_line);
    if ( string_contains(cur_line, c2s("println (")) && self->tok != Token_plus && ! string_contains(cur_line, c2s("string_add")) && ! string_contains(cur_line, c2s("eprintln"))) {
        self->genc->cur_line =  string_replace(cur_line, c2s("println ("), c2s("printf("));
         Parser_gen(self, _STR("%.*s\\n%.*s", format.len, format.str, args.len, args.str));
        return;
    }
    
    if (self->tok == Token_not) {
         Parser_check(self, Token_not);
         Parser_gen(self, _STR("_STR_TMP(%.*s%.*s)", format.len, format.str, args.len, args.str));
    }
    else {
         Parser_gen(self, _STR("_STR(%.*s%.*s)", format.len, format.str, args.len, args.str));
    }
    
}
void Parser_type_decl(Parser* self) { //fang
     Parser_check(self, Token_key_type);
    string name =  Parser_check_name(self);
    string parent =  Parser_get_type(self);
    string nt_pair =  Table_gen_c_type_name_pair(self->table, parent, name);
    string _struct = (! string_contains(parent, c2s("[")) && ! string_starts_with(parent, c2s("fn ")) && ! Table_known_type(self->table, parent))?(c2s("struct")):(c2s(""));
     Parser_gen_typedef(self, _STR("typedef %.*s %.*s;", _struct.len, _struct.str, nt_pair.len, nt_pair.str));
     Parser_register_parent_with_type(self, parent, name);
}
void Parser_typedef_decl(Parser* self) { //fang
     Parser_check(self, Token_key_typedef);
    string parent =  Parser_get_type(self);
    string name =  Parser_check_name(self);
    string nt_pair =  Table_gen_c_type_name_pair(self->table, parent, name);
    string _struct = (! string_contains(parent, c2s("[")) && ! string_starts_with(parent, c2s("fn ")) && ! Table_known_type(self->table, parent))?(c2s("struct")):(c2s(""));
     Parser_gen_typedef(self, _STR("typedef %.*s %.*s;", _struct.len, _struct.str, nt_pair.len, nt_pair.str));
     Parser_register_parent_with_type(self, parent, name);
}
void Parser_struct_decl(Parser* self) { //fang
    self->z_log = c2s("----->>-----\n");
     Parser_log2(self, c2s("cyan"), c2s("string"));
    string objc_parent = c2s("");
    bool is_objc = 0;
    bool is_interface = self->tok == Token_key_interface;
    bool is_union = self->tok == Token_key_union;
    bool is_struct = self->tok == Token_key_struct || self->tok == Token_key_typec;
    bool is_typec = self->tok == Token_key_typec;
     Parser_next(self);
    string class_name =  Parser_check_name(self);
    string orig_name = class_name;
    if (is_typec && self->tok != Token_dot && self->tok != Token_colon && self->tok != Token_lcbr) {
        string parent = class_name;
        string name =  Parser_check_name(self);
        string nt_pair =  Table_gen_c_type_name_pair(self->table, parent, name);
        string _struct = (! string_contains(parent, c2s("[")) && ! string_starts_with(parent, c2s("fn ")) && ! Table_known_type(self->table, parent))?(c2s("struct")):(c2s(""));
         Parser_gen_typedef(self, _STR("typedef %.*s %.*s;", _struct.len, _struct.str, nt_pair.len, nt_pair.str));
         Parser_register_parent_with_type(self, parent, name);
        return;
    }
    
    if (self->pref->is_play &&  string_contains(class_name, c2s("_"))) {
         Parser_error(self, c2s("类型名 不能用 _"));
    }
    
    bool is_c = string_eq(class_name, c2s("C")) && self->tok == Token_dot;
    if (is_c) {
         Parser_check(self, Token_dot);
        class_name =  Parser_check_name(self);
    }
    
    if (!is_c && !self->neibu_bao && string_ne(self->mod, c2s("main"))) {
        class_name = _STR("%.*s__%.*s", self->mod.len, self->mod.str, class_name.len, class_name.str);
    }
    
    self->z_log = string_add(self->z_log, class_name);
    if (self->run == Pass_decl &&  Table_known_type(self->table, class_name)) {
         Parser_error(self, _STR("重复声明`%.*s`", class_name.len, class_name.str));
    }
    
    if (self->tok == Token_colon) {
        objc_parent =  Parser_check_name(self);
         Parser_gen_type(self, _STR("@interface %.*s : %.*s { @public", class_name.len, class_name.str, objc_parent.len, objc_parent.str));
        is_objc = 1;
    }
    else {
        if (!is_c) {
            string kind = (is_union)?(c2s("union")):(c2s("struct"));
             Parser_gen_typedef(self, _STR("typedef %.*s %.*s %.*s;", kind.len, kind.str, class_name.len, class_name.str, class_name.len, class_name.str));
             Parser_gen_type(self, _STR("%.*s %.*s {", kind.len, kind.str, class_name.len, class_name.str));
        }
        
    }
    
    Type* typ =  Table_find_type(self->table, class_name);
    bool is_ph = 0;
    if (typ->is_JiMing) {
        is_ph = 1;
        typ->name = class_name;
        typ->mod = self->mod;
        typ->is_c = is_c;
        typ->is_JiMing = 0;
        is_struct:
        1; /*表达式语句*/
    }
    else {
        typ = ALLOC_INIT(Type, {.name = class_name, .orig_name = orig_name, .mod = self->mod, .is_c = is_c, .is_interface = is_interface, .is_struct = 1, .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .parent = c2s(""), .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), .is_JiMing = 0});
    }
    
    if (is_c && is_struct && self->tok != Token_lcbr) {
         Table_register_type2(self->table, *typ);
        return;
    }
    
     Parser_check(self, Token_lcbr);
    if (self->tok == Token_colon) {
         Parser_next(self);
    }
    
    bool is_pri = 0;
    bool is_let = 0;
    array_string attributes = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    self->z_log = string_add(self->z_log, c2s(" { \n"));
    while (self->tok != Token_rcbr && self->tok != Token_key_fnc) {
        if (self->tok == Token_key_pri) {
            if (is_pri) {
                 Parser_error(self, c2s("pri:只能一个,必须分组"));
            }
            
            is_pri = 1;
             Parser_check(self, Token_key_pub);
            if (self->tok != Token_key_let) {
                 Parser_check(self, Token_colon);
            }
            
        }
        
        if (self->tok == Token_key_let) {
            if (is_let) {
                 Parser_error(self, c2s("let:只能一个,必须分组"));
            }
            
            is_let = 1;
             Parser_next(self);
            if (self->tok != Token_key_let) {
                 Parser_check(self, Token_colon);
            }
            
        }
        
        string attr_type =  Parser_get_type(self);
        if (self->tok == Token_mul) {
            attr_type = string_add(attr_type, c2s("*"));
             Parser_next(self);
        }
        
        if (self->tok == Token_minus) {
            is_let = 1;
             Parser_next(self);
        }
        
        string attr_name =  Parser_check_name(self);
        self->z_log = string_add(string_add(string_add(self->z_log, c2s("     ")), attr_name), c2s("\n"));
        if (self->tok == Token_lpar) {
        }
        
        if (_IN(string, attr_name, attributes)) {
            println(_STR("重复属性|attr %.*s", attr_name.len, attr_name.str));
            continue;
        }
        
        _PUSH(&attributes, (attr_name), string, tmp1);
        if (is_interface) {
             Type_add_method(typ, * Parser_interface_method(self, attr_name, class_name));
            continue;
        }
        
        AccessMod access_mod = (is_pri)?(AccessMod_private):(AccessMod_public);
        bool is_atomic = self->tok == Token_key_atomic;
        if (is_atomic) {
             Parser_next(self);
             Parser_gen_type(self, c2s("_Atomic "));
        }
        
        if (!is_c) {
             Parser_gen_type(self, string_add(string_add(c2s("    "),  Table_gen_c_type_name_pair(self->table, attr_type, (string_add(attr_name, self->_arr_ss)))), c2s(";")));
            self->_arr_ss = c2s("");
        }
        
        string attri = c2s("");
         Type_add_attr(typ, attr_name, attr_type, is_let, attri, access_mod);
    }
    if (!is_ph && self->run == Pass_decl) {
         Table_register_type2(self->table, *typ);
    }
    
    if (!is_c) {
         Parser_gen_type(self, c2s("}; "));
    }
    
    if (is_objc) {
         Parser_gen_type(self, c2s("@end"));
    }
    
    self->z_log = c2s("struct -- 完成 --");
    if (self->tok == Token_key_fnc) {
        self->z_log = c2s("struct -- fn --");
        while (self->tok == Token_key_fnc) {
            self->z_type = class_name;
             Parser_fn_decl(self);
        }
        self->z_type = c2s("");
        self->z_self = c2s("");
    }
    
     Parser_check(self, Token_rcbr);
}
void Parser_switch_stat(Parser* self) { //fang
    self->z_log = c2s("<switch>");
    bool is_match = self->tok == Token_key_match;
     Parser_next(self);
     GenC_start_tmp(self->genc);
    string typ =  Parser_bool_expression(self);
    string expr =  GenC_end_tmp(self->genc);
     Parser_check(self, Token_lcbr);
     Parser_fmt_dec(self);
    if (is_match) {
         Parser_genln(self, c2s("/*match*/"));
    }
    else {
         Parser_genln(self, c2s("/*switch*/"));
    }
    
    int i = 0;
    while ((!is_match && self->tok == Token_key_case || self->tok == Token_key_default) || (is_match && self->tok != Token_rcbr)) {
        self->expected_type = typ;
        if (self->tok == Token_key_default || self->tok == Token_key_else) {
             Parser_genln(self, _STR("else  { //else %d", i));
             Parser_next(self);
            if ((!is_match && self->tok == Token_colon) || (is_match && self->tok == Token_lcbr)) {
                if (self->tok == Token_colon) {
                    self->scanner->fmt_indent++;
                    self->genc->fmt_indent = strings__repeat2(c2s("    "), self->scanner->fmt_indent);
                }
                
                 Parser_next(self);
            }
            else {
                 Parser_error(self, c2s("switch{ case expr`:` } | match{ expr `{`  } }"));
            }
            
             Parser_statements(self);
            break;
        }
        
        if (i > 0) {
             Parser_gen(self, c2s("else "));
        }
        
         Parser_gen(self, c2s("if ("));
        if (self->tok == Token_key_case && !is_match) {
             Parser_next(self);
        }
        
        bool got_comma = 0;
        while (1) {
            if (got_comma) {
                 Parser_gen(self, c2s(") ||  "));
            }
            
            if (string_eq(typ, c2s("string"))) {
                 Parser_gen(self, _STR("string_eq(%.*s, ", expr.len, expr.str));
            }
            else {
                 Parser_gen(self, _STR("(%.*s == ", expr.len, expr.str));
            }
            
             Parser_bool_expression(self);
            if (self->tok == Token_colon &&  Parser_peek(self).tok == Token_key_case && !is_match) {
                 Parser_next(self);
                goto l1;
                 Parser_next(self);
                got_comma = 1;
                continue;
            }
            
            if (self->tok != Token_comma && self->tok != Token_oror) {
                break;
            }
            
            l1:
             Parser_next(self);
            got_comma = 1;
        }
        if ((!is_match && self->tok == Token_colon) || (is_match && self->tok == Token_lcbr)) {
             Parser_gen(self, c2s(")) {"));
             Parser_genln(self, _STR("/* case %d*/", i));
            if (self->tok == Token_colon) {
                 Parser_fmt_inc(self);
            }
            
             Parser_next(self);
        }
        else {
             Parser_error(self, c2s("switch{ case expr`:` } | match{ expr `{`  } }"));
        }
        
         Parser_statements(self);
        i++;
    }
    if (is_match) {
         Parser_check(self, Token_rcbr);
         Parser_fmt_inc(self);
    }
    
}
void Type_add_attr(Type* self, string name, string typ, bool is_let, string attr, AccessMod access_mod) { //fang
    Var v = (/*&C.*/Var){.name = name, .type = typ, .ptr =  string_contains(typ, c2s("*")), .is_let = is_let, .attr = attr, .access_mod = access_mod, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    _PUSH(&self->attributes, (v), Var, tmp1);
}
Var Type_find_attr(Type* self, string name) { //fang
    array_Var _arr_2 = self->attributes;
    for (int _i_3 = 0; _i_3 < _arr_2.len; _i_3 ++) {
        Var attr = (((Var*) _arr_2.data)[_i_3]);
        if (string_eq(attr.name, name)) {
            return attr;
        }
        
    }
    return (/*&C.*/Var){.type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
}
bool Type_has_attr(Type* self, string name) { //fang
    Var attr =  Type_find_attr(self, name);
    return (string_ne(attr.name, c2s("")));
}
void Type_add_method(Type* self, Fn f) { //fang
    _PUSH(&self->methods, (f), Fn, tmp4);
}
bool Type_has_method(Type* self, string name) { //fang
    Fn m =  Type_find_method(self, name);
    return (string_ne(m.name, c2s("")));
}
Fn Type_find_method(Type* self, string name) { //fang
    array_Fn _arr_5 = self->methods;
    for (int _i_6 = 0; _i_6 < _arr_5.len; _i_6 ++) {
        Fn m = (((Fn*) _arr_5.data)[_i_6]);
        if (string_eq(m.name, name)) {
            return m;
        }
        
    }
    return (/*&C.*/Fn){.pkg = c2s(""), ._class = c2s(""), .orig_class = c2s(""), .name = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0};
}
bool Type_has_enum_val(Type* self, string name) { //fang
    return _IN(string, name, self->enum_vals);
}
string Type_str(Type* self) { //fang
    string s = _STR("\n--------------------------------------\ntype \"%.*s\" {", self->name.len, self->name.str);
    if (self->attributes.len > 0) {
        s = string_add(s, _STR("\n    属性[%d] :\n", self->attributes.len));
        array_Var _arr_7 = self->attributes;
        for (int _i_8 = 0; _i_8 < _arr_7.len; _i_8 ++) {
            Var attr = (((Var*) _arr_7.data)[_i_8]);
            s = string_add(s, _STR("\n    %.*s		%.*s", attr.type.len, attr.type.str, attr.name.len, attr.name.str));
        }
        s = string_add(s, c2s("\n"));
    }
    
    if (self->methods.len > 0) {
        s = string_add(s, _STR("\n    方法[%d] :\n", self->methods.len));
        array_Fn _arr_9 = self->methods;
        for (int _i_10 = 0; _i_10 < _arr_9.len; _i_10 ++) {
            Fn method = (((Fn*) _arr_9.data)[_i_10]);
            s = string_add(s, _STR("\n    %.*s", Fn_str(&method).len, Fn_str(&method).str));
        }
        s = string_add(s, c2s("\n"));
    }
    
    s = string_add(s, c2s("}\n--------------------------------------\n"));
    return s;
}
Table* new_Table(bool obfuscate) { //fang
    Table* self = ALLOC_INIT(Table, {.obf_ids = new_map(1, sizeof(int), "int"), .fns = new_map(1, sizeof(Fn), "Fn"), .obfuscate = obfuscate, .types = new_array(0, 1, sizeof(Type)), .consts = new_array(0, 1, sizeof(Var)), .imports = new_array(0, 1, sizeof(string)), .flags = new_array(0, 1, sizeof(string)), .fn_cnt = 0, });
     Table_register_type(self, c2s("int"));
     Table_register_type(self, c2s("size_t"));
     Table_register_type(self, c2s("va_list"));
     Table_register_type(self, c2s("f32"));
     Table_register_type(self, c2s("f64"));
     Table_register_type(self, c2s("rune"));
     Table_register_type(self, c2s("bool"));
     Table_register_type(self, c2s("void"));
     Table_register_parent_with_type(self, c2s("int"), c2s("i8"));
     Table_register_parent_with_type(self, c2s("int"), c2s("u8"));
     Table_register_parent_with_type(self, c2s("int"), c2s("i16"));
     Table_register_parent_with_type(self, c2s("int"), c2s("u16"));
     Table_register_parent_with_type(self, c2s("int"), c2s("i32"));
     Table_register_parent_with_type(self, c2s("int"), c2s("u32"));
     Table_register_parent_with_type(self, c2s("int"), c2s("i64"));
     Table_register_parent_with_type(self, c2s("int"), c2s("u64"));
     Table_register_parent_with_type(self, c2s("int"), c2s("char"));
     Table_register_parent_with_type(self, c2s("char"), c2s("byte"));
     Table_register_parent_with_type(self, c2s("map"), c2s("map_int"));
     Table_register_parent_with_type(self, c2s("map"), c2s("map_string"));
     Table_register_const(self, c2s("stdin"), c2s("int"), c2s("main"), 0);
     Table_register_const(self, c2s("stdout"), c2s("int"), c2s("main"), 0);
     Table_register_const(self, c2s("stderr"), c2s("int"), c2s("main"), 0);
     Table_register_const(self, c2s("errno"), c2s("int"), c2s("main"), 0);
    return self;
}
void Table_register_parent_with_type(Table* self, string parent, string typ) { //fang
    if (typ.len == 0) {
        return;
    }
    
    array_Type tmp11 = self->types ;
    for (int i = 0; i < tmp11.len; i ++) {
        Type ty = ((Type*) tmp11.data)[i];
        if (string_eq(ty.name, typ) && string_eq(ty.parent, parent)) {
            return;
        }
        
        if (string_eq(ty.name, typ) && string_eq(ty.parent, c2s(""))) {
            ( *(Type*) array_get(self->types,i) ).parent = parent;
            return;
        }
        
    }
    _PUSH(&self->types, ((/*&C.*/Type){.name = typ, .parent = parent, .mod = c2s(""), .orig_name = c2s(""), .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), .is_JiMing = 0}), Type, tmp12);
}
void Table_register_type(Table* self, string typ) { //fang
    if (typ.len == 0) {
        return;
    }
    
    array_Type _arr_13 = self->types;
    for (int _i_14 = 0; _i_14 < _arr_13.len; _i_14 ++) {
        Type ty = (((Type*) _arr_13.data)[_i_14]);
        if (string_eq(ty.name, typ)) {
            return;
        }
        
    }
    _PUSH(&self->types, ((/*&C.*/Type){.name = typ, .mod = c2s(""), .orig_name = c2s(""), .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .parent = c2s(""), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), .is_JiMing = 0}), Type, tmp15);
}
void Table_register_type2(Table* self, Type typ) { //fang
    if (typ.name.len == 0) {
        return;
    }
    
    array_Type _arr_16 = self->types;
    for (int _i_17 = 0; _i_17 < _arr_16.len; _i_17 ++) {
        Type ty = (((Type*) _arr_16.data)[_i_17]);
        if (string_eq(ty.name, typ.name)) {
            return;
        }
        
    }
    _PUSH(&self->types, (typ), Type, tmp18);
}
Type* Table_find_type(Table* self, string name) { //fang
    if ( string_ends_with(name, c2s("*")) && ! string_contains(name, c2s(" "))) {
        name =  string_replace(name, c2s("*"), c2s(""));
    }
    
    array_Type tmp19 = self->types ;
    for (int i = 0; i < tmp19.len; i ++) {
        Type ty = ((Type*) tmp19.data)[i];
        if (string_eq(ty.name, name)) {
            return &( *(Type*) array_get(self->types,i) );
        }
        
    }
    return ALLOC_INIT(Type, {.mod = c2s(""), .name = c2s(""), .orig_name = c2s(""), .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .parent = c2s(""), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), .is_JiMing = 0});
}
bool Table_known_type(Table* self, string typ) { //fang
    if ( string_ends_with(typ, c2s("*")) && ! string_contains(typ, c2s(" "))) {
        typ =  string_replace(typ, c2s("*"), c2s(""));
    }
    
    array_Type _arr_20 = self->types;
    for (int _i_21 = 0; _i_21 < _arr_20.len; _i_21 ++) {
        Type ty = (((Type*) _arr_20.data)[_i_21]);
        if (string_eq(ty.name, typ) && !ty.is_JiMing) {
            return 1;
        }
        
    }
    return 0;
}
void Parser_register_global(Parser* self, string name, string typ) { //fang
    _PUSH(&self->table->consts, ((/*&C.*/Var){.name = name, .type = typ, .is_const = 1, .is_global = 1, .mod = self->mod, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_import_const = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")}), Var, tmp22);
}
void Table_register_const(Table* self, string name, string typ, string mod, bool is_imp) { //fang
    _PUSH(&self->consts, ((/*&C.*/Var){.name = name, .type = typ, .type1 =  string_last_before(typ, c2s("_")), .type2 =  string_all_after(typ, c2s("_")), .is_const = 1, .is_import_const = is_imp, .mod = mod, .arr_ss = c2s(""), .is_let = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")}), Var, tmp23);
}
Var Table_find_const(Table* self, string name) { //fang
    array_Var _arr_24 = self->consts;
    for (int _i_25 = 0; _i_25 < _arr_24.len; _i_25 ++) {
        Var v = (((Var*) _arr_24.data)[_i_25]);
        if (string_eq(v.name, name)) {
            return v;
        }
        
    }
    return (/*&C.*/Var){.type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
}
bool Table_known_const(Table* self, string name) { //fang
    Var v =  Table_find_const(self, name);
    return v.name.len > 0;
}
void Table_register_fn(Table* self, Fn new_fn) { //fang
    Fn val26 = new_fn;
    map_set(&self->fns, new_fn.name, &val26);
}
Fn Table_find_fn(Table* self, string name) { //fang
    Fn val27 = {}; bool ok28 = map_get(self->fns, name, &val27);
    Fn f = val27;
    if (!isnil(f.name.str)) {
        return f;
    }
    
    return (/*&C.*/Fn){.pkg = c2s(""), ._class = c2s(""), .orig_class = c2s(""), .name = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0};
}
bool Table_known_fn(Table* self, string name) { //fang
    Fn f =  Table_find_fn(self, name);
    return string_ne(f.name, c2s(""));
}
Var Table_find_attr(Table* self, Type* typ, string name) { //fang
    Var attr =  Type_find_attr(typ, name);
    if (attr.name.len == 0 && typ->parent.len > 0) {
        Type* parent =  Table_find_type(self, typ->parent);
        return  Type_find_attr(parent, name);
    }
    
    return attr;
}
Fn Table_find_method(Table* self, Type* typ, string name) { //fang
    Fn method =  Type_find_method(typ, name);
    if (method.name.len == 0 && typ->parent.len > 0) {
        Type* parent =  Table_find_type(self, typ->parent);
        return  Type_find_method(parent, name);
    }
    
    return method;
}
bool Table_type_has_attr(Table* self, Type* typ, string name) { //fang
    Var attr =  Table_find_attr(self, typ, name);
    return (string_ne(attr.name, c2s("")));
}
bool Table_type_has_method(Table* self, Type* typ, string name) { //fang
    Fn method =  Table_find_method(self, typ, name);
    return (string_ne(method.name, c2s("")));
}
bool Table_is_interface(Table* self, string name) { //fang
    array_Type _arr_29 = self->types;
    for (int _i_30 = 0; _i_30 < _arr_29.len; _i_30 ++) {
        Type typ = (((Type*) _arr_29.data)[_i_30]);
        if (typ.is_interface && string_eq(typ.name, name)) {
            return 1;
        }
        
    }
    return 0;
}
bool Table_main_exists(Table* self) { //fang
    map_Fn tmp31 = self->fns ;
    for (int l = 0; l < tmp31.entries.len; l++) {
        Entry en = ((Entry*) tmp31.entries.data)[l];
        string i = en.key;
        Fn f = {}; map_get(tmp31, i, & f);
        if (string_eq(f.name, c2s("main"))) {
            return 1;
        }
        
    }
    return 0;
}
void Table_reg_module(Table* self, string pkg) { //fang
    if ( array_string_contains(self->imports, pkg) || string_eq(pkg, c2s("main"))) {
        return;
    }
    
    _PUSH(&self->imports, (pkg), string, tmp32);
}
void Table_add_import(Table* self, string pkg) { //fang
    if ( array_string_contains(self->imports, pkg)) {
        return;
    }
    
    _PUSH(&self->imports, (pkg), string, tmp33);
}
bool Table_known_pkg(Table* self, string pkg) { //fang
    return _IN(string, pkg, self->imports);
}
string Table_qualify_module(Table* self, string mod, string file_path) { //fang
    array_string _arr_34 = self->imports;
    for (int _i_35 = 0; _i_35 < _arr_34.len; _i_35 ++) {
        string m = (((string*) _arr_34.data)[_i_35]);
        if ( string_contains(m, c2s("/")) &&  string_contains(m, mod)) {
            array_string m_parts =  string_split(m, c2s("/"));
            if (string_eq(mod, ( *(string*) array_get(m_parts,m_parts.len - 1) )) &&  string_contains(file_path, m)) {
                return m;
            }
            
        }
        
    }
    return mod;
}
FileImportTable* new_FileImportTable(string file_path) { //fang
    FileImportTable* imp = ALLOC_INIT(FileImportTable, {.file_path = file_path, .imports = new_map(1, sizeof(string), "string")});
    return imp;
}
bool FileImportTable_known_alias(FileImportTable* self, string alias) { //fang
    return  map_exists(self->imports, alias);
}
void FileImportTable_register_alias(FileImportTable* self, string mod, string alias) { //fang
    if ( map_exists(self->imports, alias)) {
        z_panic(_STR("无法导入 %.*s as %.*s: 别名 %.*s 被 \"%.*s\". 使用", mod.len, mod.str, alias.len, alias.str, alias.len, alias.str, self->file_path.len, self->file_path.str));
        return;
    }
    
    string val36 = mod;
    map_set(&self->imports, alias, &val36);
}
string FileImportTable_resolve_alias(FileImportTable* self, string alias) { //fang
    if ( map_exists(self->imports, alias)) {
        string val37 = c2s(""); bool ok38 = map_get(self->imports, alias, &val37);
        return val37;
    }
    
    return c2s("");
}
void Parser_register_parent_with_type(Parser* self, string parent, string strtyp) { //fang
    Type typ = (/*&C.*/Type){.name = strtyp, .parent = parent, .mod = self->mod, .orig_name = c2s(""), .attributes = new_array(0, 1, sizeof(Var)), .methods = new_array(0, 1, sizeof(Fn)), .is_c = 0, .is_interface = 0, .is_struct = 0, .is_enum = 0, .enum_vals = new_array(0, 1, sizeof(string)), .is_JiMing = 0};
     Table_register_type2(self->table, typ);
}
Type* Parser_find_type(Parser* self, string name) { //fang
    Type* typ =  Table_find_type(self->table, name);
    if (typ->name.len == 0) {
        return  Table_find_type(self->table,  Parser_prepend_pkg(self, name));
    }
    
    return typ;
}
bool Parser_check_types(Parser* self, string got, string yuan, bool throw) { //fang
     Parser_log(self, _STR("check types \"%.*s\"==\"%.*s\"", yuan.len, yuan.str, got.len, got.str));
    if ((string_eq(got, c2s("int")) || string_eq(got, c2s("f64"))) && string_eq(yuan, c2s("f32"))) {
        return 1;
    }
    
    if ((string_eq(got, c2s("int")) || string_eq(got, c2s("f32"))) && string_eq(yuan, c2s("f64"))) {
        return 1;
    }
    
    if (string_eq(got, c2s("int")) && string_eq(yuan, c2s("i64"))) {
        return 1;
    }
    
    if (string_eq(got, c2s("void*")) &&  string_starts_with(yuan, c2s("fn "))) {
        return 1;
    }
    
    if ( string_starts_with(got, c2s("[")) && (string_eq(yuan, c2s("char*")) || string_eq(yuan, c2s("byte*")))) {
        return 1;
    }
    
    if ( string_starts_with(got, c2s("CArray_")) && (string_eq(yuan, c2s("char*")) || string_eq(yuan, c2s("byte*")))) {
        return 1;
    }
    
    if (string_eq(got, c2s("void*")) || string_eq(yuan, c2s("void*"))) {
        return 1;
    }
    
    if ((string_eq(got, c2s("char")) || string_eq(got, c2s("byte"))) && (string_eq(yuan, c2s("char")) || string_eq(yuan, c2s("byte")))) {
        return 1;
    }
    
    if ((string_eq(got, c2s("char*")) || string_eq(got, c2s("byte*"))) && (string_eq(yuan, c2s("char*")) || string_eq(yuan, c2s("byte*")))) {
        return 1;
    }
    
    if (string_eq(got, c2s("int")) && (string_eq(yuan, c2s("char")) || string_eq(yuan, c2s("byte")))) {
        return 1;
    }
    
    if ((string_eq(got, c2s("int"))) && (string_eq(yuan, c2s("char*")) || string_eq(yuan, c2s("byte*")))) {
        return 1;
    }
    
    if ((string_eq(got, c2s("int")) || string_eq(got, c2s("byte*"))) && (string_eq(yuan, c2s("char*")))) {
        return 1;
    }
    
    if (string_eq(got, c2s("Option")) &&  string_starts_with(yuan, c2s("Option_"))) {
        return 1;
    }
    
    if (string_eq(got, c2s("array")) &&  string_starts_with(yuan, c2s("array_"))) {
        return 1;
    }
    
    if ( string_starts_with(yuan, c2s("Option_")) &&  string_ends_with(yuan, got)) {
        return 1;
    }
    
    if (!self->pref->is_play) {
        if ( string_ends_with(yuan, c2s("*")) && string_eq(got, c2s("int"))) {
            return 1;
        }
        
        if (string_eq(yuan, c2s("void*")) && string_eq(got, c2s("int"))) {
            return 1;
        }
        
    }
    
    yuan =  string_replace(yuan, c2s("*"), c2s(""));
    got =  string_replace(got, c2s("*"), c2s(""));
    if (string_ne(got, yuan)) {
        if ( string_ends_with(yuan, c2s("er"))) {
            if ( Parser_satisfies_interface(self, yuan, got, throw)) {
                return 1;
            }
            
        }
        
        if (!throw) {
            return 0;
        }
        else {
             Parser_error(self, _STR("check_types: 预期类型 %.*s , 当前 %.*s", yuan.len, yuan.str, got.len, got.str));
        }
        
    }
    
    return 1;
}
bool Parser_satisfies_interface(Parser* self, string interface_name, string _typ, bool throw) { //fang
    Type* int_typ =  Table_find_type(self->table, interface_name);
    Type* typ =  Table_find_type(self->table, _typ);
    array_Fn _arr_39 = int_typ->methods;
    for (int _i_40 = 0; _i_40 < _arr_39.len; _i_40 ++) {
        Fn method = (((Fn*) _arr_39.data)[_i_40]);
        if (! Type_has_method(typ, method.name)) {
             Parser_error(self, _STR("Type \"%.*s\" 不满足接口 \"%.*s\" ", _typ.len, _typ.str, interface_name.len, interface_name.str));
            return 0;
        }
        
    }
    return 1;
}
bool is_valid_int_const(string val, string typ) { //fang
    int x =  string_int(val);
    /*switch*/
    if (string_eq(typ, c2s("byte")) ||  string_eq(typ, c2s("u8"))) {/* case 0*/
        return 0 <= x && x <= math__MaxU8;
    }
    else if (string_eq(typ, c2s("u16"))) {/* case 1*/
        return 0 <= x && x <= math__MaxU16;
    }
    else if (string_eq(typ, c2s("u32"))) {/* case 2*/
        return 0 <= x && x <= math__MaxU32;
    }
    else if (string_eq(typ, c2s("i8"))) {/* case 3*/
        return math__MinI8 <= x && x <= math__MaxI8;
    }
    else if (string_eq(typ, c2s("i16"))) {/* case 4*/
        return math__MinI16 <= x && x <= math__MaxI16;
    }
    else if (string_eq(typ, c2s("int")) ||  string_eq(typ, c2s("i32"))) {/* case 5*/
        return math__MinI32 <= x && x <= math__MaxI32;
    }
    return 1;
}
string Table_gen_c_var_name(Table* self, string name) { //fang
    if ( array_string_contains(CReserved, name)) {
        return _STR("v_%.*s", name.len, name.str);
    }
    else {
        return name;
    }
    
}
string Table_gen_c_fn_name(Table* self, Fn* f) { //fang
    string name = f->name;
    if (f->is_method) {
        if (string_eq(name, c2s("new"))) {
            name = _STR("new_%.*s", f->_class.len, f->_class.str);
            f->_class = c2s("");
            f->is_method = 0;
        }
        else if (string_eq(name, f->orig_class)) {
            name = _STR("%.*s_%.*s", f->_class.len, f->_class.str, name.len, name.str);
        }
        else {
            name = _STR("%.*s_%.*s", f->_class.len, f->_class.str, f->name.len, f->name.str);
        }
        
        name =  string_replace( string_replace( string_replace( string_replace(name, c2s(" "), c2s("")), c2s("*"), c2s("mul")), c2s("+"), c2s("plus")), c2s("-"), c2s("minus"));
    }
    
    if (string_eq(f->pkg, c2s("builtin")) &&  array_string_contains(CReserved, f->name) && !f->is_method) {
        return _STR("z_%.*s", name.len, name.str);
    }
    
    if (self->obfuscate && string_ne(f->name, c2s("main")) && string_ne(f->name, c2s("WinMain")) && string_ne(f->pkg, c2s("builtin")) && !f->is_c && string_ne(f->pkg, c2s("darwin")) && string_ne(f->pkg, c2s("os")) && ! string_contains(f->name, c2s("window_proc")) && string_ne(f->name, c2s("gg__vec2")) && string_ne(f->name, c2s("build_token_str")) && string_ne(f->name, c2s("build_keys")) && string_ne(f->pkg, c2s("json")) && ! string_ends_with(name, c2s("_str")) && ! string_contains(name, c2s("contains"))) {
        int val41 = 0; bool ok42 = map_get(self->obf_ids, name, &val41);
        int idx = val41;
        if (idx == 0) {
            self->fn_cnt++;
            int val43 = self->fn_cnt;
            map_set(&self->obf_ids, name, &val43);
            idx = self->fn_cnt;
        }
        
        string old = name;
        name = _STR("h_%d", idx);
    }
    
    return name;
}
string Table_gen_c_type_name_pair(Table* self, string typ, string name) { //fang
    if ( string_starts_with(typ, c2s("CArray_"))) {
        typ =  string_right(typ, 7);
        return _STR("%.*s %.*s", typ.len, typ.str, name.len, name.str);
    }
    
    return _STR("%.*s %.*s", typ.len, typ.str, name.len, name.str);
}
map_int build_keys() { //fang
    map_int res = new_map(1, sizeof(int), "int");
    for (int i = (int)(Token_keyword_beg) + 1;i < (int)(Token_keyword_end);i++) { 
        string key = ( *(string*) array_get(Token_arr,i) );
        int val1 = i;
        map_set(&res, key, &val1);
    }
    return res;
}
Token key_to_token(string key) { //fang
    int val2 = 0; bool ok3 = map_get(KEYWORDS, key, &val2);
    Token a = (Token)(val2);
    return a;
}
bool is_key(string key) { //fang
    return (int)(key_to_token(key)) > 0;
}
string Token_str(Token self) { //fang
    return ( *(string*) array_get(Token_arr,(int)(self)) );
}
bool Token_is_decl(Token self) { //fang
    return _IN(Token, self, new_array_from_c_array(13, 13, sizeof(Token), (Token[]) { Token_key_type, Token_key_import_const, Token_key_const, Token_key_enum, Token_key_class, Token_key_struct, Token_key_typec, Token_key_interface, Token_key_fn, Token_key_fnc, Token_key_pri, Token_key_pub, Token_eof }));
}
bool Token_is_assign(Token self) { //fang
    return _IN(Token, self, new_array_from_c_array(11, 11, sizeof(Token), (Token[]) { Token_assign, Token_plus_assign, Token_minus_assign, Token_mult_assign, Token_div_assign, Token_mod_assign, Token_and_assign, Token_or_assign, Token_xor_assign, Token_left_shift_assign, Token_righ_shift_assign }));
}
bool array_Token_contains(array_Token self, Token val) { //fang
    array_Token _arr_4 = self;
    for (int _i_5 = 0; _i_5 < _arr_4.len; _i_5 ++) {
        Token v = (((Token*) _arr_4.data)[_i_5]);
        if (v == val) {
            return 1;
        }
        
    }
    return 0;
}
void Parser_var_decl(Parser* self) { //fang
     Parser_log2(self, c2s("cyan"), c2s("var "));
    bool is_for = self->prev_tok == Token_key_for;
    bool is_let = self->tok == Token_key_let;
    bool nt = self->tok == Token_key_var || is_let;
    if (nt) {
         Parser_next(self);
    }
    
    string name =  Parser_check_name(self);
     Parser_log2(self, c2s("cyan"), _STR("%.*s", name.len, name.str));
    if (string_eq(name, c2s("_"))) {
        name = c2s("self");
    }
    
    if ( Fn_known_var(self->cur_fn, name)) {
         Parser_error(self, _STR("%.*s 变量重复声明", name.len, name.str));
    }
    
    self->decl_var.name = name;
    int pos = 0;
    string typ = c2s("");
    if (nt || is_for) {
         Parser_check(self, Token_assign);
    }
    else {
         Parser_check(self, Token_decl_assign);
    }
    
     Parser_log2(self, c2s("cyan"), c2s(" = "));
    pos =  GenC_biaoqian(self->genc);
    typ =  Parser_bool_expression(self);
    string yuan_typ = typ;
    if ( string_contains(yuan_typ, c2s("Option_"))) {
        bool or_else = self->tok == Token_key_orelse;
        string opt =  Parser_get_add_digit(self, c2s("_opt_"));
         GenC_cha_ru(self->genc, pos, _STR("%.*s %.*s= ", typ.len, typ.str, opt.len, opt.str));
         Parser_genln(self, c2s(";"));
        typ =  string_replace(typ, c2s("Option_"), c2s(""));
         Parser_genln(self, _STR("if (!%.*s.ok) {", opt.len, opt.str));
        if (or_else) {
             Parser_next(self);
             Parser_check(self, Token_lcbr);
        }
        
         Parser_register_var(self, (/*&C.*/Var){.name = c2s("err"), .type = c2s("string"), .is_let = 1, .is_used = 1, .type1 = c2s(""), .type2 = c2s(""), .arr_ss = c2s(""), .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .scope_level = 0, .z_cur_fn = c2s("")});
         Parser_genln(self, _STR("string err = %.*s.error;", opt.len, opt.str));
        if (or_else) {
             Parser_statements(self);
        }
        else {
             Parser_genln(self, c2s("printf(\"%.*s\", err.len, err.str);"));
             Parser_genln(self, c2s("exit(1);"));
             Parser_genln(self, c2s("}"));
        }
        
         Parser_gen(self, _STR("%.*s %.*s = *(%.*s*) %.*s.data", typ.len, typ.str, name.len, name.str, typ.len, typ.str, opt.len, opt.str));
        if (!self->returns && or_else && self->prev_tok2 != Token_key_continue && self->prev_tok2 != Token_key_break) {
             Parser_error(self, c2s("`or` 必须是块 return/continue/break/panic"));
        }
        
    }
    
     Parser_register_var(self, (/*&C.*/Var){.name = name, .type = typ, .type1 = self->decl_var.type1, .type2 = self->decl_var.type2, .arr_ss = self->decl_var.arr_ss, .is_let = is_let, .z_cur_fn = self->cur_fn->name, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, });
    string gen_c_typ = typ;
    if (! string_contains(yuan_typ, c2s("Option_"))) {
        string gen_name = string_add( Table_gen_c_var_name(self->table, name), self->decl_var.arr_ss);
        string tn_gen = string_add( Table_gen_c_type_name_pair(self->table, gen_c_typ, gen_name), c2s(" = "));
        if (string_eq(self->decl_var.type1, c2s("struct"))) {
            tn_gen = _STR("struct %.*s", tn_gen.len, tn_gen.str);
        }
        
         GenC_cha_ru(self->genc, pos, tn_gen);
         Parser_gen(self, c2s(""));
        self->decl_var = (/*&C.*/Var){.type = c2s(""), .type1 = c2s(""), .type2 = c2s(""), .name = c2s(""), .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, .z_cur_fn = c2s("")};
    }
    
}
void Parser_v_decl(Parser* self, string rt) { //fang
    self->z_log = string_add(self->z_log, c2s(" cvar "));
    l1:
    string name =  Parser_check_name(self);
     Parser_log2(self, c2s("cyan"), _STR(" %.*s", name.len, name.str));
    if (string_eq(name, c2s("_"))) {
        name = c2s("self");
    }
    
    if ( Fn_known_var(self->cur_fn, name)) {
         Parser_error(self, _STR("%.*s 变量重复声明", name.len, name.str));
    }
    
    self->decl_var.name = name;
    string a2 = c2s("");
    string t1 = c2s("");
    string t2 = c2s("");
    if (self->tok == Token_lsbr) {
        if ( Parser_peek(self).tok != Token_rsbr) {
            while (self->tok == Token_lsbr) {
                 Parser_next(self);
                a2 = string_add(a2, _STR("[%.*s]", self->lit.len, self->lit.str));
                 Parser_check(self, Token_NUMBER);
                 Parser_check(self, Token_rsbr);
            }
            rt = string_add(c2s("CArray_"), rt);
            goto lca;
        }
        
         Parser_next(self);
         Parser_check(self, Token_rsbr);
        rt = string_add(c2s("array_"), rt);
    }
    
    lca:
    if ( string_starts_with(rt, c2s("map_"))) {
         Parser_register_map(self, rt);
    }
    
    if ( string_starts_with(rt, c2s("array_"))) {
         Parser_register_array(self, rt);
    }
    
    if (self->tok != Token_assign) {
         Parser_register_var(self, (/*&C.*/Var){.name = name, .type = rt, .type1 =  string_last_before(rt, c2s("_")), .type2 =  string_all_after(rt, c2s("_")), .z_cur_fn = self->cur_fn->name, .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, });
        string gen_name = string_add( Table_gen_c_var_name(self->table, name), a2);
        string tn_gen = string_add(string_add(string_add( Table_gen_c_type_name_pair(self->table, rt, gen_name), c2s(" = ")), default_type(rt)), c2s(";"));
         Parser_genln(self, tn_gen);
        if (self->tok == Token_comma) {
             Parser_next(self);
            goto l1;
        }
        
        return;
    }
    
     Parser_check(self, Token_assign);
    int pos =  GenC_biaoqian(self->genc);
    string typ =  Parser_bool_expression(self);
    if (string_ne(rt, typ) && string_ne(typ, c2s("#"))) {
        z_error(_STR("变量类型 %.*s != 返回类型 %.*s", rt.len, rt.str, typ.len, typ.str));
    }
    
     Parser_register_var(self, (/*&C.*/Var){.name = name, .type = rt, .type1 =  string_last_before(rt, c2s("_")), .type2 =  string_all_after(rt, c2s("_")), .z_cur_fn = self->cur_fn->name, .arr_ss = c2s(""), .is_let = 0, .is_const = 0, .is_import_const = 0, .is_global = 0, .is_array = 0, .is_self = 0, .is_arg = 0, .parent = c2s(""), .value = 0, .counts = 0, .ptr = 0, .ref = 0, .mod = c2s(""), .args = new_array(0, 1, sizeof(Var)), .attr = c2s(""), .attr2 = c2s(""), .parent_fn = c2s(""), .line_nr = 0, .is_used = 0, .scope_level = 0, });
    string gen_name =  Table_gen_c_var_name(self->table, name);
    string tn_gen = string_add( Table_gen_c_type_name_pair(self->table, rt, gen_name), c2s(" = "));
     GenC_cha_ru(self->genc, pos, tn_gen);
     Parser_genln(self, c2s(";"));
    if (self->tok == Token_comma) {
         Parser_next(self);
        goto l1;
    }
    
}
void Parser_register_var(Parser* self, Var v) { //fang
    if (v.line_nr == 0) {
        v.line_nr = self->scanner->line_nr;
    }
    
     Fn_register_var(self->cur_fn, v);
}
string Parser_var_expr(Parser* self, Var v) { //fang
     Parser_log(self, _STR("\nvar_expr() v.name=\"%.*s\" v.type=\"%.*s\"", v.name.len, v.name.str, v.type.len, v.type.str));
    self->z_log = string_add(self->z_log, _STR(" <var_expr(%.*s) %.*s>", v.type.len, v.type.str, v.name.len, v.name.str));
     Fn_mark_var_used(self->cur_fn, v);
    int fn_ph =  GenC_biaoqian(self->genc);
    self->expr_var = v;
    if (v.is_self) {
         Parser_gen(self, c2s("self"));
    }
    else {
         Parser_gen(self,  Table_gen_c_var_name(self->table, v.name));
    }
    
     Parser_next(self);
    string typ = v.type;
    if ( string_starts_with(typ, c2s("fn "))) {
        self->z_log = string_add(self->z_log, c2s(" fn-expr"));
        Type* T =  Table_find_type(self->table, typ);
         Parser_gen(self, c2s("("));
         Parser_fn_call_args(self, &T->func);
         Parser_gen(self, c2s(")"));
        typ = T->func.ret_type;
    }
    
    while (self->tok == Token_dot || self->tok == Token_lsbr) {
        if (self->tok == Token_dot) {
            typ =  Parser_dot(self, typ, fn_ph);
        }
        
        if (self->tok == Token_lsbr) {
            typ =  Parser_index_expr(self, typ, fn_ph);
        }
        
    }
    if (self->tok == Token_inc || self->tok == Token_dec) {
        if (v.is_let && !v.is_arg) {
             Parser_error(self, _STR("%.*s 是 常量", v.name.len, v.name.str));
        }
        
        if (string_ne(typ, c2s("int"))) {
             Parser_error(self, _STR("type ?%.*s ++/--", typ.len, typ.str));
        }
        
         Parser_gen(self, self->lit);
         Parser_next(self);
        return c2s("int");
    }
    
    typ =  Parser_index_expr(self, typ, fn_ph);
    self->z_log = string_add(self->z_log, _STR(" <var_expr(%.*s %.*s)后>", v.type.len, v.type.str, v.name.len, v.name.str));
    return typ;
}
int main(int argc, char** argv) { //fang
    init_consts();
    os__args = os__init_os_args(argc, argv);
    i64 _prof_start = time__ticks();
    array_string args = env_vflags_and_os_args();
    if (_IN(string, c2s("-v"), args) || _IN(string, c2s("version"), args)) {
        println(_STR("Z语言 %.*s", Version.len, Version.str));
        return 0;
    }
    
    if (_IN(string, c2s("-sm"), args) || _IN(string, c2s("shuoming"), args)) {
        println(HelpText);
        return 0;
    }
    
    if (_IN(string, c2s("-h"), args) || _IN(string, c2s("help"), args)) {
        println(HelpText2);
        return 0;
    }
    
    if (args.len < 2 || (args.len == 2 && string_eq(( *(string*) array_get(args,1) ), c2s("-")))) {
        run_repl();
        return 0;
    }
    
    Z* z = new_Z(args);
    if (z->pref->is_verbose) {
        println(array_string_str(args));
    }
    
    zz = z;
     Z_compile(z);
    println(c2s("---------------"));
    i64 _prof_end = time__ticks();
    i64 _prof = _prof_end - _prof_start;
    println(c2s("===================================================================="));
}
Z* new_Z(array_string args) { //fang
    string dir = *(string*)  array_last(args);
    if ( array_string_contains(args, c2s("run"))) {
        dir = ( *(string*) array_get(args,2) );
    }
    
    if (args.len < 2) {
        dir = c2s("");
    }
    
    string target_os = get_arg2(args, c2s("-os"), c2s(""));
    string out_name = get_arg2(args, c2s("-o"), c2s("a.out"));
    BuildMode build_mode = BuildMode_default_mode;
    if ( array_string_contains(args, c2s("-lib"))) {
        build_mode = BuildMode_build;
        string base =  string_all_after(dir, c2s("/"));
        println(_STR("构建 %.*s...", base.len, base.str));
        out_name = string_add(base, c2s(".o"));
    }
    else if (! array_string_contains(args, c2s("-embed_lib"))) {
        build_mode = BuildMode_embed_lib;
    }
    
    bool is_test =  string_ends_with(dir, c2s("_test.z"));
    bool is_script =  string_ends_with(dir, c2s(".z"));
    if (is_script && !os__file_exists(dir)) {
        println(_STR("%.*s 不存在", dir.len, dir.str));
        z_exit(1);
    }
    
    if (string_eq(out_name, c2s("a.out")) &&  string_ends_with(dir, c2s(".z"))) {
        out_name =  string_left(dir, dir.len - 2);
    }
    
    if (string_eq(dir, c2s(".")) && string_eq(out_name, c2s("a.out"))) {
        string base =  string_all_after(os__getwd(), c2s("/"));
        out_name =  string_trim_space(base);
    }
    
    array_string neizhi = new_array_from_c_array(7, 7, sizeof(string), (string[]) { c2s("array.z"), c2s("string.z"), c2s("builtin.z"), c2s("int.z"), c2s("utf8.z"), c2s("map.z"), c2s("option.z") });
    string zroot = os__dir(os__executable());
    if (!(os__dir_exists(zroot) && os__dir_exists(string_add(zroot, c2s("/zlib/neizhi"))))) {
        println(c2s("未发现 zlib"));
        z_exit(1);
    }
    
    string out_name_c = string_add( string_all_after(out_name, c2s("/")), c2s(".c"));
    array_string files = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    if (! string_contains(out_name, c2s("neizhi.o"))) {
        array_string _arr_1 = neizhi;
        for (int _i_2 = 0; _i_2 < _arr_1.len; _i_2 ++) {
            string nz = (((string*) _arr_1.data)[_i_2]);
            string f = _STR("%.*s/zlib/neizhi/%.*s", zroot.len, zroot.str, nz.len, nz.str);
            _PUSH(&files, (f), string, tmp3);
        }
    }
    
    string c_options = c2s("");
    array_string tmp4 = args ;
    for (int ci = 0; ci < tmp4.len; ci ++) {
        string cv = ((string*) tmp4.data)[ci];
        if ( string_starts_with(cv, c2s("-c_options="))) {
            c_options = string_add(c_options, string_add( string_replace(cv, c2s("-c_options="), c2s("")), c2s(" ")));
        }
        
    }
    bool obfuscate =  array_string_contains(args, c2s("-obf"));
    Preferences* pref = ALLOC_INIT(Preferences, {.is_test = is_test, .is_script = is_script, .is_so =  array_string_contains(args, c2s("-shared")), .is_play =  array_string_contains(args, c2s("play")), .is_prod =  array_string_contains(args, c2s("-prod")), .is_verbose =  array_string_contains(args, c2s("-verbose")), .is_debug =  array_string_contains(args, c2s("-debug")), .obfuscate = obfuscate, .is_prof =  array_string_contains(args, c2s("-prof")), .is_live =  array_string_contains(args, c2s("-live")), .sanitize =  array_string_contains(args, c2s("-sanitize")), .nofmt =  array_string_contains(args, c2s("-nofmt")), .show_c_cmd =  array_string_contains(args, c2s("-show_c_cmd")), .translated =  array_string_contains(args, c2s("translated")), .is_run =  array_string_contains(args, c2s("run")), .is_repl =  array_string_contains(args, c2s("-repl")), .build_mode = build_mode, .c_options = c_options, .z_c =  array_string_contains(args, c2s("-c")), .no_auto_free = 0, });
    if (pref->is_so) {
        out_name_c = string_add( string_all_after(out_name, c2s("/")), c2s("_shared_lib.c"));
    }
    
    OS _os = get_os(target_os);
    return ALLOC_INIT(Z, {.os = _os, .out_name = out_name, .files = files, .dir = dir, .ZYuYan_dir = zroot, .table = new_Table(obfuscate), .out_name = out_name, .out_name_c = out_name_c, .genc = new_cgen(out_name_c), .zroot = zroot, .pref = pref, });
}
string get_arg2(array_string args, string a, string dft) { //fang
    array_string tmp5 = args ;
    for (int i = 0; i < tmp5.len; i ++) {
        string ar = ((string*) tmp5.data)[i];
        if (string_eq(ar, a)) {
            return ( *(string*) array_get(args,i + 1) );
        }
        
    }
    return dft;
}
OS get_os(string target_os) { //fang
    OS _os = OS_windows;
    if (string_eq(target_os, c2s(""))) {
        #ifdef __linux__
            _os = OS_linux;
        #endif
        #ifdef __APPLE__
            _os = OS_mac;
        #endif
        #ifdef _WIN32
            _os = OS_windows;
        #endif
    }
    else {
        /*switch*/
        if (string_eq(target_os, c2s("linux"))) {/* case 0*/
            _os = OS_linux;
        }
        else if (string_eq(target_os, c2s("windows"))) {/* case 1*/
            _os = OS_windows;
        }
        else if (string_eq(target_os, c2s("mac"))) {/* case 2*/
            _os = OS_mac;
        }
    }
    
    return _os;
}
array_string env_vflags_and_os_args() { //fang
    array_string args = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  });
    string zflags = os__getenv(c2s("ZFLAGS"));
    if (string_ne(zflags, c2s(""))) {
        _PUSH(&args, (( *(string*) array_get(os__args,0) )), string, tmp6);
        _PUSH_MANY(&args, ( string_split(zflags, c2s(" "))), array_string, tmp7);
        if (os__args.len > 1) {
            _PUSH_MANY(&args, ( array_right(os__args, 1)), array_string, tmp8);
        }
        
    }
    else {
        _PUSH_MANY(&args, (os__args), array_string, tmp9);
    }
    
    return args;
}
void Z_log(Z* self, string s) { //fang
    if (!self->pref->is_verbose) {
        return;
    }
    
    println(s);
}
void init_consts() { g_str_buf = malloc(1000); os__FILE_ATTR_READONLY = 0x1; 
os__FILE_ATTR_HIDDEN = 0x2; 
os__FILE_ATTR_SYSTEM = 0x4; 
os__FILE_ATTR_DIRECTORY = 0x10; 
os__FILE_ATTR_ARCHIVE = 0x20; 
os__FILE_ATTR_DEVICE = 0x40; 
os__FILE_ATTR_NORMAL = 0x80; 
os__FILE_ATTR_TEMPORARY = 0x100; 
os__FILE_ATTR_SPARSE_FILE = 0x200; 
os__FILE_ATTR_REPARSE_POINT = 0x400; 
os__FILE_ATTR_COMPRESSED = 0x800; 
os__FILE_ATTR_OFFLINE = 0x1000; 
os__FILE_ATTR_NOT_CONTENT_INDEXED = 0x2000; 
os__FILE_ATTR_ENCRYPTED = 0x4000; 
os__FILE_ATTR_INTEGRITY_STREAM = 0x8000; 
os__FILE_ATTR_VIRTUAL = 0x10000; 
os__FILE_ATTR_NO_SCRUB_DATA = 0x20000; 
os__FILE_TYPE_DISK = 0x1; 
os__FILE_TYPE_CHAR = 0x2; 
os__FILE_TYPE_PIPE = 0x3; 
os__FILE_TYPE_UNKNOWN = 0x0; 
os__FILE_INVALID_FILE_ID = ( - 1); 
os__INVALID_HANDLE_VALUE =  - 1; 
os__STD_INPUT_HANDLE =  - 10; 
os__STD_OUTPUT_HANDLE =  - 11; 
os__STD_ERROR_HANDLE =  - 12; 
os__ENABLE_ECHO_INPUT = 0x0004; 
os__ENABLE_EXTENDED_FLAGS = 0x0080; 
os__ENABLE_INSERT_MODE = 0x0020; 
os__ENABLE_LINE_INPUT = 0x0002; 
os__ENABLE_MOUSE_INPUT = 0x0010; 
os__ENABLE_PROCESSED_INPUT = 0x0001; 
os__ENABLE_QUICK_EDIT_MODE = 0x0040; 
os__ENABLE_WINDOW_INPUT = 0x0008; 
os__ENABLE_VIRTUAL_TERMINAL_INPUT = 0x0200; 
os__ENABLE_PROCESSED_OUTPUT = 0x0001; 
os__ENABLE_WRAP_AT_EOL_OUTPUT = 0x0002; 
os__ENABLE_VIRTUAL_TERMINAL_PROCESSING = 0x0004; 
os__DISABLE_NEWLINE_AUTO_RETURN = 0x0008; 
os__ENABLE_LVB_GRID_WORLDWIDE = 0x0010; 
os__args = new_array_from_c_array(0, 0, sizeof(string), (string[]) {  }); 
time__MonthDays = new_array_from_c_array(12, 12, sizeof(int), (int[]) { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }); 
time__Months = c2s("JanFebMarAprMayJunJulAugSepOctNovDec"); 
time__Days = c2s("MonTueWedThuFriSatSun"); 
math__Log2E = 1.0 / math__Ln2; 
math__Log10E = 1.0 / math__Ln10; 
math__MaxI8 = (1 << 7) - 1; 
math__MinI8 =  - 1 << 7; 
math__MaxI16 = (1 << 15) - 1; 
math__MinI16 =  - 1 << 15; 
math__MaxI32 = (1 << 31) - 1; 
math__MinI32 =  - 1 << 31; 
math__MaxU8 = (1 << 8) - 1; 
math__MaxU16 = (1 << 16) - 1; 
math__MaxU32 = (1 << 32) - 1; 
math__MaxU64 = (1 << 64) - 1; 
_tou_ = c2s("   \n#include <stdio.h> \n#include <stdlib.h>\n#include <signal.h>\n#include <stdarg.h> \n#include <inttypes.h>  \n\n#ifdef __linux__ \n#include <pthread.h> \n#endif \n\n#ifdef __APPLE__ \n\n#endif \n\n#ifdef _WIN32 \n#include <windows.h>\n//#include <WinSock2.h> \n#endif \n\n//================================== TYPEDEFS ================================*/ \ntypedef struct tm tm;  \ntypedef unsigned char byte;\ntypedef unsigned int uint;\ntypedef int64_t i64;\ntypedef int32_t i32;\ntypedef int16_t i16;\ntypedef int8_t i8;\ntypedef uint64_t u64;\ntypedef uint32_t u32;\ntypedef uint16_t u16;\ntypedef uint8_t u8;\ntypedef uint32_t rune;\ntypedef float f32;\ntypedef double f64; \n\n//typedef unsigned char* charptr;\n//typedef unsigned char* byteptr;\n//typedef int* intptr;\n//typedef void* voidptr;\n\ntypedef struct map map;\ntypedef struct array array;\n\ntypedef array array_string; \ntypedef array array_int; \ntypedef array array_byte; \ntypedef array array_uint; \ntypedef array array_float; \ntypedef array array_f32; \ntypedef array array_f64; \ntypedef map map_int; \ntypedef map map_string; \n#ifndef bool\n	typedef int bool;\n	#define true 1\n	#define false 0\n#endif\n\n//============================== MACROS =============================*/ \n\n#define _PUSH(arr, val, typ,  Carr) {typ Carr = (val); array_push(arr, &Carr);}\n#define _PUSH_MANY(arr, val, typ, Carr) {typ Carr = (val); array_push_many(arr, Carr.data, Carr.len);}\n\n#define _IN(typ, val, arr) array_##typ##_contains(arr, val) \n#define _IN1(typ, val, arr) array_baohan(arr, val) \n\n//#define z_sizeof(typ) siz##eof ##typ##;\n\n#define ALLOC_INIT(type, ...) (type *)memdup((type[]){ __VA_ARGS__ }, sizeof(type)) \n/*\n#define delete1(p) {\\n	if( (p) != NULL ){\\n	free((p));\\n	(p) = NULL;\\n}\n*/\n\n//================================== GLOBALS =================================*/   \n//int Z_ZERO = 0; \nchar* g_str_buf; \nint load_so(char*);\nvoid reload_so();\nvoid init_consts();"); 
_str_ = c2s("\nstring _STR(const char *fmt, ...) {\n	va_list argptr;\n	va_start(argptr, fmt);\n	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;  \n	va_end(argptr);\n	char* buf = malloc(len);  \n	va_start(argptr, fmt);\n	vsprintf(buf, fmt, argptr);\n	va_end(argptr);\n#ifdef DEBUG_ALLOC \n	puts(\"_STR:\"); \n	puts(buf); \n#endif \n	return c2s(buf);\n}\n\nstring _STR_TMP(const char *fmt, ...) {\n	va_list argptr;\n	va_start(argptr, fmt);\n	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;  \n	va_end(argptr);\n	va_start(argptr, fmt);\n	vsprintf(g_str_buf, fmt, argptr);\n	va_end(argptr);\n#ifdef DEBUG_ALLOC \n	//puts(\"_STR_TMP:\"); \n	//puts(g_str_buf); \n#endif \n	return c2s(g_str_buf);\n}"); 
NUMBER_TYPES = new_array_from_c_array(14, 14, sizeof(string), (string[]) { c2s("number"), c2s("char"), c2s("byte"), c2s("int"), c2s("i8"), c2s("u8"), c2s("i16"), c2s("u16"), c2s("i32"), c2s("u32"), c2s("i64"), c2s("u64"), c2s("f32"), c2s("f64") }); 
FLOAT_TYPES = new_array_from_c_array(2, 2, sizeof(string), (string[]) { c2s("f32"), c2s("f64") }); 
SupportedPlatforms = new_array_from_c_array(3, 3, sizeof(string), (string[]) { c2s("windows"), c2s("mac"), c2s("linux") }); 
EmptyFn = ALLOC_INIT(Fn, {.pkg = c2s(""), ._class = c2s(""), .orig_class = c2s(""), .name = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0}); 
MainFn = ALLOC_INIT(Fn, {.name = c2s("main"), .pkg = c2s(""), ._class = c2s(""), .orig_class = c2s(""), .ret_type = c2s(""), .args = new_array(0, 1, sizeof(Var)), .T = c2s(""), .is_private = 0, .is_method = 0, .is_interface = 0, .local_vars = new_array(0, 1, sizeof(Var)), .var_idx = 0, .scope_level = 0, .is_c = 0, .returns_error = 0, .is_decl = 0}); 
CReserved = new_array_from_c_array(10, 10, sizeof(string), (string[]) { c2s("exit"), c2s("unix"), c2s("print"), c2s("error"), c2s("malloc"), c2s("calloc"), c2s("char"), c2s("free"), c2s("panic"), c2s("register") }); 
Token_arr = new_array_from_c_array(99+1,99+1 , sizeof(string),(string[]){c2s("EOF"), c2s("NAME"), c2s("NUM"), c2s("STR"), c2s("CHAR"), c2s("{"), c2s("}"), c2s("("), c2s(")"), c2s("["), c2s("]"), c2s("+"), c2s("-"), c2s("*"), c2s("/"), c2s("%"), c2s("^"), c2s("&"), c2s("|"), c2s("++"), c2s("--"), c2s("&&"), c2s("||"), c2s("!"), c2s("~"), c2s("?"), c2s(","), c2s(";"), c2s(":"), c2s("#"), c2s("$"), c2s("<<"), c2s(">>"), c2s("=="), c2s("!="), c2s(">"), c2s("<"), c2s(">="), c2s("<="), c2s("="), c2s(":="), c2s("+="), c2s("-="), c2s("/="), c2s("*="), c2s("^="), c2s("%="), c2s("|="), c2s("&="), c2s(">>="), c2s("<<="), c2s("=>"), c2s("//"), c2s(""), c2s("NLL"), c2s("."), c2s(".."), c2s(""), c2s("module"), c2s("as"), c2s("import"), c2s("import_const"), c2s("global"), c2s("const"), c2s("let"), c2s("var"), c2s("goto"), c2s("if"), c2s("else"), c2s("match"), c2s("default"), c2s("switch"), c2s("case"), c2s("for"), c2s("in"), c2s("continue"), c2s("break"), c2s("type"), c2s("typedef"), c2s("true"), c2s("false"), c2s("typec"), c2s("enum"), c2s("union"), c2s("static"), c2s("struct"), c2s("interface"), c2s("class"), c2s("fn"), c2s("fnc"), c2s("return"), c2s("sizeof"), c2s("go"), c2s("embed"), c2s("pub"), c2s("pri"), c2s("atomic"), c2s("or"), c2s("")}); 
KEYWORDS = build_keys(); 
Version = c2s("0.9"); 
HelpText = c2s("\n使用: z [选项] [文件 | 目录]\n\n选项:\n  -                 读取stdin (默认; 交互模式)\n  -sm  	            显示帮助\n  -v, version       显示版本\n  -lib              生成对象文件\n  -prod             优化程序\n  -c 				输出 c 文件\n  -o <file>         输出 <文件>.\n  -obf              混肴 , Obfuscate.\n  run               编译并运行\n"); 
HelpText2 = c2s("\nUsage: z [options] [file | directory]\n\nOptions:\n  -                 Read from stdin (Default; Interactive mode if in a tty)\n  -h, help          Display this information.\n  -v, version       Display compiler version.\n  -lib              Generate object file.\n  -prod             Build an optimized executable.\n  -c 				output .c\n  -o <file>         Place output into <file>.\n  -obf              Obfuscate the resulting binary.\n  run               Build and execute a Z program. You can add arguments after file name.\n\nFiles:\n  <file>_test.z     Test file.\n");  }

string _STR(const char *fmt, ...) {
	va_list argptr;
	va_start(argptr, fmt);
	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;  
	va_end(argptr);
	char* buf = malloc(len);  
	va_start(argptr, fmt);
	vsprintf(buf, fmt, argptr);
	va_end(argptr);
#ifdef DEBUG_ALLOC 
	puts("_STR:"); 
	puts(buf); 
#endif 
	return c2s(buf);
}

string _STR_TMP(const char *fmt, ...) {
	va_list argptr;
	va_start(argptr, fmt);
	size_t len = vsnprintf(0, 0, fmt, argptr) + 1;  
	va_end(argptr);
	va_start(argptr, fmt);
	vsprintf(g_str_buf, fmt, argptr);
	va_end(argptr);
#ifdef DEBUG_ALLOC 
	//puts("_STR_TMP:"); 
	//puts(g_str_buf); 
#endif 
	return c2s(g_str_buf);
}
/* 编译器开发: 张兵 */
