#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct NoOptions_t32144009;
struct NoOptions_t32144009_marshaled_pinvoke;

extern "C" void NoOptions_t32144009_marshal_pinvoke(const NoOptions_t32144009& unmarshaled, NoOptions_t32144009_marshaled_pinvoke& marshaled);
extern "C" void NoOptions_t32144009_marshal_pinvoke_back(const NoOptions_t32144009_marshaled_pinvoke& marshaled, NoOptions_t32144009& unmarshaled);
extern "C" void NoOptions_t32144009_marshal_pinvoke_cleanup(NoOptions_t32144009_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NoOptions_t32144009;
struct NoOptions_t32144009_marshaled_com;

extern "C" void NoOptions_t32144009_marshal_com(const NoOptions_t32144009& unmarshaled, NoOptions_t32144009_marshaled_com& marshaled);
extern "C" void NoOptions_t32144009_marshal_com_back(const NoOptions_t32144009_marshaled_com& marshaled, NoOptions_t32144009& unmarshaled);
extern "C" void NoOptions_t32144009_marshal_com_cleanup(NoOptions_t32144009_marshaled_com& marshaled);
