#pragma once

#ifdef __cplusplus
extern "C" {
#endif

int objexport(int _tileX, int _tileY, int _tileZ, bool _splitMeshes, int _sizehint, int _nsamples,
        bool _bakeAO);

#ifdef __cplusplus
}
#endif
