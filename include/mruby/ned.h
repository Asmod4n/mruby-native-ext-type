#pragma once

#include <mruby.h>

MRB_BEGIN_DECL

MRB_API mrb_value
mrb_net_schema(mrb_state* mrb, struct RClass* klass);

MRB_END_DECL
