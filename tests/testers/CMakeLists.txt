add_executable (metadata-text-tester metadata-text-tester.cpp)
add_executable (metadata-stream-tester metadata-stream-tester.cpp)
add_executable (iter-data-tester iter-data-tester.cpp)
target_link_libraries (metadata-text-tester yactfr)
target_link_libraries (metadata-stream-tester yactfr)
target_link_libraries (iter-data-tester yactfr)
include_directories (
    "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/../common"
)
add_custom_target (
    testers
    DEPENDS
        metadata-text-tester
        metadata-stream-tester
        iter-data-tester
)
