#####################################################################
# include this file in your master makefile
# rules to call from master.generate:

##---

FLATMATH_FLATC_CPP_FLAGS=\
	--cpp --scoped-enums --gen-name-strings --gen-object-api --no-includes \
	-I $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas

FLATMATH_FLATC_CPP_FLAGS_READONLY=\
	$(FLATMATH_FLATC_CPP_FLAGS) \
	-o $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/include/flatmath/readonly/

FLATMATH_FLATC_CPP_FLAGS_MUTABLE=\
	--gen-mutable \
	$(FLATMATH_FLATC_CPP_FLAGS) \
	-o $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/include/flatmath/mutable/

FLATMATH_FLATC_GO_FLAGS=\
	--go --scoped-enums --gen-name-strings --gen-object-api --no-includes --gen-onefile \
	-I $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas

FLATMATH_FLATC_GO_FLAGS_READONLY=\
	$(FLATMATH_FLATC_GO_FLAGS) \
	-o $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/go/readonly/

FLATMATH_FLATC_GO_FLAGS_MUTABLE=\
	--gen-mutable \
	$(FLATMATH_FLATC_GO_FLAGS) \
	-o $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/go/mutable/

##---

gen_flatbuffer_flatmath_headers: \
	gen_flatbuffer_flatmath_readonly_headers \
	gen_flatbuffer_flatmath_mutable_headers \
	;

gen_flatbuffer_flatmath_readonly_headers:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/flatc \
		$(FLATMATH_FLATC_CPP_FLAGS_READONLY) \
		$(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas/flatmath.fbs

gen_flatbuffer_flatmath_mutable_headers:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/flatc \
		$(FLATMATH_FLATC_CPP_FLAGS_MUTABLE) \
		$(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas/flatmath.fbs

gen_flatbuffer_flatmath_schema_headers:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/bin2cppstring \
		-f $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas/flatmath.fbs \
		-o $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/include/flatmath/flatmath_schema.hxx \
		-n flatmath_schema

##---

gen_flatbuffer_flatmath_go: \
	gen_flatbuffer_flatmath_readonly_go \
	gen_flatbuffer_flatmath_mutable_go \
	;

gen_flatbuffer_flatmath_readonly_go:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/flatc \
		$(FLATMATH_FLATC_GO_FLAGS_READONLY) \
		$(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas/flatmath.fbs

gen_flatbuffer_flatmath_mutable_go:
	@$(PROJECT_SCAFFOLDING)/tools/bin/darwin/flatc \
		$(FLATMATH_FLATC_GO_FLAGS_MUTABLE) \
		$(PROJECT_SCAFFOLDING)/thirdparty/flatmath/schemas/flatmath.fbs

##---


fmt_flatbuffer_flatmath_headers:
	@clang-format -i $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/include/flatmath/readonly/*_generated.h
	@clang-format -i $(PROJECT_SCAFFOLDING)/thirdparty/flatmath/include/flatmath/mutable/*_generated.h

# just being verbose
prn_flatmath_verbose:
	@echo "generating flatmath flatbuffers"

# rule to invoke
gen_flatmath_flatbuffers: \
	prn_flatmath_verbose \
	gen_flatbuffer_flatmath_headers \
	gen_flatbuffer_flatmath_schema_headers \
	gen_flatbuffer_flatmath_go \
	;
