#ifndef SMOOTHAS_H
#define	SMOOTHAS_H

#include <osg/Matrix>
#include <osgUtil/SceneView>
#include <osgUtil/IntersectVisitor>
#include <osg/io_utils>


#include <osgART/ARTTransform>
#include "SingleMarker"

#include <string>
#include <Map>
#include <List>


namespace osgART {

	class SmoothAs {

	public:

		SmoothAs();
		~SmoothAs();

		void setMatrixBufferSize(int size);
		void setOutlierDistance(int dist);
		void setmaxNumofOutliers(int num);
		void enableOutlierRejection(bool val);
		bool checkForTransOutlier(osg::Matrix& matrix);
		bool checkForRotOutlier(osg::Matrix& matrix);
		void putTransform(osg::Matrix& matrix);
		osg::Matrix* getTransform();

	protected:

		typedef std::vector< osg::Matrix* > MatrixList;
		MatrixList m_matrixlist;
		
		int m_matrixBufferSize;
		int m_outlierDistance;
		int m_outlierCount;
		int m_maxNumOfOutliers;

		bool m_OutlierRejection;

	private:

	};

};
#endif