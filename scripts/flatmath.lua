-- premake for flatmath

flatmath_root = path.join(SCAFFOLDING_THIRDPARTY_DIR, "flatmath")

flatmath_includedirs = {
	flatmath_root,
    path.join(flatmath_root, "include"),
}

flatmath_libdirs = {}
flatmath_links = {}
flatmath_defines = {}

---

if generate_thirdparty_projects and generate_thirdparty_projects == true then

project "flatmath"
	kind "StaticLib"
	language "C++"
	flags {}

	includedirs {
		flatmath_includedirs,
		khutils_includedirs,
		flatbuffers_includedirs,
		glm_includedirs,
		fmtlib_includedirs,
		bandit_includedirs,
	}

	defines {
	}

	files {
		path.join(flatmath_root, "include", "flatmath", "**.h"),
		path.join(flatmath_root, "include", "flatmath", "**.hpp"),
		path.join(flatmath_root, "include", "flatmath", "**.hxx"),
		path.join(flatmath_root, "include", "flatmath", "**.cpp"),
		path.join(flatmath_root, "include", "flatmath", "**.inl"),
		path.join(flatmath_root, "schemas", "**.fbs"),
	}

	links {
	}

build_cppfwd("flatmath")

end -- _OPTIONS["with-thirdparty"] ~= nil

---

