#!/bin/bash

SQLITE_DOWNLOADFILE=sqlite-autoconf-3370000
SQLITE_DOWNLOADFILE_ZIP="${SQLITE_DOWNLOADFILE}.tar.gz"
SQLITE_DOWNLOADURL=
SQLITE_COMMAND=sqlite3

local STATUS=$(dpkg-query -W -f='${Status}' $SQLITE_COMMAND 2>/dev/null | grep -c "ok installed") || true
if [[ "$STATUS" != "1" ]]
then
	wget "https://www.sqlite.org/2021/${SQLITE_DOWNLOADFILE_ZIP}" -P /tmp
	tar xvfz "${SQLITE_DOWNLOADFILE_ZIP}"
	cd "${SQLITE_DOWNLOADFILE}"
	./configure --prefix=/usr/local
	make
	make install
fi