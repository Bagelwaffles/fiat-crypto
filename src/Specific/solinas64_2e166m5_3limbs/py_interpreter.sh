#!/bin/sh
set -eu

/usr/bin/env python3 "$@" -Dq='2**166 - 5' -Dmodulus_bytes='55 + 1/3' -Da24='121665'
