load("@rules_cc//cc:defs.bzl","cc_binary","cc_library")
 
cc_binary(
 
    name = "Example",
    srcs = ["main.cc"],
    deps=[
        "//src/Addition:Addition",
        "//src/Subtraction:Subtraction",
        "//src/Multiplication:Multiplication",
        "//src/Division:Division"
    ],
)

