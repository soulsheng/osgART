set(module_name osgart_video_dummyimage)

add_library(${module_name} MODULE DummyImageVideo.cpp)	

	
set_target_properties(${module_name}
	PROPERTIES
	PREFIX ""
	PROJECT_LABEL "Video Plugin ${module_name}"
	)

set(addon_libs)

target_link_libraries(${module_name} 
	osgART 
	${OSG_LIBRARY} 
	${OPENTHREADS_LIBRARY} 	
	${addon_libs}
	)
	
install_osgart_plugin(${module_name})
