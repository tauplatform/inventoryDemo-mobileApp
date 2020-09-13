#include "ruby.h"

static VALUE rb_api_mParent;
static VALUE rb_api_mOidcNative;

VALUE rb_OidcNative_getSimpleStringProperty(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_getSimpleStringProperty(int argc, VALUE *argv);
VALUE rb_OidcNative_setSimpleStringProperty(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_setSimpleStringProperty(int argc, VALUE *argv);
VALUE rb_s_OidcNative_enumerate(int argc, VALUE *argv);
VALUE rb_OidcNative_getPlatformName(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_getPlatformName(int argc, VALUE *argv);
VALUE rb_OidcNative_calcSumm(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_calcSumm(int argc, VALUE *argv);
VALUE rb_OidcNative_joinStrings(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_joinStrings(int argc, VALUE *argv);
VALUE rb_OidcNative_getProperty(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_getProperty(int argc, VALUE *argv);
VALUE rb_OidcNative_getProperties(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_getProperties(int argc, VALUE *argv);
VALUE rb_OidcNative_getAllProperties(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_getAllProperties(int argc, VALUE *argv);
VALUE rb_OidcNative_setProperty(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_setProperty(int argc, VALUE *argv);
VALUE rb_OidcNative_setProperties(int argc, VALUE *argv, VALUE obj);
VALUE rb_s_OidcNative_def_setProperties(int argc, VALUE *argv);



VALUE rb_OidcNative_s_default(VALUE klass);
VALUE rb_OidcNative_s_setDefault(VALUE klass, VALUE obj);


VALUE getRuby_OidcNative_Module(){ return rb_api_mOidcNative; }



static void _free_class_object(void *p)
{
    ruby_xfree(p);
}

static VALUE _allocate_class_object(VALUE klass)
{
    VALUE valObj = 0;
    char ** ppString = NULL;
    void* pData = ALLOC(void*);
    memset( pData, 0, sizeof(pData) );
    
	valObj = Data_Wrap_Struct(klass, 0, _free_class_object, pData);

    Data_Get_Struct(valObj, char *, ppString);
    *ppString = xmalloc(10);
    sprintf(*ppString, "%X", valObj);

    return valObj;
}

void Init_RubyAPI_OidcNative(void)
{

    VALUE tmpParent = Qnil;
    rb_api_mParent = rb_define_module("Rho");
    

	rb_api_mOidcNative = rb_define_class_under(rb_api_mParent, "OidcNative", rb_cObject);

	rb_define_alloc_func(rb_api_mOidcNative, _allocate_class_object);
    //Constructor should be not available in case of static members
    //rb_undef_alloc_func(rb_api_mOidcNative);

    rb_define_method(rb_api_mOidcNative, "simpleStringProperty", rb_OidcNative_getSimpleStringProperty, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "simpleStringProperty", rb_s_OidcNative_def_getSimpleStringProperty, -1);
    rb_define_method(rb_api_mOidcNative, "simpleStringProperty=", rb_OidcNative_setSimpleStringProperty, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "simpleStringProperty=", rb_s_OidcNative_def_setSimpleStringProperty, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "enumerate", rb_s_OidcNative_enumerate, -1);
    rb_define_method(rb_api_mOidcNative, "getPlatformName", rb_OidcNative_getPlatformName, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "getPlatformName", rb_s_OidcNative_def_getPlatformName, -1);
    rb_define_method(rb_api_mOidcNative, "calcSumm", rb_OidcNative_calcSumm, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "calcSumm", rb_s_OidcNative_def_calcSumm, -1);
    rb_define_method(rb_api_mOidcNative, "joinStrings", rb_OidcNative_joinStrings, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "joinStrings", rb_s_OidcNative_def_joinStrings, -1);
    rb_define_method(rb_api_mOidcNative, "getProperty", rb_OidcNative_getProperty, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "getProperty", rb_s_OidcNative_def_getProperty, -1);
    rb_define_method(rb_api_mOidcNative, "getProperties", rb_OidcNative_getProperties, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "getProperties", rb_s_OidcNative_def_getProperties, -1);
    rb_define_method(rb_api_mOidcNative, "getAllProperties", rb_OidcNative_getAllProperties, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "getAllProperties", rb_s_OidcNative_def_getAllProperties, -1);
    rb_define_method(rb_api_mOidcNative, "setProperty", rb_OidcNative_setProperty, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "setProperty", rb_s_OidcNative_def_setProperty, -1);
    rb_define_method(rb_api_mOidcNative, "setProperties", rb_OidcNative_setProperties, -1);
    rb_define_singleton_method(rb_api_mOidcNative, "setProperties", rb_s_OidcNative_def_setProperties, -1);



    rb_define_singleton_method(rb_api_mOidcNative, "getDefault", rb_OidcNative_s_default, 0);
    rb_define_singleton_method(rb_api_mOidcNative, "setDefault", rb_OidcNative_s_setDefault, 1);






}

