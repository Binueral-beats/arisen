#!/usr/bin/env bash
set -eo pipefail

NAME=$1
ARISEN_PREFIX=${PREFIX}/${SUBPREFIX}
mkdir -p ${PREFIX}/bin/
#mkdir -p ${PREFIX}/lib/cmake/${PROJECT}
mkdir -p ${ARISEN_PREFIX}/bin
mkdir -p ${ARISEN_PREFIX}/licenses/arisenio
#mkdir -p ${ARISEN_PREFIX}/include
#mkdir -p ${ARISEN_PREFIX}/lib/cmake/${PROJECT}
#mkdir -p ${ARISEN_PREFIX}/cmake
#mkdir -p ${ARISEN_PREFIX}/scripts

# install binaries 
cp -R ${BUILD_DIR}/bin/* ${ARISEN_PREFIX}/bin  || exit 1

# install licenses
cp -R ${BUILD_DIR}/licenses/arisenio/* ${ARISEN_PREFIX}/licenses || exit 1

# install libraries
#cp -R ${BUILD_DIR}/lib/* ${ARISEN_PREFIX}/lib

# install cmake modules
#sed "s/_PREFIX_/\/${SPREFIX}/g" ${BUILD_DIR}/modules/ArisenioTesterPackage.cmake &> ${ARISEN_PREFIX}/lib/cmake/${PROJECT}/ArisenioTester.cmake
#sed "s/_PREFIX_/\/${SPREFIX}\/${SSUBPREFIX}/g" ${BUILD_DIR}/modules/${PROJECT}-config.cmake.package &> ${ARISEN_PREFIX}/lib/cmake/${PROJECT}/${PROJECT}-config.cmake

# install includes
#cp -R ${BUILD_DIR}/include/* ${ARISEN_PREFIX}/include

# make symlinks
#pushd ${PREFIX}/lib/cmake/${PROJECT} &> /dev/null
#ln -sf ../../../${SUBPREFIX}/lib/cmake/${PROJECT}/${PROJECT}-config.cmake ${PROJECT}-config.cmake
#ln -sf ../../../${SUBPREFIX}/lib/cmake/${PROJECT}/ArisenioTester.cmake ArisenioTester.cmake
#popd &> /dev/null

for f in $(ls "${BUILD_DIR}/bin/"); do
   bn=$(basename $f)
   ln -sf ../${SUBPREFIX}/bin/$bn ${PREFIX}/bin/$bn || exit 1
done
echo "Generating Tarball $NAME.tar.gz..."
tar -cvzf $NAME.tar.gz ./${PREFIX}/* || exit 1
rm -r ${PREFIX} || exit 1
