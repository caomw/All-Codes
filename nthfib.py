#!/usr/bin/python
# -*- encoding: utf-8 -*-
# pylint: disable=invalid-name,missing-docstring,bad-builtin

def nthnonfib(n):
    fibs = [2, 3, 5]
    gaps = [0, 1, 2]
    for x in xrange(50):
        fibs.append(fibs[-1] + fibs[-2])
    for x in xrange(50):
        gaps.append(gaps[-1] + gaps[-2] + 1)
    for x in xrange(1, len(gaps)):
        gaps[x] += gaps[x - 1]
    result = None

    # linear search, can be replaced with binary search
    for x in xrange(1, len(gaps)):
        if gaps[x] >= n:
            result = fibs[x] + n - gaps[x - 1]
            break
    return result

for i in xrange(1, 400):
    print nthnonfib(i),