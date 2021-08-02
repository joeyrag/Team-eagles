import Header from '../components/Header'
import Meta from '../components/Meta'
import MoviesTable from '../components/MoviesTable'
const Movies = () => {
// page content
  const pageTitle = 'Movies'
  const pageDescription = 'Manage the movies here. Click any cell to edit.'

  return (
    <div>
      <Meta title={pageTitle}/>
      <Header head={pageTitle} description={pageDescription} />
      <MoviesTable />
    </div>
  )
}

export default Movies