
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_directory_Attributes__
#define __javax_naming_directory_Attributes__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace naming
    {
        class NamingEnumeration;
      namespace directory
      {
          class Attribute;
          class Attributes;
      }
    }
  }
}

class javax::naming::directory::Attributes : public ::java::lang::Object
{

public:
  virtual jboolean isCaseIgnored() = 0;
  virtual jint size() = 0;
  virtual ::javax::naming::directory::Attribute * get(::java::lang::String *) = 0;
  virtual ::javax::naming::NamingEnumeration * getAll() = 0;
  virtual ::javax::naming::NamingEnumeration * getIDs() = 0;
  virtual ::javax::naming::directory::Attribute * put(::java::lang::String *, ::java::lang::Object *) = 0;
  virtual ::javax::naming::directory::Attribute * put(::javax::naming::directory::Attribute *) = 0;
  virtual ::javax::naming::directory::Attribute * remove(::java::lang::String *) = 0;
  virtual ::java::lang::Object * clone() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_naming_directory_Attributes__
