from conans import ConanFile, CMake, tools


class CppCoroConan(ConanFile):
    name = "cppcoro"
    version = "0.1"
    license = "MIT"
    author = "Richard Vock <vock@cs.uni-bonn.de>"
    url = "https://github.com/richard-vock/cppcoro"
    description = "The 'cppcoro' library provides a set of general-purpose primitives for making use of the coroutines TS proposal described in N4680"
    topics = ("coroutines")
    settings = "os"
    exports_sources = "include*"

    def package(self):
        self.copy("*", dst="include", src="include", keep_path=True)

    def package_id(self):
        self.info.header_only()

