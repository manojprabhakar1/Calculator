load("@rules_cc//cc:defs.bzl","cc_binary","cc_library")
 
cc_binary(
 
    name = "Example",
    srcs = ["main.cc"],
    deps=[
        ":calculator"
    ],
)

cc_library(
    name = "calculator",
    srcs = ["calculator.cc"],
    hdrs = ["calculator.h"],
    visibility=["//visibility:public"],
)
