# File fon/manual_Script.cpp.praat
# Generated by test/createTests.praat
# Sun Oct  8 15:07:02 2017

assert --6 = 6
assert 2^6 = 64

assert 2^-6 = 0.015625

assert -(1+1)^6 = -64

assert 4^3^2 = 262144

assert 4^3 ^ 2 = 262144

assert (4 ^ 3) ^ 2 = 4096

assert string$ (sqrt (2)) = "1.4142135623730951"

assert fixed$ (sqrt (2), 3) = "1.414"

assert fixed$ (sqrt (2), 0) = "1"

jitter = 0.0156789
assert percent$ (jitter, 3) = "1.568%"
jitter = -0.0156789
assert percent$ (jitter, 3) = "-1.568%"

assert percent$ (0, 3) = "0"
jitter = 0.000000156789
assert percent$ (jitter, 3) = "0.00002%"
jitter *= -1
assert percent$ (jitter, 3) = "-0.00002%"

fgh = 567
assert variableExists ("fgh")
assert not variableExists ("jhfwbfejfgcds")

appendInfoLine: "fon/manual_Script.cpp.praat", " OK"
