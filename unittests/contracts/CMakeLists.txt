# will be implictly used for any compilation unit if not overrided by SYSTEM_INCLUDE_FOLDERS parameter
# these directories go as -isystem <dir> to avoid warnings from code of third-party libraries

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/arisenio.bios/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/arisenio.bios/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/arisenio.msig/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/arisenio.msig/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/arisenio.system/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/arisenio.system/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/arisenio.token/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/arisenio.token/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/arisenio.wrap/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/arisenio.wrap/)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/old_versions/v1.6.0-rc3/arisenio.bios/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/old_versions/v1.6.0-rc3/arisenio.bios/)
