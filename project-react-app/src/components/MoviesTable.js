import React from "react";
import { render } from "react-dom";
//import cellData from './cellData';

class MoviesTable extends React.Component {
  state = {
    rows: [
        {
    title: 'Black Widow',
    duration: '2h 13m',
    rating: 81,
    genre: 'Action'
  },
  {
    title: 'Jungle Cruise',
    duration: '2h 7m',
    rating: 63,
    genre: 'Adventure'
  },
  {
    title: 'The Suicide Squad',
    duration: '2h 12m',
    rating: 96,
    genre: 'Action'
  },
  {
    title: 'Old',
    duration: '1h 58',
    rating: 49,
    genre: 'Thriller'
  },
    ]
  };
  handleChange = idx => e => {
    const { name, value } = e.target;
    const rows = [...this.state.rows];
    rows[idx] = {
      [name]: value
    };
    this.setState({
      rows
    });
  };
  handleAddRow = () => {
    const item = {
      title: "",
      duration: "",
      rating: "",
      genre: ""
    };
    this.setState({
      rows: [...this.state.rows, item]
    });
  };
  handleRemoveRow = () => {
    this.setState({
      rows: this.state.rows.slice(0, -1)
    });
  }
  handleRemoveSpecificRow = (idx) => () => {
    const rows = [...this.state.rows]
    rows.splice(idx, 1)
    this.setState({ rows })
  }

  render() {
    return (
      <div>
        <div className="container">
          <div className="row clearfix">
            <div className="col-md-12 column">
              <table
                className="table table-bordered table-hover"
                id="tab_logic"
              >
              
                <thead>
                  <tr>
                    <th className="text-center"> ID </th>
                    <th className="text-center"> Title </th>
                    <th className="text-center"> Duration </th>
                    <th className="text-center"> Rating </th>
                    <th className="text-center"> Genre </th>
                    <th />
                  </tr>
                </thead>
                <tbody>
                  {this.state.rows.map((item, idx) => (
                    <tr id="addr0" key={idx}>
                      <td>{idx}</td>
                      <td>
                        <input
                          type="text"
                          name="title"
                          value={this.state.rows[idx].title}
                          onChange={this.handleChange(idx)}
                          className="form-control"
                        />
                      </td>
                      <td>
                        <input
                          type="text"
                          name="duration"
                          value={this.state.rows[idx].duration}
                          onChange={this.handleChange(idx)}
                          className="form-control"
                        />
                      </td>
                      <td>
                        <input
                          type="text"
                          name="rating"
                          value={this.state.rows[idx].rating}
                          onChange={this.handleChange(idx)}
                          className="form-control"
                        />
                      </td>
                      <td>
                        <input
                          type="text"
                          name="genre"
                          value={this.state.rows[idx].genre}
                          onChange={this.handleChange(idx)}
                          className="form-control"
                        />
                      </td>
                      <td>
                        <button
                          className="btn btn-outline-danger btn-sm"
                          onClick={this.handleRemoveSpecificRow(idx)}
                        >
                          Remove
                        </button>
                      </td>
                    </tr> 
                  ))}
                </tbody>
              </table>
              <button onClick={this.handleAddRow} className="btn btn-primary">
                Add Row
              </button>
              <button
                onClick={this.handleRemoveRow}
                className="btn btn-danger float-right"
              >
                Delete Last Row
              </button>
            </div>
          </div>
        </div>
      </div>
    );
  }
}

render(<MoviesTable />, document.getElementById("root"));

export default MoviesTable