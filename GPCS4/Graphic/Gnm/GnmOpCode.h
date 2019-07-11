#pragma once


enum OpCodeDrawPrivate
{
	OP_DISPATCH =,
	OP_DISPATCH_INDIRECT =,
	OP_DISPATCH_INDIRECT_WITH_ORDERED_APPEND =,
	OP_DISPATCH_WITH_ORDERED_APPEND =,
	OP_DRAW_INDEX =,
	OP_DRAW_INDEX_AUTO =,
	OP_DRAW_INDEX_INDIRECT =,
	OP_DRAW_INDEX_INDIRECT_COUNT_MULTI =,
	OP_DRAW_INDEX_INLINE =,
	OP_DRAW_INDEX_MULTI_INSTANCED =,
	OP_DRAW_INDEX_OFFSET =,
	OP_DRAW_INDIRECT =,
	OP_DRAW_INDIRECT_COUNT_MULTI =,
	OP_DRAW_OPAQUE_AUTO =,
	OP_INITIALIZE_DEFAULT_HARDWARE_STATE =,
	OP_INITIALIZE_TO_DEFAULT_CONTEXT_STATE =,
	OP_POP_MARKER =,
};

enum OpCodeDraw
{
	OP_ALLOCATE_FROM_COMMAND_BUFFER = 0xC0001000,
	OP_CHAIN_COMMAND_BUFFER = 0xC0023F00,
	OP_DISABLE_GS_MODE = 0xC0016900,
	OP_DISABLE_ORDERED_APPEND_ALLOCATION_COUNTER = 0xC0037900,
	OP_DISPATCH_DRAW = 0xC0028D00,
	OP_DMA_DATA = 0xC0055000,
	OP_ENABLE_GS_MODE = 0xC0016900,
	OP_ENABLE_ORDERED_APPEND_ALLOCATION_COUNTER = 0xC0037900,
	OP_FLUSH_SHADER_CACHES_AND_WAIT = 0xC0055800,
	OP_FLUSH_SHADER_CACHES_AND_WAIT_DBCACHE = 0xC0004600,
	OP_FLUSH_STREAMOUT_0 = 0xC0004600,
	OP_FLUSH_STREAMOUT_1 = 0xC0055800,
	OP_FLUSH_STREAMOUT_2 = 0xC0017900,
	OP_FLUSH_STREAMOUT_3 = 0xC0053C00,
	OP_INCREMENT_DE_COUNTER = 0xC0008500,
	OP_INSERT_NOP = 0xC0001000,  // if opcode is 0x80000000, means only one dword
	OP_MARK_DISPATCH_DRAW_ACB_ADDRESS = 0xC0001000,
	OP_PAUSE = 0xC0005900,
	
	OP_PREFETCH_INTO_L2 = 0xC0055000,
	OP_PREPARE_FLIP =,
	OP_PREPARE_FLIP_WITH_EOP_INTERRUPT =,
	OP_PUSH_MARKER =,
	OP_READ_CPC_PERF_COUNTER =,
	OP_READ_CPC_PERF_COUNTERS =,
	OP_READ_CPF_PERF_COUNTER =,
	OP_READ_CPF_PERF_COUNTERS =,
	OP_READ_CP_PERF_COUNTER =,
	OP_READ_CP_PERF_COUNTERS =,
	OP_READ_DATA_FROM_GDS =,
	OP_READ_GDS_PERF_COUNTER =,
	OP_READ_GDS_PERF_COUNTERS =,
	OP_READ_TCS_PERF_COUNTER =,
	OP_READ_TCS_PERF_COUNTERS =,
	OP_READ_WD_PERF_COUNTER =,
	OP_READ_WD_PERF_COUNTERS =,
	OP_REQUEST_MIP_STATS_REPORT_AND_RESET =,
	OP_RESET_FOVEATED_WINDOW =,
	OP_RESET_VGT_CONTROL =,
	OP_RESUME =,
	OP_SELECT_CPC_PERF_COUNTER =,
	OP_SELECT_CPC_PERF_COUNTERS =,
	OP_SELECT_CPF_PERF_COUNTER =,
	OP_SELECT_CPF_PERF_COUNTERS =,
	OP_SELECT_CP_PERF_COUNTER =,
	OP_SELECT_CP_PERF_COUNTERS =,
	OP_SELECT_GDS_PERF_COUNTER =,
	OP_SELECT_GDS_PERF_COUNTERS =,
	OP_SELECT_IA_PERF_COUNTER =,
	OP_SELECT_IA_PERF_COUNTERS =,
	OP_SELECT_SQ_PERF_COUNTERS =,
	OP_SELECT_TCA_PERF_COUNTER =,
	OP_SELECT_TCA_PERF_COUNTERS =,
	OP_SELECT_TCC_PERF_COUNTER =,
	OP_SELECT_TCC_PERF_COUNTERS =,
	OP_SELECT_TCS_PERF_COUNTER =,
	OP_SELECT_TCS_PERF_COUNTERS =,
	OP_SELECT_WD_PERF_COUNTER =,
	OP_SELECT_WD_PERF_COUNTERS =,
	OP_SET_AA_SAMPLE_COUNT =,
	OP_SET_AA_SAMPLE_LOCATION_CONTROL =,
	OP_SET_AA_SAMPLE_MASK =,
	OP_SET_ACTIVE_SHADER_STAGES =,
	OP_SET_ALPHA_TO_MASK_CONTROL =,
	OP_SET_BASE_INDIRECT_ARGS =,
	OP_SET_BLEND_COLOR =,
	OP_SET_BLEND_CONTROL =,
	OP_SET_BORDER_COLOR_TABLE_ADDR =,
	OP_SET_CB_CONTROL =,
	OP_SET_CLIP_CONTROL =,
	OP_SET_CLIP_RECTANGLE =,
	OP_SET_CLIP_RECTANGLE_RULE =,
	OP_SET_CMASK_CLEAR_COLOR =,
	OP_SET_COMPUTE_RESOURCE_MANAGEMENT_FOR_BASE =,
	OP_SET_COMPUTE_RESOURCE_MANAGEMENT_FOR_NEO =,
	OP_SET_COMPUTE_SCRATCH_SIZE =,
	OP_SET_COMPUTE_SHADER_CONTROL =,
	OP_SET_CONFIG_REGISTER =,
	OP_SET_CONFIG_REGISTER_RANGE =,
	OP_SET_CONTEXT_REGISTER =,
	OP_SET_CONTEXT_REGISTER_RANGE =,
	OP_SET_CONTEXT_REGISTER_WITH_INDEX =,
	OP_SET_CS_SHADER =,
	OP_SET_DB_COUNT_CONTROL =,
	OP_SET_DB_RENDER_CONTROL =,
	OP_SET_DEPTH_BOUNDS_RANGE =,
	OP_SET_DEPTH_CLEAR_VALUE =,
	OP_SET_DEPTH_EQAA_CONTROL =,
	OP_SET_DEPTH_RENDER_TARGET =,
	OP_SET_DEPTH_STENCIL_CONTROL =,
	OP_SET_DEPTH_STENCIL_DISABLE =,
	OP_SET_DISPATCH_DRAW_INDEX_DEALLOCATION_MASK =,
	OP_SET_DRAW_PAYLOAD_CONTROL =,
	OP_SET_EMBEDDED_PS_SHADER =,
	OP_SET_EMBEDDED_VS_SHADER =,
	OP_SET_ES_SHADER =,
	OP_SET_FOVEATED_WINDOW =,
	OP_SET_GENERIC_SCISSOR =,
	OP_SET_GRAPHICS_SCRATCH_SIZE =,
	OP_SET_GRAPHICS_SHADER_CONTROL =,
	OP_SET_GS_MODE =,
	OP_SET_GS_ON_CHIP_CONTROL =,
	OP_SET_GS_SHADER =,
	OP_SET_GUARD_BANDS =,
	OP_SET_HARDWARE_SCREEN_OFFSET =,
	OP_SET_HS_SHADER =,
	OP_SET_HTILE_STENCIL0 =,
	OP_SET_HTILE_STENCIL1 =,
	OP_SET_INDEX_BUFFER =,
	OP_SET_INDEX_COUNT =,
	OP_SET_INDEX_OFFSET =,
	OP_SET_INDEX_SIZE =,
	OP_SET_INSTANCE_STEP_RATE =,
	OP_SET_LINE_WIDTH =,
	OP_SET_LS_SHADER =,
	OP_SET_MARKER =,
	OP_SET_NUM_INSTANCES =,
	OP_SET_OBJECT_ID =,
	OP_SET_OBJECT_ID_MODE =,
	OP_SET_PERF_COUNTER_CONTROL =,
	OP_SET_PERFMON_ENABLE =,
	OP_SET_PERSISTENT_REGISTER =,
	OP_SET_PERSISTENT_REGISTER_RANGE =,
	OP_SET_POINTER_IN_USER_DATA =,
	OP_SET_POINT_MIN_MAX =,
	OP_SET_POINT_SIZE =,
	OP_SET_POLYGON_OFFSET_BACK =,
	OP_SET_POLYGON_OFFSET_CLAMP =,
	OP_SET_POLYGON_OFFSET_FRONT =,
	OP_SET_POLYGON_OFFSET_Z_FORMAT =,
	OP_SET_PREDICATION =,
	OP_SET_PRIMITIVE_ID_ENABLE =,
	OP_SET_PRIMITIVE_RESET_INDEX =,
	OP_SET_PRIMITIVE_RESET_INDEX_ENABLE =,
	OP_SET_PRIMITIVE_SETUP =,
	OP_SET_PRIMITIVE_TYPE =,
	OP_SET_PS_SHADER =,
	OP_SET_PS_SHADER_RATE =,
	OP_SET_PS_SHADER_SAMPLE_EXCLUSION_MASK =,
	OP_SET_PS_SHADER_USAGE =,
	OP_SET_REGISTER_RANGE =,
	OP_SET_RENDER_OVERRIDE2CONTROL =,
	OP_SET_RENDER_OVERRIDE_CONTROL =,
	OP_SET_RENDER_TARGET =,
	OP_SET_RENDER_TARGET_MASK =,
	OP_SET_SCALED_RESOLUTION_GRID =,
	OP_SET_SCAN_MODE_CONTROL =,
	OP_SET_SCREEN_SCISSOR =,
	OP_SET_SSHARP_IN_USER_DATA =,
	OP_SET_STENCIL =,
	OP_SET_STENCIL_CLEAR_VALUE =,
	OP_SET_STENCIL_OP_CONTROL =,
	OP_SET_STENCIL_SEPARATE =,
	OP_SET_STREAMOUT_BUFFER_DIMENSIONS =,
	OP_SET_STREAMOUT_MAPPING =,
	OP_SET_TESSELLATION_DISTRIBUTION_THRESHOLDS =,
	OP_SET_TEXTURE_GRADIENT_FACTORS =,
	OP_SET_TSHARP_IN_USER_DATA =,
	OP_SETUP_DRAW_OPAQUE_PARAMETERS =,
	OP_SETUP_ES_GS_RING_REGISTERS =,
	OP_SETUP_GS_VS_RING_REGISTERS =,
	OP_SET_USER_CLIP_PLANE =,
	OP_SET_USER_CONFIG_REGISTER =,
	OP_SET_USER_CONFIG_REGISTER_RANGE =,
	OP_SET_USER_CONFIG_REGISTER_WITH_INDEX =,
	OP_SET_USER_DATA =,
	OP_SET_USER_DATA_REGION =,
	OP_SET_VERTEX_QUANTIZATION =,
	OP_SET_VERTEX_REUSE_ENABLE =,
	OP_SET_VGT_CONTROL =,
	OP_SET_VGT_CONTROL_FOR_BASE =,
	OP_SET_VGT_CONTROL_FOR_NEO =,
	OP_SET_VIEWPORT =,
	OP_SET_VIEWPORT_SCISSOR =,
	OP_SET_VIEWPORT_TRANSFORM_CONTROL =,
	OP_SET_VSHARP_IN_USER_DATA =,
	OP_SET_VS_SHADER =,
	OP_SET_VS_SHADER_STREAMOUT_ENABLE =,
	OP_SET_WINDOW_OFFSET =,
	OP_SET_WINDOW_SCISSOR =,
	OP_SET_Z_PASS_PREDICATION_DISABLE =,
	OP_SET_Z_PASS_PREDICATION_ENABLE =,
	OP_SIGNAL_SEMAPHORE =,
	OP_STALL_COMMAND_BUFFER_PARSER =,
	OP_TRIGGER_END_OF_PIPE_INTERRUPT =,
	OP_TRIGGER_EVENT =,
	OP_UPDATE_GS_SHADER =,
	OP_UPDATE_HS_SHADER =,
	OP_UPDATE_PS_SHADER =,
	OP_UPDATE_VS_SHADER =,
	OP_WAIT_FOR_GRAPHICS_WRITES =,
	OP_WAIT_FOR_SETUP_DISPATCH_DRAW_KICK_RING_BUFFER =,
	OP_WAIT_ON_ADDRESS =,
	OP_WAIT_ON_ADDRESS_AND_STALL_COMMAND_BUFFER_PARSER =,
	OP_WAIT_ON_CE =,
	OP_WAIT_ON_REGISTER =,
	OP_WAIT_SEMAPHORE =,
	OP_WAIT_UNTIL_SAFE_FOR_RENDERING =,
	OP_WRITE_AT_END_OF_PIPE =,
	OP_WRITE_AT_END_OF_PIPE_WITH_INTERRUPT =,
	OP_WRITE_AT_END_OF_SHADER =,
	OP_WRITE_DATA_INLINE =,
	OP_WRITE_DATA_INLINE_THROUGH_L2 =,
	OP_WRITE_EVENT_STATS =,
	OP_WRITE_OCCLUSION_QUERY =,
	OP_WRITE_STREAMOUT_BUFFER_OFFSET =,
	OP_WRITE_STREAMOUT_BUFFER_UPDATE =,
	OP_WRITE_WAIT_MEM_CMD =,

};
