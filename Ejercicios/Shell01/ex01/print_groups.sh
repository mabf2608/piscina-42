#!/bin/sh
FT_USER=bocal
groups=$(id -Gn $FT_USER | tr ' ' ',')
echo -n "$groups"
